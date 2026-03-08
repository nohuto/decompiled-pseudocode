/*
 * XREFs of SepLpacCausedAccessFailure @ 0x1402F8D5C
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepLpacCausedAccessFailure(__int64 a1, int a2)
{
  int v3; // r8d

  if ( !*(_BYTE *)(a1 + 24) )
    return 0;
  v3 = a2 & ~(*(_DWORD *)(a1 + 4) | *(_DWORD *)(a1 + 8) | 0x2000000);
  return (v3 & *(_DWORD *)(a1 + 16)) == v3;
}
