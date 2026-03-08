/*
 * XREFs of BankField @ 0x1C004FEB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C005B230 (ParseFieldList.c)
 */

__int64 __fastcall BankField(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int NameSpaceObject; // eax
  __int64 v7; // r15
  unsigned int v8; // ebx
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v4 = a2[10];
  v5 = 0LL;
  v13 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(v4 + 32), *(_QWORD *)(a1 + 80), (__int64)&v14, 0x80000000);
  v7 = v14;
  v8 = NameSpaceObject;
  if ( NameSpaceObject )
    goto LABEL_6;
  v8 = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72LL), *(_QWORD *)(a1 + 80), (__int64)&v13, 0x80000000);
  if ( v8 )
    goto LABEL_5;
  if ( *(_WORD *)(v7 + 66) != 10 )
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    PrintDebugMessage(15, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
LABEL_5:
    v5 = v13;
    goto LABEL_6;
  }
  v5 = v13;
  if ( *(_WORD *)(v13 + 66) == 5 )
  {
    v10 = a2 + 8;
    v8 = CreateNameSpaceObject(
           *(_QWORD *)(a1 + 320),
           0LL,
           *(_QWORD *)(a1 + 80),
           *(struct _EX_RUNDOWN_REF **)(a1 + 88),
           a2 + 8,
           0);
    if ( !v8 )
    {
      *(_WORD *)(*v10 + 66LL) = 130;
      *(_DWORD *)(*v10 + 88LL) = 24;
      v11 = HeapAlloc(*(_QWORD *)(a1 + 320), 1179337288, *(_DWORD *)(*v10 + 88LL));
      *(_QWORD *)(*v10 + 96LL) = v11;
      if ( v11 )
      {
        memset(*(void **)(*v10 + 96LL), 0, *(unsigned int *)(*v10 + 88LL));
        v12 = *(__int64 **)(*v10 + 96LL);
        *v12 = v7;
        v12[1] = v5;
        v12[2] = *(_QWORD *)(a2[10] + 96LL);
        v8 = ParseFieldList(a1, a2[5], *v10, *(_DWORD *)(a2[10] + 136LL), *(_DWORD *)(*(_QWORD *)(v7 + 96) + 8LL));
        if ( !v8 )
          return v8;
      }
      else
      {
        v8 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(13, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    PrintDebugMessage(15, *(const void **)(a2[10] + 72LL), 0LL, 0LL, 0LL);
  }
LABEL_6:
  if ( v7 )
    DereferenceObjectEx(v7);
  if ( v5 )
    DereferenceObjectEx(v5);
  return v8;
}
