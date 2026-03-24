/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C0149DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  int v2; // eax

  if ( qword_1C0255150 )
    v2 = qword_1C0255150();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0255158 )
      qword_1C0255158(a1);
  }
}
