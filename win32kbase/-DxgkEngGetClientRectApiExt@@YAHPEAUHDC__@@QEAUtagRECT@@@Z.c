/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1C0195A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02D5650 && (int)qword_1C02D5650() >= 0 && qword_1C02D5658 )
    return (unsigned int)qword_1C02D5658(a1, a2);
  return v2;
}
