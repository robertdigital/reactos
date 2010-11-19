
HEADER("CR0 flags"),
CONSTANT(CR0_PE),
CONSTANT(CR0_MP),
CONSTANT(CR0_EM),
CONSTANT(CR0_TS),
CONSTANT(CR0_ET),
CONSTANT(CR0_NE),
CONSTANT(CR0_WP),
CONSTANT(CR0_AM),
CONSTANT(CR0_NW),
CONSTANT(CR0_CD),
CONSTANT(CR0_PG),

HEADER("CR4 flags"),
CONSTANT(CR4_VME),
CONSTANT(CR4_PVI),
CONSTANT(CR4_TSD),
CONSTANT(CR4_DE),
CONSTANT(CR4_PSE),
CONSTANT(CR4_PAE),
CONSTANT(CR4_MCE),
CONSTANT(CR4_PGE),
CONSTANT(CR4_FXSR),
CONSTANT(CR4_XMMEXCPT),
//CONSTANT(CR4_PGE_V),
//CONSTANT(CR4_XSAVE),

HEADER("KeFeatureBits flags"),
CONSTANT(KF_RDTSC),
CONSTANT(KF_CR4),
CONSTANT(KF_GLOBAL_PAGE),
CONSTANT(KF_LARGE_PAGE),
CONSTANT(KF_CMPXCHG8B),
CONSTANT(KF_FAST_SYSCALL),
CONSTANT(KF_V86_VIS),
//CONSTANT(KF_XSTATE),

HEADER("Machine type definitions"),
CONSTANT(MACHINE_TYPE_ISA),
CONSTANT(MACHINE_TYPE_EISA),
CONSTANT(MACHINE_TYPE_MCA),

HEADER("EFLAGS"),
CONSTANT(EFLAGS_TF),
CONSTANT(EFLAGS_INTERRUPT_MASK),
CONSTANT(EFLAGS_V86_MASK),
CONSTANT(EFLAGS_ALIGN_CHECK),
CONSTANT(EFLAGS_VIF),
CONSTANT(EFLAGS_VIP),
CONSTANT(EFLAGS_USER_SANITIZE),

HEADER("KDGT selectors"),
CONSTANT(KGDT_R3_DATA),
CONSTANT(KGDT_R3_CODE),
CONSTANT(KGDT_R0_CODE),
CONSTANT(KGDT_R0_DATA),
CONSTANT(KGDT_R0_PCR),
//CONSTANT(KGDT_STACK16),
//CONSTANT(KGDT_CODE16),
CONSTANT(KGDT_TSS),
CONSTANT(KGDT_R3_TEB),
CONSTANT(KGDT_DF_TSS),
CONSTANT(KGDT_NMI_TSS),
CONSTANT(KGDT_LDT),

CONSTANT(NPX_STATE_NOT_LOADED),
CONSTANT(NPX_STATE_LOADED),
//CONSTANT(NPX_MASK_LAZY),

