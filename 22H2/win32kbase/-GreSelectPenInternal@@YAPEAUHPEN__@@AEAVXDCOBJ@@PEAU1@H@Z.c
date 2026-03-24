/*
 * XREFs of ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00C8080
 * Callers:
 *     GreSelectPen @ 0x1C013C150 (GreSelectPen.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C0022200 (GreDCSelectPen.c)
 *     HmgPentryFromPobj @ 0x1C002FA40 (HmgPentryFromPobj.c)
 */

__int64 __fastcall GreSelectPenInternal(DC **a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectPen(*a1, a2);
  return v3;
}
