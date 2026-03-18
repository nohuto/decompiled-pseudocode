/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C01767D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  if ( qword_1C029AE00 && (int)qword_1C029AE00() >= 0 )
  {
    if ( qword_1C029AE08 )
      qword_1C029AE08(a1);
  }
}
