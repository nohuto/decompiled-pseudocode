/*
 * XREFs of CmpInitializeValueNameString @ 0x1407845C0
 * Callers:
 *     CmpMergeKeyValues @ 0x140A1F628 (CmpMergeKeyValues.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A264CC (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmSiBugCheck @ 0x140615314 (CmSiBugCheck.c)
 *     CmpCopyCompressedName @ 0x1407A47DC (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int16 v3; // r9
  unsigned __int16 v4; // r9
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r11

  v3 = *(_WORD *)(BugCheckParameter3 + 2);
  if ( (*(_BYTE *)(BugCheckParameter3 + 16) & 1) != 0 )
  {
    v4 = 2 * v3;
    *(_WORD *)a2 = v4;
    if ( v4 > 0x7FFFu )
      CmSiBugCheck(0x31uLL, 1uLL, BugCheckParameter3, v4);
    result = CmpCopyCompressedName(a3, 0x7FFFLL, BugCheckParameter3 + 20, *(unsigned __int16 *)(BugCheckParameter3 + 2));
    *(_QWORD *)(v6 + 8) = v7;
    *(_WORD *)(v6 + 2) = 0x7FFF;
  }
  else
  {
    result = BugCheckParameter3 + 20;
    *(_WORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 20;
    *(_WORD *)(a2 + 2) = v3;
  }
  return result;
}
