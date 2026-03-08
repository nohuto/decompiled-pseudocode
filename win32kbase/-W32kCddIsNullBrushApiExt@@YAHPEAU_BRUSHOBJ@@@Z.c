/*
 * XREFs of ?W32kCddIsNullBrushApiExt@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C00BB4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddIsNullBrushApiExt(struct _BRUSHOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02D5770 && (int)qword_1C02D5770() >= 0 && qword_1C02D5778 )
    return (unsigned int)qword_1C02D5778(a1);
  return v1;
}
