/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0112B1C
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0112960 (NtGdiGetFontFileInfo.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0270288 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027A900 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C02890A8 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02BA5F0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BA560 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT **a1, unsigned int a2, struct PFF ***a3)
{
  unsigned int v4; // r8d
  __int64 v5; // r9
  struct PFT *v6; // rbx
  struct PFF **v7; // rsi
  struct PFT *v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  v5 = HIBYTE(a2);
  if ( (unsigned int)v5 >= v4 )
    return 0LL;
  do
  {
    v6 = a1[v5 + 5];
    v7 = &a1[v5 + 5];
    while ( v6 && *((_DWORD *)v6 + 35) != a2 )
      v6 = (struct PFT *)*((_QWORD *)v6 + 1);
    v5 = (unsigned int)(v5 + 256);
  }
  while ( (unsigned int)v5 < v4 );
  if ( v6 )
  {
    if ( a1 != gpPFTPrivate || (v9 = v6, PFFOBJ::pPvtDataMatch((PFFOBJ *)&v9)) )
    {
      if ( a3 )
        *a3 = v7;
    }
    else
    {
      return 0LL;
    }
  }
  return v6;
}
