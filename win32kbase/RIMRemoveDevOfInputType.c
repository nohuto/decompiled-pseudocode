/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C00C986C
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C00C9690 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C0030730 (rimOnPnpRemoveComplete.c)
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00D0020 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbx

  v3 = (__int64 *)(a1 + 424);
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
        rimOnPnpRemoveComplete(a1, *v6, v8);
        if ( *(_QWORD *)(*v6 + 248) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1027LL);
        v10 = *v6;
        *v6 = *(_QWORD *)(*v6 + 40);
        *(_QWORD *)(v10 + 40) = 0LL;
        rimResetPnpRemovePendingStateBits(v10);
        rimDoRimDevChange(a1, v10, 3u);
        RIMFreeSpecificDev(a1, v10);
        goto LABEL_2;
      }
    }
    v6 = (__int64 *)(v8 + 40);
    v5 = *(_QWORD *)(v8 + 40);
  }
  return 0LL;
}
