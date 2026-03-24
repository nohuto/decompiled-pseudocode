/*
 * XREFs of NtGdiSetBrushOrg @ 0x1C0043580
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBrushOrg @ 0x1C004562C (GreSetBrushOrg.c)
 */

__int64 __fastcall NtGdiSetBrushOrg(HDC a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // r8d

  v5 = GreSetBrushOrg(a1);
  if ( v5 && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = 0LL;
  }
  return v5;
}
