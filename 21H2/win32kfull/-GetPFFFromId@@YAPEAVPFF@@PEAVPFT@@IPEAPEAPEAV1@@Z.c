/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C01613EC
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0161230 (NtGdiGetFontFileInfo.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C02725B8 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027CD90 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C028B458 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02BC020 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016AAC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BBF94 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT **a1, unsigned int a2, struct PFF ***a3)
{
  __int64 v4; // rdi
  struct PFF *v8; // rcx
  struct PFF **v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = HIBYTE(a2);
  if ( (unsigned int)v4 >= *((_DWORD *)a1 + 6) )
    return 0LL;
  do
  {
    v8 = a1[v4 + 5];
    v9 = &a1[v4 + 5];
    while ( 1 )
    {
      v10 = (__int64)SkipInvalidPff(v8);
      v11 = v10;
      if ( !v10 || *(_DWORD *)(v10 + 140) == a2 )
        break;
      v8 = *(struct PFF **)(v10 + 8);
    }
    v4 = (unsigned int)(v4 + 256);
  }
  while ( (unsigned int)v4 < *((_DWORD *)a1 + 6) );
  if ( v10 )
  {
    if ( a1 == gpPFTPrivate )
    {
      v12[0] = v10;
      v11 = -(__int64)(PFFOBJ::pPvtDataMatch((PFFOBJ *)v12) != 0LL) & v10;
    }
    if ( v11 )
    {
      if ( a3 )
        *a3 = v9;
    }
  }
  return (struct PFF *)v11;
}
