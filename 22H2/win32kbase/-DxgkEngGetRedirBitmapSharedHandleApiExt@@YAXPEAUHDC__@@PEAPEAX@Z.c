/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C00E0590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  if ( qword_1C0294530 && (int)qword_1C0294530() >= 0 )
  {
    if ( qword_1C0294538 )
      qword_1C0294538(a1, a2);
  }
}
