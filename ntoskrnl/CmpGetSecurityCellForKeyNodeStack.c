/*
 * XREFs of CmpGetSecurityCellForKeyNodeStack @ 0x140A18CC4
 * Callers:
 *     CmpCheckKeyNodeStackAccess @ 0x140A18620 (CmpCheckKeyNodeStackAccess.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140A1D040 (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpGetSecurityCellForKeyNodeStack(__int16 *a1, _QWORD *a2, _DWORD *a3)
{
  __int16 v3; // r9
  _QWORD *i; // r10
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v9; // r9
  int EffectiveKeyNodeSemantics; // eax
  _QWORD *v11; // r11
  __int64 result; // rax

  v3 = *a1;
  for ( i = 0LL; v3 >= 0; v3 = v9 - 1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v3);
    if ( EntryAtLayerHeight[2] )
    {
      EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight);
      if ( EffectiveKeyNodeSemantics == 1 )
        break;
      i = v11;
      if ( EffectiveKeyNodeSemantics )
        break;
    }
  }
  *a2 = *i;
  result = i[2];
  *a3 = *(_DWORD *)(result + 44);
  return result;
}
