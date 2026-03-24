/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C0005FFC
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0005EB0 (RIMRemoveInputOfType.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0006104 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0008378 (rimResetPnpRemovePendingStateBits.c)
 *     rimOnPnpRemoveComplete @ 0x1C0052D38 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0056804 (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  _QWORD *v3; // rbp
  __int64 v5; // r8
  _QWORD *v6; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdi

  v3 = (_QWORD *)(a1 + 424);
LABEL_2:
  v5 = *v3;
  v6 = v3;
  while ( v5 )
  {
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v5, *(unsigned __int8 *)(v5 + 48)) & a2) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 184);
      if ( (v9 & 0x2000) == 0 )
      {
        *(_DWORD *)(v8 + 184) = v9 | 8;
        rimOnPnpRemoveComplete(a1, *v6);
        v10 = *v6;
        if ( *(_QWORD *)(*v6 + 248LL) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 674LL);
          v10 = *v6;
        }
        *v6 = *(_QWORD *)(v10 + 40);
        *(_QWORD *)(v10 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v10);
        rimDoRimDevChange(a1, v10, 3LL);
        RIMFreeSpecificDev(a1, v10);
        goto LABEL_2;
      }
    }
    v6 = (_QWORD *)(v8 + 40);
    v5 = *(_QWORD *)(v8 + 40);
  }
  return 0LL;
}
