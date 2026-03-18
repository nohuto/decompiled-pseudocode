/*
 * XREFs of ValidateTarget @ 0x1C004D510
 * Callers:
 *     Divide @ 0x1C00065A0 (Divide.c)
 *     ExprOp2_32 @ 0x1C0006642 (ExprOp2_32.c)
 *     Load @ 0x1C00556E0 (Load.c)
 *     Concat @ 0x1C0055F80 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00562B0 (ConcatenateResTemplate.c)
 *     CondRefOf @ 0x1C00564B0 (CondRefOf.c)
 *     CopyObject @ 0x1C0056570 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C00566E0 (ExprOp1_32.c)
 *     ExprOp1_64 @ 0x1C005683C (ExprOp1_64.c)
 *     ExprOp2_64 @ 0x1C0056A00 (ExprOp2_64.c)
 *     Index @ 0x1C0056C20 (Index.c)
 *     MidString @ 0x1C0057B60 (MidString.c)
 *     Store @ 0x1C0058B80 (Store.c)
 *     ToBuffer @ 0x1C0058C60 (ToBuffer.c)
 *     ToDecStr @ 0x1C0058CE0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590D0 (ToHexStr.c)
 *     ToInteger @ 0x1C00593F0 (ToInteger.c)
 *     ToString @ 0x1C0059470 (ToString.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     FreeDataBuffs @ 0x1C004B52C (FreeDataBuffs.c)
 *     GetObjectTypeName @ 0x1C004BD70 (GetObjectTypeName.c)
 *     MatchObjType @ 0x1C004C084 (MatchObjType.c)
 *     LogError @ 0x1C004E244 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB9C (PrintDebugMessage.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _WORD *v4; // r14
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 v9; // r10
  int v11; // ecx
  __int16 v12; // r11
  int ObjectTypeName; // eax
  int v14; // r11d
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // r10

  v4 = (_WORD *)(a2 + 2);
  v5 = 0;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v9 = a2;
  if ( (_WORD)v6 == 128 )
  {
    v9 = *(_QWORD *)(a2 + 16) + 64LL;
  }
  else if ( (_WORD)v6 == 129 )
  {
    v9 = *(_QWORD *)(a2 + 16);
  }
  else if ( v6 > 0x10 || (v11 = 81921, !_bittest(&v11, v6)) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, -1072431094);
    ObjectTypeName = GetObjectTypeName((unsigned __int16)*v4);
    v15 = 0;
    v16 = 208;
    goto LABEL_14;
  }
  *(_QWORD *)a4 = v9;
  if ( *v4 != 128 )
    goto LABEL_18;
  if ( !MatchObjType(*(unsigned __int16 *)(v9 + 2), a3) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, -1072431094);
    GetObjectTypeName(a3);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
    v15 = v14;
    v16 = 207;
LABEL_14:
    PrintDebugMessage(v16, ObjectTypeName, v15, 0, 0LL);
    return (unsigned int)-1072431094;
  }
  if ( v12 != 128 )
  {
LABEL_18:
    if ( MatchObjType(*(unsigned __int16 *)(v9 + 2), 133) )
      FreeDataBuffs(v17, 1u);
  }
  return v5;
}
