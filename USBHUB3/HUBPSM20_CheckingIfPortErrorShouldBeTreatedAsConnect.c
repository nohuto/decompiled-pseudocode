/*
 * XREFs of HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect @ 0x1C0012C70
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C0041C84 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 */

__int64 __fastcall HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect(__int64 a1)
{
  __int64 *v1; // r10
  unsigned int v2; // r8d
  __int64 v3; // rcx
  __int16 v4; // ax

  v1 = *(__int64 **)(a1 + 960);
  v2 = 3005;
  v3 = *v1;
  v4 = *((_WORD *)v1 + 92);
  if ( (*(_DWORD *)(*v1 + 44) & 2) != 0 && (v4 & 1) != 0 && (v4 & 2) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v1[166] + 1636), 0x100000u);
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(v3, *((unsigned int *)v1 + 46), 0LL, "Device resumed with port disabled");
    return 3089;
  }
  return v2;
}
