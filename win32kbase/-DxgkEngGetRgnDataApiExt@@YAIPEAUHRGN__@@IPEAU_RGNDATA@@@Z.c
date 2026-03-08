/*
 * XREFs of ?DxgkEngGetRgnDataApiExt@@YAIPEAUHRGN__@@IPEAU_RGNDATA@@@Z @ 0x1C0195AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetRgnDataApiExt(HRGN a1, unsigned int a2, struct _RGNDATA *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( qword_1C02D5660 && (int)qword_1C02D5660() >= 0 && qword_1C02D5668 )
    return (unsigned int)qword_1C02D5668(a1, a2, a3);
  return v3;
}
