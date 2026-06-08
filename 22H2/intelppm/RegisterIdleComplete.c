/*
 * XREFs of RegisterIdleComplete @ 0x1C00267F4
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003B20 (RegisterKernelIdleStates.c)
 *     RegisterHvLpiStates @ 0x1C00319EC (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C003235C (RegisterVmIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     PepRegisterSpmSettings @ 0x1C0026BE0 (PepRegisterSpmSettings.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0036D3C (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0036EB4 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00380AC (RegisterKernelPlatformStates.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C001C968 == dword_1C001C3E4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      v2 = *(_QWORD *)(a1 + 272);
      if ( (v2 & 0xE0000000000LL) != 0 )
      {
        RegisterKernelCoordinatedLpiStates(a1);
      }
      else if ( (v2 & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( !qword_1C001C998 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x11u,
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids);
    }
  }
}
