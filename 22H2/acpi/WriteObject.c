/*
 * XREFs of WriteObject @ 0x1C00532C0
 * Callers:
 *     ExprOp2_32 @ 0x1C0006642 (ExprOp2_32.c)
 *     Concat @ 0x1C0055F80 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00562B0 (ConcatenateResTemplate.c)
 *     CondRefOf @ 0x1C00564B0 (CondRefOf.c)
 *     CopyObject @ 0x1C0056570 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C00566E0 (ExprOp1_32.c)
 *     ExprOp1_64 @ 0x1C005683C (ExprOp1_64.c)
 *     ExprOp2_64 @ 0x1C0056A00 (ExprOp2_64.c)
 *     Index @ 0x1C0056C20 (Index.c)
 *     MidString @ 0x1C0057B60 (MidString.c)
 *     ProcessDivide @ 0x1C00583E0 (ProcessDivide.c)
 *     ProcessIncDec @ 0x1C0058530 (ProcessIncDec.c)
 *     Store @ 0x1C0058B80 (Store.c)
 *     ToBuffer @ 0x1C0058C60 (ToBuffer.c)
 *     ToDecStr @ 0x1C0058CE0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590D0 (ToHexStr.c)
 *     ToInteger @ 0x1C00593F0 (ToInteger.c)
 * Callees:
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     GetBaseData @ 0x1C00055CA (GetBaseData.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     DupObjData @ 0x1C004AF24 (DupObjData.c)
 *     GetObjectTypeName @ 0x1C004BD70 (GetObjectTypeName.c)
 *     IsCompatableDSDTRevision @ 0x1C004BE48 (IsCompatableDSDTRevision.c)
 *     LogError @ 0x1C004E244 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB9C (PrintDebugMessage.c)
 *     DumpObject @ 0x1C0051EB8 (DumpObject.c)
 *     WriteField @ 0x1C00530B0 (WriteField.c)
 *     PushFrame @ 0x1C0053C54 (PushFrame.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 BaseData; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int v9; // ebx
  const void *ObjectTypeName; // rax
  __int64 v12; // rax
  size_t v13; // rdx
  void *v14; // rcx
  int v15; // edx
  bool v16; // al
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0LL;
  BaseData = GetBaseData(a2);
  v8 = BaseData;
  switch ( *(_WORD *)(BaseData + 2) )
  {
    case 0:
      return (unsigned int)DupObjData(gpheapGlobal, BaseData, v7);
    case 1:
      v16 = IsCompatableDSDTRevision();
      v14 = (void *)(v8 + 16);
      v7 = a3;
      v13 = v16 ? 8 : 4;
      return (unsigned int)CopyObjBuffer(v14, v13, v7);
    case 2:
      v15 = *(_DWORD *)(BaseData + 24);
      if ( !v15 )
        return (unsigned int)-1073741811;
      v13 = (unsigned int)(v15 - 1);
      goto LABEL_16;
    case 3:
      v13 = *(unsigned int *)(BaseData + 24);
LABEL_16:
      v14 = *(void **)(BaseData + 32);
      return (unsigned int)CopyObjBuffer(v14, v13, v7);
  }
  if ( *(_WORD *)(BaseData + 2) != 5 )
  {
    if ( *(_WORD *)(BaseData + 2) != 14 )
    {
      if ( *(_WORD *)(BaseData + 2) == 16 )
      {
        if ( (gDebugger & 0x20000) != 0 )
          DumpObject(a3, v6, 0);
        return 0;
      }
      else
      {
        v9 = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
        PrintDebugMessage(215, ObjectTypeName, 0LL, 0LL, 0LL);
      }
      return v9;
    }
    return (unsigned int)WriteField(a1, BaseData, *(_QWORD *)(BaseData + 32) + 12LL, a3);
  }
  v9 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v18);
  if ( !v9 )
  {
    v12 = v18;
    *(_QWORD *)(v18 + 32) = v8;
    *(_QWORD *)(v12 + 40) = a3;
  }
  return v9;
}
