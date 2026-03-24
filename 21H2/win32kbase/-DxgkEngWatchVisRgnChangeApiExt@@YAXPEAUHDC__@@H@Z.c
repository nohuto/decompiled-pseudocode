/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1C014A570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  int v4; // eax

  if ( qword_1C0256170 )
    v4 = qword_1C0256170();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0256178 )
      qword_1C0256178(a1, a2);
  }
}