/*
HEADER("VDM constants"),
CONSTANT(VDM_INDEX_Invalid),
CONSTANT(VDM_INDEX_0F),
CONSTANT(VDM_INDEX_ESPrefix),
CONSTANT(VDM_INDEX_CSPrefix),
CONSTANT(VDM_INDEX_SSPrefix),
CONSTANT(VDM_INDEX_DSPrefix),
CONSTANT(VDM_INDEX_FSPrefix),
CONSTANT(VDM_INDEX_GSPrefix),
CONSTANT(VDM_INDEX_OPER32Prefix),
CONSTANT(VDM_INDEX_ADDR32Prefix),
CONSTANT(VDM_INDEX_INSB),
CONSTANT(VDM_INDEX_INSW),
CONSTANT(VDM_INDEX_OUTSB),
CONSTANT(VDM_INDEX_OUTSW),
CONSTANT(VDM_INDEX_PUSHF),
CONSTANT(VDM_INDEX_POPF),
CONSTANT(VDM_INDEX_INTnn),
CONSTANT(VDM_INDEX_INTO),
CONSTANT(VDM_INDEX_IRET),
CONSTANT(VDM_INDEX_NPX),
CONSTANT(VDM_INDEX_INBimm),
CONSTANT(VDM_INDEX_INWimm),
CONSTANT(VDM_INDEX_OUTBimm),
CONSTANT(VDM_INDEX_OUTWimm),
CONSTANT(VDM_INDEX_INB),
CONSTANT(VDM_INDEX_INW),
CONSTANT(VDM_INDEX_OUTB),
CONSTANT(VDM_INDEX_OUTW),
CONSTANT(VDM_INDEX_LOCKPrefix),
CONSTANT(VDM_INDEX_REPNEPrefix),
CONSTANT(VDM_INDEX_REPPrefix),
CONSTANT(VDM_INDEX_CLI),
CONSTANT(VDM_INDEX_STI),
CONSTANT(VDM_INDEX_HLT),
CONSTANT(MAX_VDM_INDEX),
*/
CONSTANT(PF_XMMI_INSTRUCTIONS_AVAILABLE),
CONSTANT(EFLAG_SELECT),
//CONSTANT(IPI_FREEZE),
//CONSTANT(XSAVE_PRESENT),

HEADER("CONTEXT"),
OFFSET(CsContextFlags, CONTEXT, ContextFlags),
OFFSET(CsDr0, CONTEXT, Dr0),
OFFSET(CsDr1, CONTEXT, Dr1),
OFFSET(CsDr2, CONTEXT, Dr2),
OFFSET(CsDr3, CONTEXT, Dr3),
OFFSET(CsDr6, CONTEXT, Dr6),
OFFSET(CsDr7, CONTEXT, Dr7),
OFFSET(CsFloatSave, CONTEXT, FloatSave),
OFFSET(CsSegGs, CONTEXT, SegGs),
OFFSET(CsSegFs, CONTEXT, SegFs),
OFFSET(CsSegEs, CONTEXT, SegEs),
OFFSET(CsSegDs, CONTEXT, SegDs),
OFFSET(CsEdi, CONTEXT, Edi),
OFFSET(CsEsi, CONTEXT, Esi),
OFFSET(CsEbx, CONTEXT, Ebx),
OFFSET(CsEdx, CONTEXT, Edx),
OFFSET(CsEcx, CONTEXT, Ecx),
OFFSET(CsEax, CONTEXT, Eax),
OFFSET(CsEbp, CONTEXT, Ebp),
OFFSET(CsEip, CONTEXT, Eip),
OFFSET(CsSegCs, CONTEXT, SegCs),
OFFSET(CsEflags, CONTEXT, EFlags),
OFFSET(CsEsp, CONTEXT, Esp),
OFFSET(CsSegSs, CONTEXT, SegSs),
OFFSET(CsExtendedRegisters, CONTEXT, ExtendedRegisters),
SIZE(ContextFrameLength, CONTEXT),
SIZE(CONTEXT_LENGTH, CONTEXT),

HEADER("KGDTENTRY"),
OFFSET(KgdtBaseLow, KGDTENTRY, BaseLow),
OFFSET(KgdtBaseMid, KGDTENTRY, HighWord.Bytes.BaseMid),
OFFSET(KgdtBaseHi, KGDTENTRY, HighWord.Bytes.BaseHi),
OFFSET(KgdtLimitHi, KGDTENTRY, HighWord.Bytes.Flags2),
OFFSET(KgdtLimitLow, KGDTENTRY, LimitLow),

