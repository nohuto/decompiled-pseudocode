/*
 * XREFs of SepLpacCausedAccessFailure @ 0x14024F43C
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepLpacCausedAccessFailure(__int64 a1, int a2)
{
  bool result; // al
  int v3; // r8d

  result = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = a2 & ~(*(_DWORD *)(a1 + 4) | *(_DWORD *)(a1 + 8) | 0x2000000);
    if ( (v3 & *(_DWORD *)(a1 + 16)) == v3 )
      return 1;
  }
  return result;
}
