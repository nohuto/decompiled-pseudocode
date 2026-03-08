/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C014CD9A
 * Callers:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026D16C (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027A7E0 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C0290DB8 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02D87D0 (NtGdiGetFontFileData.c)
 *     NtGdiGetFontFileInfo @ 0x1C02D8A30 (NtGdiGetFontFileInfo.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0150274 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT *a1, unsigned int a2, struct PFF ***a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v10; // rbx
  struct PFF **v11; // rbp
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = Gre::Base::Globals(a1);
  v7 = *((_DWORD *)a1 + 6);
  v8 = HIBYTE(a2);
  if ( (unsigned int)v8 >= v7 )
    return 0LL;
  do
  {
    v10 = *((_QWORD *)a1 + v8 + 5);
    v11 = (struct PFF **)((char *)a1 + 8 * v8 + 40);
    while ( v10 && *(_DWORD *)(v10 + 140) != a2 )
      v10 = *(_QWORD *)(v10 + 8);
    v8 = (unsigned int)(v8 + 256);
  }
  while ( (unsigned int)v8 < v7 );
  if ( v10 )
  {
    if ( a1 != *((struct PFT **)v6 + 796) || (v12[0] = v10, PFFOBJ::pPvtDataMatch((PFFOBJ *)v12)) )
    {
      if ( a3 )
        *a3 = v11;
    }
    else
    {
      return 0LL;
    }
  }
  return (struct PFF *)v10;
}
