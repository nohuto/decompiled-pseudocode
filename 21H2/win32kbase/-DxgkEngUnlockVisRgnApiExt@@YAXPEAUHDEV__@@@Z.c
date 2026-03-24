/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C014A520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  int v2; // eax

  if ( qword_1C0256080 )
    v2 = qword_1C0256080();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0256088 )
      qword_1C0256088(a1);
  }
}
