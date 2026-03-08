/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum @ 0x1C0021F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDqqss @ 0x1C0022A3C (WPP_RECORDER_SF_qDqqss.c)
 */

__int64 __fastcall ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  int v4; // r9d

  v3 = *(_DWORD *)(a3 + 56);
  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
  {
    *(_DWORD *)(a3 + 56) = v3 | 0x1000000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 44;
LABEL_8:
      WPP_RECORDER_SF_qDqqss(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)&WPP_RECORDER_INITIALIZED, a3, v4);
    }
  }
  else if ( (v3 & 0x10000000) == 0
         && (unsigned int)(_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 1) - 3) <= 1 )
  {
    *(_DWORD *)(a3 + 56) |= 0x10000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 45;
      goto LABEL_8;
    }
  }
  return 0LL;
}
