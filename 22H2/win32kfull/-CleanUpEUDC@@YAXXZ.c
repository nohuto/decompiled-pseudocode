/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C00E6560
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00E6080 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C00A1D5C (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00A1E64 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C00E9258 (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  PFTOBJ *v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C033A0BC |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C03398A8 )
  {
    Win32FreePool((void *)qword_1C03398A8);
    qword_1C03398A8 = 0LL;
  }
  if ( qword_1C033C570 )
  {
    Win32FreePool((void *)qword_1C033C570);
    qword_1C033C570 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C0333ABC;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont((__int64)&unk_1C0333CC8 + 664 * v2);
      ++v2;
      v3 += 664;
    }
    while ( v2 < 7 );
  }
  v1 = pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v1, &gawcSystemDBCSFontPath);
}
