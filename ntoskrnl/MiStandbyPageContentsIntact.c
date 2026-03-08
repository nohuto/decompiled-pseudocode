/*
 * XREFs of MiStandbyPageContentsIntact @ 0x14034B200
 * Callers:
 *     MiStandbyPageStillCombineCandidate @ 0x14029F354 (MiStandbyPageStillCombineCandidate.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiConfirmCombinePageContents @ 0x14034B140 (MiConfirmCombinePageContents.c)
 *     MiCopyHeaderIfResident @ 0x140368D84 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiCheckWriteInProgressFault @ 0x140201D38 (MiCheckWriteInProgressFault.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 */

__int64 __fastcall MiStandbyPageContentsIntact(__int64 a1)
{
  char v1; // dl
  unsigned int v2; // edi

  v1 = *(_BYTE *)(a1 + 34);
  v2 = 0;
  if ( (v1 & 8) != 0 && (((v1 & 7) - 3) & 0xFB) == 0 && (int)MiCheckWriteInProgressFault(a1) < 0 )
    return 0LL;
  if ( (v1 & 7) != 2 )
    return 1LL;
  if ( (v1 & 0x20) != 0 || (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    return 0LL;
  if ( (unsigned int)MiCheckSlabPfnBitmap(a1, 1LL, 0) && _bittest64((const signed __int64 *)(a1 + 40), 0x3Bu) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MiGetPfnPriority(a1) >= *(unsigned __int8 *)(*(_QWORD *)(qword_140C67048
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                                                                        + 15780LL);
  return v2;
}
