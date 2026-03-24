/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C014A0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  int v4; // eax

  if ( qword_1C0255120 )
    v4 = qword_1C0255120();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0255128 )
      qword_1C0255128(a1, a2);
  }
}
