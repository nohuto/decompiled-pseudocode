/*
 * XREFs of Load @ 0x1C00556C0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 *     LoadFieldUnitDDB @ 0x1C004FB68 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004FD4C (LoadMemDDB.c)
 */

__int64 __fastcall Load(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  __int64 v6; // rdi
  __int16 v7; // ax
  __int64 v8; // rdx
  unsigned int MemDDB; // eax
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "Z");
  if ( v4 )
    return v4;
  v4 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 133, (__int64)&v11);
  if ( v4 )
    return v4;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL), a1[10], (__int64)&v12, 0x80000000);
  v6 = v12;
  v4 = NameSpaceObject;
  if ( NameSpaceObject == -1073741772 )
  {
    LogError(-1073741772);
    AcpiDiagTraceAmlError((__int64)a1, -1073741772);
    PrintDebugMessage(78, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( !NameSpaceObject )
  {
    v7 = *(_WORD *)(v12 + 66);
    if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(v12 + 96);
      if ( !*(_BYTE *)(v8 + 12) )
      {
        MemDDB = LoadMemDDB(a1, *(const char **)v8, v11);
LABEL_11:
        v4 = MemDDB;
        goto LABEL_13;
      }
    }
    else if ( v7 == 5 )
    {
      MemDDB = LoadFieldUnitDDB(a1, v12 + 64, v11);
      goto LABEL_11;
    }
    v4 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)a1, -1072431095);
    PrintDebugMessage(79, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
LABEL_13:
    if ( (gdwfAMLIInit & 2) != 0 )
    {
      PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
      AMLIDebugger();
    }
  }
LABEL_15:
  if ( v6 )
    DereferenceObjectEx(v6);
  return v4;
}
