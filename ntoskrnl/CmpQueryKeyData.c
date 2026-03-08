/*
 * XREFs of CmpQueryKeyData @ 0x1407ADD50
 * Callers:
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpQueryKeyDataFromCache @ 0x1407ABC40 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1407AD510 (CmpQueryKeyDataFromNode.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpQueryKeyData(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5, __int64 a6)
{
  unsigned int v10; // ebx
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rcx
  __int64 CellFlat; // rax
  unsigned int KeyDataFromNode; // eax
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF

  v17[0] = 0xFFFFFFFFLL;
  if ( a2 == 4 )
  {
    return (unsigned int)CmpQueryKeyDataFromCache(a1, 4, a3, a4, a5, a6);
  }
  else
  {
    v12 = *(unsigned int *)(a1 + 40);
    v13 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v13, v12);
    else
      CellFlat = HvpGetCellPaged(v13);
    if ( CellFlat )
    {
      KeyDataFromNode = CmpQueryKeyDataFromNode(*(_QWORD *)(a1 + 32), CellFlat, a2, a3, a4, a5, a1, a6);
      v16 = *(_QWORD *)(a1 + 32);
      v10 = KeyDataFromNode;
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v16, v17);
      else
        HvpReleaseCellPaged(v16, v17);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v10;
}