HEADER("KTRAP_FRAME"),
OFFSET(TsExceptionList, KTRAP_FRAME, ExceptionList),
OFFSET(TsPreviousPreviousMode, KTRAP_FRAME, PreviousPreviousMode),
OFFSET(TsSegGs, KTRAP_FRAME, SegGs),
OFFSET(TsSegFs, KTRAP_FRAME, SegFs),
OFFSET(TsSegEs, KTRAP_FRAME, SegEs),
OFFSET(TsSegDs, KTRAP_FRAME, SegDs),
OFFSET(TsEdi, KTRAP_FRAME, Edi),
OFFSET(TsEsi, KTRAP_FRAME, Esi),
OFFSET(TsEbp, KTRAP_FRAME, Ebp),
OFFSET(TsEbx, KTRAP_FRAME, Ebx),
OFFSET(TsEdx, KTRAP_FRAME, Edx),
OFFSET(TsEcx, KTRAP_FRAME, Ecx),
OFFSET(TsEax, KTRAP_FRAME, Eax),
OFFSET(TsErrCode, KTRAP_FRAME, ErrCode),
OFFSET(TsEip, KTRAP_FRAME, Eip),
OFFSET(TsSegCs, KTRAP_FRAME, SegCs),
OFFSET(TsEflags, KTRAP_FRAME, EFlags),
OFFSET(TsHardwareEsp, KTRAP_FRAME, HardwareEsp),
OFFSET(TsHardwareSegSs, KTRAP_FRAME, HardwareSegSs),
OFFSET(TsTempSegCs, KTRAP_FRAME, TempSegCs),
//OFFSET(TsLogging, KTRAP_FRAME, Logging),
OFFSET(TsTempEsp, KTRAP_FRAME, TempEsp),
OFFSET(TsDbgEbp, KTRAP_FRAME, DbgEbp),
OFFSET(TsDbgEip, KTRAP_FRAME, DbgEip),
OFFSET(TsDbgArgMark, KTRAP_FRAME, DbgArgMark),
OFFSET(TsDbgArgPointer, KTRAP_FRAME, DbgArgPointer),
OFFSET(TsDr0, KTRAP_FRAME, Dr0),
OFFSET(TsDr1, KTRAP_FRAME, Dr1),
OFFSET(TsDr2, KTRAP_FRAME, Dr2),
OFFSET(TsDr3, KTRAP_FRAME, Dr3),
OFFSET(TsDr6, KTRAP_FRAME, Dr6),
OFFSET(TsDr7, KTRAP_FRAME, Dr7),
OFFSET(TsV86Es, KTRAP_FRAME, V86Es),
OFFSET(TsV86Ds, KTRAP_FRAME, V86Ds),
OFFSET(TsV86Fs, KTRAP_FRAME, V86Fs),
OFFSET(TsV86Gs, KTRAP_FRAME, V86Gs),
SIZE(KTRAP_FRAME_LENGTH, KTRAP_FRAME),
CONSTANT(KTRAP_FRAME_ALIGN),
CONSTANT(FRAME_EDITED),

HEADER("KTSS"),
OFFSET(TssEsp0, KTSS, Esp0),
OFFSET(TssCR3, KTSS, CR3),
OFFSET(TssEip, KTSS, Eip),
OFFSET(TssEFlags, KTSS, EFlags),
OFFSET(TssEax, KTSS, Eax),
OFFSET(TssEbx, KTSS, Ebx),
OFFSET(TssEcx, KTSS, Ecx),
OFFSET(TssEdx, KTSS, Edx),
OFFSET(TssEsp, KTSS, Esp),
OFFSET(TssEbp, KTSS, Ebp),
OFFSET(TssEsi, KTSS, Esi),
OFFSET(TssEdi, KTSS, Edi),
OFFSET(TssEs, KTSS, Es),
OFFSET(TssCs, KTSS, Cs),
OFFSET(TssSs, KTSS, Ss),
OFFSET(TssDs, KTSS, Ds),
OFFSET(TssFs, KTSS, Fs),
OFFSET(TssGs, KTSS, Gs),
OFFSET(TssLDT, KTSS, LDT),
OFFSET(TssIoMapBase, KTSS, IoMapBase),
OFFSET(TssIoMaps, KTSS, IoMaps),
SIZE(TssLength, KTSS),

