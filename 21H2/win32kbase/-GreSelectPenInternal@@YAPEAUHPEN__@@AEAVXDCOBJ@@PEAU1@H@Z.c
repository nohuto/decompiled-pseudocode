/*
 * XREFs of ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00D8E00
 * Callers:
 *     GreSelectPen @ 0x1C01692B0 (GreSelectPen.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x1C0021920 (HmgPentryFromPobj.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 */

struct HOBJ__ *__fastcall GreSelectPenInternal(struct HOBJ__ ****a1, struct HOBJ__ *a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectPen(*a1, a2);
  return (struct HOBJ__ *)v3;
}
