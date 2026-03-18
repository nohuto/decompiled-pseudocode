/*
 * XREFs of ?DxgkEngReleaseDCApiExt@@YAHPEAUHDC__@@0@Z @ 0x1C01766B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngReleaseDCApiExt(HDC a1, HDC a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C029AE40 && (int)qword_1C029AE40() >= 0 && qword_1C029AE48 )
    return (unsigned int)qword_1C029AE48(a1, a2);
  return v2;
}