// ReactOS stuff here
HEADER("KPCR"),
OFFSET(KPCR_EXCEPTION_LIST, KPCR, NtTib.ExceptionList),
//KPCR_INITIAL_STACK
//KPCR_STACK_LIMIT
OFFSET(KPCR_PERF_GLOBAL_GROUP_MASK, KIPCR, PerfGlobalGroupMask),
OFFSET(KPCR_CONTEXT_SWITCHES, KPCR, ContextSwitches),
// KPCR_SET_MEMBER_COPY
OFFSET(KPCR_TEB, KIPCR, Used_Self),
OFFSET(KPCR_SELF, KIPCR, Self),
OFFSET(KPCR_PRCB, KPCR, Prcb),
//KPCR_IRQL
//KPCR_IRR
//KPCR_IRR_ACTIVE
//KPCR_IDR
//KPCR_KD_VERSION_BLOCK
OFFSET(KPCR_IDT, KIPCR, IDT),
OFFSET(KPCR_GDT, KIPCR, GDT),
OFFSET(KPCR_TSS, KPCR, TSS),
OFFSET(KPCR_STALL_SCALE_FACTOR, KPCR, StallScaleFactor),
//KPCR_SET_MEMBER
//KPCR_NUMBER
//KPCR_VDM_ALERT
OFFSET(KPCR_PRCB_DATA, KIPCR, PrcbData),
OFFSET(KPCR_CURRENT_THREAD, KIPCR, PrcbData.CurrentThread),
OFFSET(KPCR_PRCB_NEXT_THREAD, KIPCR, PrcbData.NextThread),
//KPCR_PRCB_IDLE_THREAD
//KPCR_PROCESSOR_NUMBER
//KPCR_PRCB_SET_MEMBER
//KPCR_PRCB_CPU_TYPE
//KPCR_PRCB_PRCB_LOCK
//KPCR_NPX_THREAD
//KPCR_DR6
//KPCR_DR7
//KPCR_PRCB_INTERRUPT_COUNT               0x644
//KPCR_PRCB_KERNEL_TIME                   0x648
//KPCR_PRCB_USER_TIME                     0x64C
//KPCR_PRCB_DPC_TIME                      0x650
//KPCR_PRCB_DEBUG_DPC_TIME                0x654
//KPCR_PRCB_INTERRUPT_TIME                0x658
//KPCR_PRCB_ADJUST_DPC_THRESHOLD          0x65C
//KPCR_PRCB_SKIP_TICK                     0x664
//KPCR_SYSTEM_CALLS                       0x6B8
OFFSET(KPCR_PRCB_DPC_QUEUE_DEPTH, KIPCR, PrcbData.DpcData[0].DpcQueueDepth),
//KPCR_PRCB_DPC_COUNT                     0xA50
OFFSET(KPCR_PRCB_DPC_STACK, KIPCR, PrcbData.DpcStack),
OFFSET(KPCR_PRCB_MAXIMUM_DPC_QUEUE_DEPTH, KIPCR, PrcbData.MaximumDpcQueueDepth),
//KPCR_PRCB_MAXIMUM_DPC_QUEUE_DEPTH       0xA6C
//KPCR_PRCB_DPC_REQUEST_RATE              0xA70
//KPCR_PRCB_DPC_INTERRUPT_REQUESTED       0xA78
OFFSET(KPCR_PRCB_DPC_ROUTINE_ACTIVE, KIPCR, PrcbData.DpcRoutineActive),
//KPCR_PRCB_DPC_LAST_COUNT                0xA80
OFFSET(KPCR_PRCB_TIMER_REQUEST, KIPCR, PrcbData.TimerRequest),
OFFSET(KPCR_PRCB_QUANTUM_END, KIPCR, PrcbData.QuantumEnd),
//KPCR_PRCB_IDLE_SCHEDULE                 0xAA3
OFFSET(KPCR_PRCB_DEFERRED_READY_LIST_HEAD, KIPCR, PrcbData.DeferredReadyListHead),
OFFSET(KPCR_PRCB_POWER_STATE_IDLE_FUNCTION, KIPCR, PrcbData.PowerState.IdleFunction),

