/*
 * XREFs of RIMRemoveDevOfInputType @ 0x1C00A644C
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C00A6300 (RIMRemoveInputOfType.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C0051D38 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0055804 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeSpecificDev @ 0x1C00A6554 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00A67A8 (rimResetPnpRemovePendingStateBits.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRemoveDevOfInputType(__int64 a1, int a2)
{
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdi

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
        rimOnPnpRemoveComplete(a1, *v6);
        v10 = *v6;
        if ( *(_QWORD *)(*v6 + 248) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 674LL);
          v10 = *v6;
        }
        *v6 = *(_QWORD *)(v10 + 40);
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
