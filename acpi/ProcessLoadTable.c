/*
 * XREFs of ProcessLoadTable @ 0x1C0058610
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyNA @ 0x1C002BADC (RtlStringCchCopyNA.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 __fastcall ProcessLoadTable(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3)
{
  const char *v3; // r12
  void *v4; // r14
  int v5; // ebx
  __int64 v6; // r13
  ULONG_PTR v9; // rdi
  int v10; // eax
  const char *v11; // rbp
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // r14
  char *Pool2; // rax
  char *v17; // rbp
  int v18; // ecx
  __int64 v19; // r11
  char *v20; // rax
  int NameSpaceObject; // eax
  __int64 v22; // rcx
  __int64 v24; // rbx
  int v25; // eax
  void *v26; // [rsp+38h] [rbp-40h]
  const char *pszSrc; // [rsp+88h] [rbp+10h]
  unsigned int v28; // [rsp+90h] [rbp+18h]
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v29 = 0LL;
  v3 = 0LL;
  v4 = (void *)a2[4];
  v5 = a3;
  v6 = a2[5];
  v26 = v4;
  if ( a3 )
  {
    v9 = 1LL;
    goto LABEL_44;
  }
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  if ( *(_DWORD *)(v6 + 76) < 4u )
  {
    v11 = "\\";
  }
  else
  {
    v10 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 120LL, 0, "Z");
    v5 = v10;
    if ( v10 )
    {
      LogError(v10);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v9 = 5LL;
      goto LABEL_44;
    }
    v11 = *(const char **)(*(_QWORD *)(v6 + 80) + 152LL);
  }
  pszSrc = v11;
  if ( *(_DWORD *)(v6 + 76) >= 5u )
  {
    v12 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 160LL, 0, "Z");
    v5 = v12;
    if ( v12 )
    {
      LogError(v12);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v9 = 6LL;
      goto LABEL_44;
    }
    v3 = *(const char **)(*(_QWORD *)(v6 + 80) + 192LL);
  }
  v13 = *(_DWORD *)(v6 + 76);
  if ( v13 >= 5 && v3 && *v3 )
  {
    if ( v13 < 6 )
    {
      v5 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(BugCheckParameter2, -1072431098);
      PrintDebugMessage(150, 0LL, 0LL, 0LL, 0LL);
      v9 = 7LL;
      goto LABEL_44;
    }
    v14 = -1LL;
    if ( ((*v3 - 92) & 0xFD) != 0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v11[v15] );
      do
        ++v14;
      while ( v3[v14] );
      v28 = v15 + v14 + 2;
      Pool2 = (char *)ExAllocatePool2(64LL, v28, 1231842625LL);
      v17 = Pool2;
      if ( !Pool2 )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
        v18 = 86;
LABEL_25:
        PrintDebugMessage(v18, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 4LL;
        *(_QWORD *)(a2[6] + 16LL) = 0LL;
        goto LABEL_44;
      }
      RtlStringCchCopyNA(Pool2, (unsigned int)(v15 + v14 + 2), pszSrc, (unsigned int)v15);
      if ( pszSrc[v19 - 1] != 92 )
      {
        v17[v19] = 46;
        LODWORD(v15) = v15 + 1;
      }
      RtlStringCchCopyNA(&v17[(unsigned int)v15], v28 - (unsigned int)v15, v3, (unsigned int)v14);
      v17[(unsigned int)(v15 + v14)] = 0;
    }
    else
    {
      do
        ++v14;
      while ( v3[v14] );
      v20 = (char *)ExAllocatePool2(64LL, (unsigned int)(v14 + 1), 1231842625LL);
      v17 = v20;
      if ( !v20 )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
        v18 = 92;
        goto LABEL_25;
      }
      RtlStringCchCopyNA(v20, (unsigned int)(v14 + 1), v3, (unsigned int)v14);
    }
    NameSpaceObject = GetNameSpaceObject(v17, *(_QWORD *)(BugCheckParameter2 + 80), (__int64)&v29, 0x80000000);
    v5 = NameSpaceObject;
    if ( NameSpaceObject )
    {
      LogError(NameSpaceObject);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(92, v17, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      v9 = 2LL;
LABEL_43:
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
LABEL_44:
      KeBugCheckEx(0xA5u, 0x15uLL, BugCheckParameter2, v9, v5);
    }
    if ( v29 == gpnsNameSpaceRoot )
    {
      LogError(0);
      AcpiDiagTraceAmlError(BugCheckParameter2, 0);
      PrintDebugMessage(97, 0LL, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
    }
    else
    {
      v24 = v29 + 64;
      FreeObjData(v29 + 64);
      v25 = DupObjData(gpheapGlobal, v24, *(_QWORD *)(v6 + 80) + 200LL);
      v5 = v25;
      if ( v25 )
      {
        LogError(v25);
        AcpiDiagTraceAmlError(BugCheckParameter2, v5);
        PrintDebugMessage(88, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 3LL;
        goto LABEL_43;
      }
    }
    ExFreePoolWithTag(v17, 0);
    v4 = v26;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v22 = *(_QWORD *)(BugCheckParameter2 + 416);
  *(_QWORD *)(BugCheckParameter2 + 416) = *(_QWORD *)(v22 + 8);
  HeapFree(v22);
  return (unsigned int)v5;
}