HEADER("KTRAP_FRAME"),
//OFFSET(KTRAP_FRAME_DEBUGEBP                    0x0
//OFFSET(KTRAP_FRAME_DEBUGEIP                    0x4
//OFFSET(KTRAP_FRAME_DEBUGARGMARK                0x8
//OFFSET(KTRAP_FRAME_DEBUGPOINTER                0xC
//OFFSET(KTRAP_FRAME_TEMPCS                      0x10
OFFSET(KTRAP_FRAME_TEMPESP, KTRAP_FRAME, TempEsp),
OFFSET(KTRAP_FRAME_DR0, KTRAP_FRAME, Dr0),
OFFSET(KTRAP_FRAME_DR1, KTRAP_FRAME, Dr1),
OFFSET(KTRAP_FRAME_DR2, KTRAP_FRAME, Dr2),
OFFSET(KTRAP_FRAME_DR3, KTRAP_FRAME, Dr3),
OFFSET(KTRAP_FRAME_DR6, KTRAP_FRAME, Dr6),
OFFSET(KTRAP_FRAME_DR7, KTRAP_FRAME, Dr7),
OFFSET(KTRAP_FRAME_GS, KTRAP_FRAME, SegGs),
//OFFSET(KTRAP_FRAME_RESERVED1                   0x32
OFFSET(KTRAP_FRAME_ES, KTRAP_FRAME, SegEs),
//OFFSET(KTRAP_FRAME_RESERVED2                   0x36
OFFSET(KTRAP_FRAME_DS, KTRAP_FRAME, SegDs),
//OFFSET(KTRAP_FRAME_RESERVED3                   0x3A
OFFSET(KTRAP_FRAME_EDX, KTRAP_FRAME, Edx),
OFFSET(KTRAP_FRAME_ECX, KTRAP_FRAME, Ecx),
OFFSET(KTRAP_FRAME_EAX, KTRAP_FRAME, Eax),
OFFSET(KTRAP_FRAME_PREVIOUS_MODE, KTRAP_FRAME, PreviousPreviousMode),
OFFSET(KTRAP_FRAME_EXCEPTION_LIST, KTRAP_FRAME, ExceptionList),
OFFSET(KTRAP_FRAME_FS, KTRAP_FRAME, SegFs),
//OFFSET(KTRAP_FRAME_RESERVED4                   0x52
OFFSET(KTRAP_FRAME_EDI, KTRAP_FRAME, Edi),
OFFSET(KTRAP_FRAME_ESI, KTRAP_FRAME, Esi),
OFFSET(KTRAP_FRAME_EBX, KTRAP_FRAME, Ebx),
OFFSET(KTRAP_FRAME_EBP, KTRAP_FRAME, Ebp),
OFFSET(KTRAP_FRAME_ERROR_CODE, KTRAP_FRAME, ErrCode),
OFFSET(KTRAP_FRAME_EIP, KTRAP_FRAME, Eip),
//OFFSET(KTRAP_FRAME_CS                          0x6C
OFFSET(KTRAP_FRAME_EFLAGS, KTRAP_FRAME, EFlags),
OFFSET(KTRAP_FRAME_ESP, KTRAP_FRAME, HardwareEsp),
OFFSET(KTRAP_FRAME_SS, KTRAP_FRAME, HardwareSegSs),
//OFFSET(KTRAP_FRAME_RESERVED5                   0x7A
OFFSET(KTRAP_FRAME_V86_ES, KTRAP_FRAME, V86Es),
//OFFSET(KTRAP_FRAME_RESERVED6                   0x7E
OFFSET(KTRAP_FRAME_V86_DS, KTRAP_FRAME, V86Ds),
//OFFSET(KTRAP_FRAME_RESERVED7                   0x82
OFFSET(KTRAP_FRAME_V86_FS, KTRAP_FRAME, V86Fs),
//OFFSET(KTRAP_FRAME_RESERVED8                   0x86
OFFSET(KTRAP_FRAME_V86_GS, KTRAP_FRAME, V86Gs),
//OFFSET(KTRAP_FRAME_RESERVED9                   0x8A
//OFFSET(KTRAP_FRAME_SIZE                        0x8C
//OFFSET(KTRAP_FRAME_LENGTH                      0x8C
//OFFSET(KTRAP_FRAME_ALIGN                       0x04
SIZE(KTRAP_FRAME_SIZE, KTRAP_FRAME),
CONSTANT(FRAME_EDITED),

