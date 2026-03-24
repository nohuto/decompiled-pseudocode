/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C00E68B0
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00E63D0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C00A1EB0 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00A1FB8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C00E95A8 (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  PFTOBJ *v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C033B0C0 |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C033A8A8 )
  {
    Win32FreePool((void *)qword_1C033A8A8);
    qword_1C033A8A8 = 0LL;
  }
  if ( qword_1C033D5D0 )
  {
    Win32FreePool((void *)qword_1C033D5D0);
    qword_1C033D5D0 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C0334ABC;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont((__int64)&unk_1C0334CC8 + 664 * v2);
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
