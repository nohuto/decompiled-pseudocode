/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x1C0161C70
 * Callers:
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C0057F3C (RIMAllocateHidDesc.c)
 *     RIMVirtCreateDev @ 0x1C014FC98 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     RIMCAUsageToLegacyFlag @ 0x1C0166150 (RIMCAUsageToLegacyFlag.c)
 */

__int16 __fastcall RIMMarkSiblingMouseDevice(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // di
  __int16 result; // ax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 67, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a1);
  }
  result = (*(_WORD *)(a1 + 888) | RIMCAUsageToLegacyFlag(v2)) & 0xFFFE;
  *(_WORD *)(a1 + 888) = result;
  if ( v2 == 5 )
    *(_DWORD *)(a1 + 184) |= 0x6000000u;
  return result;
}
