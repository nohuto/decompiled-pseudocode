/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C00B76C0
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00B6E30 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     GreEnableEUDC @ 0x1C00B77A8 (GreEnableEUDC.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C01183E8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

void __fastcall CleanUpEUDC(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  char v4; // al
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rdi

  v1 = Gre::Base::Globals(a1);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
  if ( !*(_QWORD *)(v3 + 20272) || (v4 = 1, !*((_QWORD *)v1 + 6)) )
    v4 = 0;
  *(_DWORD *)(v3 + 13312) |= 2u;
  if ( v4 )
    GreEnableEUDC(0LL);
  v5 = *(void **)(v3 + 13872);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(v3 + 13872) = 0LL;
  }
  v6 = *(void **)(v3 + 13888);
  if ( v6 )
  {
    Win32FreePool(v6);
    *(_QWORD *)(v3 + 13888) = 0LL;
  }
  if ( *(_DWORD *)(v3 + 19360) )
  {
    v8 = 0;
    v9 = v3 + 14212;
    do
    {
      if ( *(_DWORD *)(v9 - 124) && *(_WORD *)v9 && *(_QWORD *)(v9 + 524) )
        bUnloadEudcFont(v3 + 664LL * v8 + 14736);
      ++v8;
      v9 += 664LL;
    }
    while ( v8 < 7 );
  }
  v7 = *(void **)(v3 + 19376);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(v3 + 19376) = 0LL;
  }
  if ( *(_DWORD *)(v3 + 19352) )
    PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v7, (unsigned __int16 *)(v3 + 18748));
}
