/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1D1EC
 * Callers:
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A1D69C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140A1D878 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1407AF5C0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

_UNKNOWN **__fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rdi
  __int16 v9; // dx
  __int64 v10; // rbp
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rcx
  unsigned int *v13; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    result = (_UNKNOWN **)CmpGetKcbAtLayerHeight(a2, v9);
    v10 = (__int64)result;
    v11 = *((unsigned int *)result + 10);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (ULONG_PTR)result[4];
      v13 = (unsigned int *)(EntryAtLayerHeight + 24);
      *(_QWORD *)EntryAtLayerHeight = v12;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v11;
      if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
        result = (_UNKNOWN **)HvpGetCellFlat(v12, v11, v13);
      else
        result = (_UNKNOWN **)HvpGetCellPaged(v12, v11, v13);
      *(_QWORD *)(EntryAtLayerHeight + 16) = result;
    }
    if ( a3 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKcbSemantics(v10, a3);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
