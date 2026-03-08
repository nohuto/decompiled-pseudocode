/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x140820E94
 * Callers:
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407FE740 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpMarkCurrentValueDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 result; // rax
  unsigned int ValueByName; // edi
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF

  v6 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    result = HvpGetCellFlat(BugCheckParameter3, a2, &v6);
  else
    result = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v6);
  if ( result )
  {
    LODWORD(BugCheckParameter4) = 0;
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3, result, (__int64)&CmpSelectString, &BugCheckParameter4);
    result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
           ? HvpReleaseCellFlat(BugCheckParameter3, &v6)
           : HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v6);
    if ( (_DWORD)BugCheckParameter4 != -1 )
    {
      result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
             ? HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v6)
             : HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v6);
      if ( result )
      {
        ValueByName = CmpFindValueByName(BugCheckParameter3, result, (int)&CmpCurrentString);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          result = HvpReleaseCellFlat(BugCheckParameter3, &v6);
        else
          result = HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v6);
        if ( ValueByName != -1 )
          return HvpMarkCellDirty(BugCheckParameter3, ValueByName, 0);
      }
    }
  }
  return result;
}
