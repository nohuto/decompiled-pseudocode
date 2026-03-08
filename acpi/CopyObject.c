/*
 * XREFs of CopyObject @ 0x1C0056550
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     MatchObjType @ 0x1C004C064 (MatchObjType.c)
 *     MoveObjData @ 0x1C004C164 (MoveObjData.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 */

__int64 __fastcall CopyObject(__int64 a1, __int64 a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // r8
  int v10; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v4 = 0;
  v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0, (__int64)&v12);
  v6 = v5;
  if ( v5 )
  {
    LogError(v5);
    AcpiDiagTraceAmlError(a1, v6);
    v7 = 33;
    goto LABEL_11;
  }
  if ( MatchObjType(*(unsigned __int16 *)(v12 + 2), 134) )
  {
    v4 = 1;
    if ( ((*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 1) & 0xFFFD) != 0 )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v7 = 32;
LABEL_11:
      PrintDebugMessage(v7, 0LL, 0LL, 0LL, 0LL);
      return v6;
    }
  }
  MoveObjData(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  v9 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    v10 = WriteObject(a1, v8, v9);
  else
    v10 = DupObjData(gpheapGlobal, v8, v9);
  v6 = v10;
  if ( v10 )
  {
    LogError(v10);
    AcpiDiagTraceAmlError(a1, v6);
    v7 = 31;
    goto LABEL_11;
  }
  return v6;
}
