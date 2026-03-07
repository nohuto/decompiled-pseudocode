__int64 __fastcall LoadTable(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r15
  unsigned int v6; // ebx
  __int64 v7; // rbx
  char *Pool2; // r12
  unsigned int v9; // r13d
  const void *v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // eax
  const void *v13; // rdx
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  char *v17; // r13
  int v18; // eax
  int v19; // eax
  int DDB; // edi
  int v21; // ecx
  int NameSpaceObject; // eax
  int v23; // eax
  const void *v25; // [rsp+30h] [rbp-20h]
  const void *v26; // [rsp+38h] [rbp-18h]
  const void *v27; // [rsp+40h] [rbp-10h]
  unsigned int v28; // [rsp+98h] [rbp+48h] BYREF
  const void *v29; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v30 = 0LL;
  v6 = ValidateArgTypes((__int64)a1, v3, 0, "ZZZ");
  if ( v6 )
    return v6;
  v28 = 0;
  v7 = *(_QWORD *)(a2 + 80);
  Pool2 = 0LL;
  v9 = *(_DWORD *)(v7 + 64) - 1;
  v10 = *(const void **)(v7 + 32);
  v11 = *(_DWORD *)(v7 + 104) - 1;
  v26 = *(const void **)(v7 + 72);
  v25 = *(const void **)(v7 + 112);
  v12 = *(_DWORD *)(v7 + 24) - 1;
  v27 = v10;
  v29 = (const void *)v12;
  if ( v12 > 4 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v13 = v29;
    v14 = 100;
LABEL_4:
    PrintDebugMessage(v14, v13, 0LL, 0LL, 0LL);
    return v6;
  }
  LODWORD(v29) = 0;
  memmove(&v29, v10, v12);
  if ( v9 > 6 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v13 = (const void *)v9;
    v14 = 96;
    goto LABEL_4;
  }
  if ( v11 > 8 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v13 = (const void *)v11;
LABEL_9:
    v14 = 101;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 76) < 4u )
  {
    v17 = "\\";
LABEL_15:
    if ( *(_DWORD *)(a2 + 76) >= 5u )
    {
      v18 = ValidateArgTypes((__int64)a1, v7 + 160, 0, "Z");
      v6 = v18;
      if ( v18 )
      {
        LogError(v18);
        AcpiDiagTraceAmlError((__int64)a1, v6);
        v16 = 98;
        goto LABEL_18;
      }
      if ( *(_DWORD *)(a2 + 76) < 6u )
      {
        v6 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)a1, -1072431098);
        v13 = 0LL;
        goto LABEL_9;
      }
    }
    if ( !ghMapTable )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)a1, -1072431098);
      PrintDebugMessage(94, 0LL, 0LL, 0LL, 0LL);
      DDB = -1072431098;
      goto LABEL_39;
    }
    v19 = ghMapTable((unsigned int)v29, v26, v25, 0LL, &v28);
    DDB = v19;
    if ( v19 != -1073741789 )
    {
      if ( v19 == -1073741275 )
        DDB = -1073741772;
      goto LABEL_39;
    }
    Pool2 = (char *)ExAllocatePool2(64LL, v28, 1114402113LL);
    if ( !Pool2 )
    {
      LogError(DDB + 119);
      AcpiDiagTraceAmlError((__int64)a1, DDB + 119);
      v21 = 87;
LABEL_25:
      PrintDebugMessage(v21, 0LL, 0LL, 0LL, 0LL);
LABEL_39:
      LogError(DDB);
      AcpiDiagTraceAmlError((__int64)a1, DDB);
      PrintDebugMessage(89, v27, v26, v25, 0LL);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      goto LABEL_40;
    }
    if ( ghMapTable )
    {
      DDB = ghMapTable((unsigned int)v29, v26, v25, Pool2, &v28);
      if ( !DDB )
      {
        NameSpaceObject = GetNameSpaceObject(v17, a1[10], (__int64)&v30, 0x80000000);
        DDB = NameSpaceObject;
        if ( NameSpaceObject )
        {
          LogError(NameSpaceObject);
          AcpiDiagTraceAmlError((__int64)a1, DDB);
          PrintDebugMessage(93, v17, 0LL, 0LL, 0LL);
        }
        else
        {
          v23 = PushPost((__int64)a1, (__int64)ProcessLoadTable, (__int64)Pool2, a2, *(_QWORD *)(a2 + 88));
          DDB = v23;
          if ( !v23 )
          {
            DDB = LoadDDB(a1, Pool2, v30, *(_QWORD *)(a2 + 88));
            DereferenceObjectEx(v30);
LABEL_40:
            v6 = DDB;
            if ( DDB && Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            goto LABEL_43;
          }
          LogError(v23);
          AcpiDiagTraceAmlError((__int64)a1, DDB);
          PrintDebugMessage(90, 0LL, 0LL, 0LL, 0LL);
        }
        v4 = v30;
        goto LABEL_40;
      }
    }
    else
    {
      DDB = -1072431098;
    }
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v21 = 91;
    goto LABEL_25;
  }
  v15 = ValidateArgTypes((__int64)a1, v7 + 120, 0, "Z");
  v6 = v15;
  if ( !v15 )
  {
    v7 = *(_QWORD *)(a2 + 80);
    v17 = *(char **)(v7 + 152);
    goto LABEL_15;
  }
  LogError(v15);
  AcpiDiagTraceAmlError((__int64)a1, v6);
  v16 = 99;
LABEL_18:
  PrintDebugMessage(v16, 0LL, 0LL, 0LL, 0LL);
LABEL_43:
  if ( v4 )
    DereferenceObjectEx(v4);
  return v6;
}