// ok

HEADER("CONTEXT"),
OFFSET(CONTEXT_FLAGS, CONTEXT, ContextFlags),
//OFFSET(CONTEXT_DR6                             0x14
//OFFSET(CONTEXT_FLOAT_SAVE                      0x1C
OFFSET(CONTEXT_SEGGS, CONTEXT, SegGs),
OFFSET(CONTEXT_SEGFS, CONTEXT, SegFs),
OFFSET(CONTEXT_SEGES, CONTEXT, SegEs),
OFFSET(CONTEXT_SEGDS, CONTEXT, SegDs),
OFFSET(CONTEXT_EDI, CONTEXT, Edi),
OFFSET(CONTEXT_ESI, CONTEXT, Esi),
OFFSET(CONTEXT_EBX, CONTEXT, Ebx),
OFFSET(CONTEXT_EDX, CONTEXT, Edx),
OFFSET(CONTEXT_ECX, CONTEXT, Ecx),
OFFSET(CONTEXT_EAX, CONTEXT, Eax),
OFFSET(CONTEXT_EBP, CONTEXT, Ebp),
OFFSET(CONTEXT_EIP, CONTEXT, Eip),
OFFSET(CONTEXT_SEGCS, CONTEXT, SegCs),
OFFSET(CONTEXT_EFLAGS, CONTEXT, EFlags),
OFFSET(CONTEXT_ESP, CONTEXT, Esp),
OFFSET(CONTEXT_SEGSS, CONTEXT, SegSs),
//OFFSET(CONTEXT_FLOAT_SAVE_CONTROL_WORD         CONTEXT_FLOAT_SAVE + FP_CONTROL_WORD
//OFFSET(CONTEXT_FLOAT_SAVE_STATUS_WORD          CONTEXT_FLOAT_SAVE + FP_STATUS_WORD
//OFFSET(CONTEXT_FLOAT_SAVE_TAG_WORD             CONTEXT_FLOAT_SAVE + FP_TAG_WORD
//OFFSET(CONTEXT_ALIGNED_SIZE                    0x2CC
//OFFSET(CONTEXT_FRAME_LENGTH                    0x2D0
SIZE(CONTEXT_FRAME_LENGTH, CONTEXT), 

HEADER("KTSS"),
OFFSET(KTSS_IOMAPBASE, KTSS, IoMapBase),
OFFSET(KTSS_ESP0, KTSS, Esp0),

HEADER("EXCEPTION_RECORD"),
OFFSET(EXCEPTION_RECORD_EXCEPTION_CODE, EXCEPTION_RECORD, ExceptionCode),
OFFSET(EXCEPTION_RECORD_EXCEPTION_FLAGS, EXCEPTION_RECORD, ExceptionFlags),
OFFSET(EXCEPTION_RECORD_EXCEPTION_RECORD, EXCEPTION_RECORD, ExceptionRecord),
OFFSET(EXCEPTION_RECORD_EXCEPTION_ADDRESS, EXCEPTION_RECORD, ExceptionAddress),
OFFSET(EXCEPTION_RECORD_NUMBER_PARAMETERS, EXCEPTION_RECORD, NumberParameters),
SIZE(SIZEOF_EXCEPTION_RECORD, EXCEPTION_RECORD),
//#define EXCEPTION_RECORD_LENGTH                 0x50

