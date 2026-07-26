/*
 * XREFs of ndisCpuHotAddHandler @ 0x1C0076AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005EDE8 (WPP_RECORDER_SF_DD_ea_1C005EDE8.c)
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1C00638C8 (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C00A4164 (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 */

void __fastcall ndisCpuHotAddHandler(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  unsigned int v5; // r8d
  int v6; // eax
  NTSTATUS v7; // edi
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( ChangeContext->State )
  {
    if ( ChangeContext->State == KeProcessorAddCompleteNotify )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xDu,
          (struct _GUID *)&WPP_9ed74d096aed3ee112c1892102beae86_Traceguids,
          *OperationStatus);
      ndisPeriodicReceivesAddCpu(ChangeContext->NtNumber);
      v5 = 0;
    }
    else
    {
      if ( ChangeContext->State != KeProcessorAddFailureNotify )
        return;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xEu,
          (struct _GUID *)&WPP_9ed74d096aed3ee112c1892102beae86_Traceguids,
          *OperationStatus);
      v5 = -1073741823;
    }
    ndisDmaAddCpuNotify(0, ChangeContext->NtNumber, v5);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_9ed74d096aed3ee112c1892102beae86_Traceguids,
        *OperationStatus,
        ChangeContext->NtNumber);
    v6 = ndisDmaAddCpuNotify(1, ChangeContext->NtNumber, *OperationStatus);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = v6;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_9ed74d096aed3ee112c1892102beae86_Traceguids,
          v8);
      }
      *OperationStatus = v7;
    }
  }
}
