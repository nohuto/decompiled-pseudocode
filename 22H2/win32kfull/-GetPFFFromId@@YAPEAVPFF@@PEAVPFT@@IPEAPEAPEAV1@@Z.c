/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0159ACA
 * Callers:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026A85C (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0277E60 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C028E564 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02D6990 (NtGdiGetFontFileData.c)
 *     NtGdiGetFontFileInfo @ 0x1C02D6BF0 (NtGdiGetFontFileInfo.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C015D0D4 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT *a1, unsigned int a2, struct PFF ***a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r12
  __int64 v7; // rdi
  struct PFF *v9; // rcx
  struct PFF **v10; // rbp
  struct PFF *v11; // rax
  struct PFF *v12; // rbx
  struct PFF *v13; // [rsp+20h] [rbp-28h] BYREF

  v6 = Gre::Base::Globals(a1);
  v7 = HIBYTE(a2);
  if ( (unsigned int)v7 >= *((_DWORD *)a1 + 6) )
    return 0LL;
  do
  {
    v9 = (struct PFF *)*((_QWORD *)a1 + v7 + 5);
    v10 = (struct PFF **)((char *)a1 + 8 * v7 + 40);
    while ( 1 )
    {
      v11 = SkipInvalidPff(v9);
      v12 = v11;
      if ( !v11 || *((_DWORD *)v11 + 35) == a2 )
        break;
      v9 = (struct PFF *)*((_QWORD *)v11 + 1);
    }
    v7 = (unsigned int)(v7 + 256);
  }
  while ( (unsigned int)v7 < *((_DWORD *)a1 + 6) );
  if ( v11 )
  {
    if ( a1 != *((struct PFT **)v6 + 796) || (v13 = v11, PFFOBJ::pPvtDataMatch((PFFOBJ *)&v13)) )
    {
      if ( a3 )
        *a3 = v10;
    }
    else
    {
      return 0LL;
    }
  }
  return v12;
}