HEADER("KTHREAD"),
OFFSET(KTHREAD_DEBUG_ACTIVE, KTHREAD, DispatcherHeader.DebugActive),
OFFSET(KTHREAD_INITIAL_STACK, KTHREAD, InitialStack),
OFFSET(KTHREAD_STACK_LIMIT, KTHREAD, StackLimit),
OFFSET(KTHREAD_TEB, KTHREAD, Teb),
OFFSET(KTHREAD_KERNEL_STACK, KTHREAD, KernelStack),
//OFFSET(KTHREAD_ALERTED                         0x5E
OFFSET(KTHREAD_APCSTATE_PROCESS, KTHREAD, ApcState.Process),
//OFFSET(KTHREAD_PENDING_USER_APC                0x28 + 0x16
OFFSET(KTHREAD_PENDING_KERNEL_APC, KTHREAD, ApcState.KernelApcPending),
OFFSET(KTHREAD_CONTEXT_SWITCHES, KTHREAD, ContextSwitches),
OFFSET(KTHREAD_STATE_, KTHREAD, State),
OFFSET(KTHREAD_NPX_STATE, KTHREAD, NpxState),
OFFSET(KTHREAD_WAIT_IRQL, KTHREAD, WaitIrql),
//OFFSET(KTHREAD_NEXT_PROCESSOR                  0x40
OFFSET(KTHREAD_WAIT_REASON, KTHREAD, WaitReason),
//OFFSET(KTHREAD_PRIORITY                        0x5B
//OFFSET(KTHREAD_SWAP_BUSY                       0x5D
//OFFSET(KTHREAD_SERVICE_TABLE                   0x118
//OFFSET(KTHREAD_PREVIOUS_MODE                   0xD7
//OFFSET(KTHREAD_COMBINED_APC_DISABLE            0x70
OFFSET(KTHREAD_SPECIAL_APC_DISABLE, KTHREAD, SpecialApcDisable),
OFFSET(KTHREAD_LARGE_STACK, KTHREAD, LargeStack),
OFFSET(KTHREAD_TRAP_FRAME, KTHREAD, TrapFrame),
OFFSET(KTHREAD_CALLBACK_STACK, KTHREAD, CallbackStack),
//OFFSET(KTHREAD_APC_STATE_INDEX                 0x11C
OFFSET(KTHREAD_STACK_BASE, KTHREAD, StackBase),
//OFFSET(KTHREAD_QUANTUM                         0x15D
//OFFSET(KTHREAD_KERNEL_TIME                     0x160
//OFFSET(KTHREAD_USER_TIME                       0x18C

HEADER("KPROCESS"),
OFFSET(KPROCESS_DIRECTORY_TABLE_BASE, KPROCESS, DirectoryTableBase),
OFFSET(KPROCESS_LDT_DESCRIPTOR0, KPROCESS, LdtDescriptor),
OFFSET(KPROCESS_LDT_DESCRIPTOR1, KPROCESS, LdtDescriptor.HighWord),
OFFSET(KPROCESS_INT21_DESCRIPTOR0, KPROCESS, Int21Descriptor),
OFFSET(KPROCESS_INT21_DESCRIPTOR1, KPROCESS, Int21Descriptor.Access),
OFFSET(KPROCESS_IOPM_OFFSET, KPROCESS, IopmOffset),
//OFFSET(KPROCESS_ACTIVE_PROCESSORS              0x34
//OFFSET(EPROCESS_VDM_OBJECTS                    0x144

HEADER("Misc"),
CONSTANT(NPX_FRAME_LENGTH),
CONSTANT(FN_CR0_NPX_STATE),
CONSTANT(DR7_RESERVED_MASK),
CONSTANT(FP_CONTROL_WORD),
CONSTANT(FP_STATUS_WORD),
CONSTANT(FP_TAG_WORD),
CONSTANT(FP_DATA_SELECTOR),
CONSTANT(CBSTACK_RESULT),
CONSTANT(CBSTACK_RESULT_LENGTH),
CONSTANT(CBSTACK_TRAP_FRAME),
CONSTANT(CBSTACK_CALLBACK_STACK),
SIZE(SIZEOF_FX_SAVE_AREA, FX_SAVE_AREA),
OFFSET(TEB_EXCEPTION_LIST, TEB, NtTib.ExceptionList),
CONSTANT(KUSER_SHARED_SYSCALL),
