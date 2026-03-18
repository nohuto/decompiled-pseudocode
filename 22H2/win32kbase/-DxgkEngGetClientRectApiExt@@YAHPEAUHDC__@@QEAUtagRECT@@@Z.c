/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1C0168D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02944E0 && (int)qword_1C02944E0() >= 0 && qword_1C02944E8 )
    return (unsigned int)qword_1C02944E8(a1, a2);
  return v2;
}
