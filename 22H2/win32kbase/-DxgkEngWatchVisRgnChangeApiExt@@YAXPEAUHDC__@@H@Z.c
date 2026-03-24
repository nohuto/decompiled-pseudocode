/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1C014A8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  int v4; // eax

  if ( qword_1C0255170 )
    v4 = qword_1C0255170();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0255178 )
      qword_1C0255178(a1, a2);
  }
}
