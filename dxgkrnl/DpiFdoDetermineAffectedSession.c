/*
 * XREFs of DpiFdoDetermineAffectedSession @ 0x1C0396188
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     DxgkDetermineAffectedSession @ 0x1C020AFC8 (DxgkDetermineAffectedSession.c)
 */

unsigned __int64 __fastcall DpiFdoDetermineAffectedSession(__int64 a1)
{
  __int64 v1; // r10

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
    return DxgkDetermineAffectedSession(
             *(_BYTE *)(v1 + 2743),
             (*(_BYTE *)(v1 + 3920) & 2) != 0,
             *(_BYTE *)(v1 + 3920) & 1,
             1,
             *(_QWORD *)(v1 + 5744));
  else
    return 0x300000000LL;
}
