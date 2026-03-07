__int64 __fastcall EtwpInitializeAutoLoggers(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  _QWORD *v17; // rbx
  void *Pool2; // rdi
  void *v19; // rbx
  _QWORD *i; // rdi
  _WORD *v22; // rdx
  __int64 v23; // rax
  BOOLEAN NewElement[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+4Ch] [rbp-BCh] BYREF
  RTL_AVL_TABLE Table; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR SourceString[16]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD Path[8]; // [rsp+E8h] [rbp-20h] BYREF
  int v29; // [rsp+168h] [rbp+60h]
  __int128 v30; // [rsp+178h] [rbp+70h]
  __int128 v31; // [rsp+188h] [rbp+80h]
  __int128 v32; // [rsp+198h] [rbp+90h]
  __int128 v33; // [rsp+1A8h] [rbp+A0h]
  __int128 v34; // [rsp+1B8h] [rbp+B0h]
  __int128 v35; // [rsp+1C8h] [rbp+C0h]
  __int128 v36; // [rsp+1D8h] [rbp+D0h]
  __int128 v37; // [rsp+1E8h] [rbp+E0h]
  __int64 v38; // [rsp+1F8h] [rbp+F0h]

  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[1] = v2;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\WMI\\AutoLogger";
  Path[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\WMI\\AutoLogger";
  Path[4] = v5;
  v7 = *(_OWORD *)L"ol\\WMI\\AutoLogger";
  Path[5] = v6;
  Path[6] = v7;
  v8 = *(_DWORD *)L"r";
  Path[7] = *(_OWORD *)L"utoLogger";
  v29 = v8;
  v9 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v30 = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v10 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v31 = v9;
  v11 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v32 = v10;
  v12 = *(_OWORD *)L"ControlSet\\Control\\WMI\\GlobalLogger";
  v33 = v11;
  v13 = *(_OWORD *)L"et\\Control\\WMI\\GlobalLogger";
  v34 = v12;
  v14 = *(_OWORD *)L"ol\\WMI\\GlobalLogger";
  v35 = v13;
  v15 = *(_OWORD *)L"lobalLogger";
  v16 = *(_QWORD *)L"ger";
  v36 = v14;
  v37 = v15;
  v38 = v16;
  wcscpy(SourceString, L"GlobalLogger");
  memset(&Table, 0, sizeof(Table));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)EtwpAvlCompareKeyNames,
    (PRTL_AVL_ALLOCATE_ROUTINE)EtwpAllocateKeyNameEntry,
    (PRTL_AVL_FREE_ROUTINE)EtwpFreeKeyNameEntry,
    0LL);
  if ( a1 )
  {
    v17 = (_QWORD *)(a1 + 8);
    if ( (_QWORD *)*v17 != v17 )
    {
      EtwpEnableBootLoggerRegistryProviders(Path, a1);
      for ( i = (_QWORD *)*v17; i != v17; i = (_QWORD *)*i )
      {
        v22 = (_WORD *)i[2];
        v23 = -1LL;
        do
          ++v23;
        while ( v22[v23] );
        RtlInsertElementGenericTableAvl(&Table, v22, 2 * v23 + 2, NewElement);
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(256LL, 520LL, 1953985605LL);
  if ( Pool2 )
  {
    if ( (unsigned int)RtlGetPersistedStateLocation(
                         L"ETWAutoLoggerPath",
                         0LL,
                         0LL,
                         0,
                         Pool2,
                         0x208u,
                         (unsigned int *)&v25) )
    {
      ExFreePoolWithTag(Pool2, 0x74777445u);
      Pool2 = 0LL;
    }
    v19 = (void *)ExAllocatePool2(256LL, 520LL, 1953985605LL);
    if ( v19 )
    {
      if ( (unsigned int)RtlGetPersistedStateLocation(
                           L"ETWGlobalLoggerPath",
                           0LL,
                           0LL,
                           0,
                           v19,
                           0x208u,
                           (unsigned int *)&v25) )
      {
        ExFreePoolWithTag(v19, 0x74777445u);
        v19 = 0LL;
      }
      EtwStartAutoLogger(SourceString);
      EtwpEnumerateAutologgerPath((PCWSTR)Path);
      if ( !Pool2 )
        goto LABEL_10;
      EtwpEnumerateAutologgerPath((PCWSTR)Pool2);
    }
    else if ( !Pool2 )
    {
      return EtwpFreeKeyNameList(&Table);
    }
    ExFreePoolWithTag(Pool2, 0x74777445u);
LABEL_10:
    if ( v19 )
      ExFreePoolWithTag(v19, 0x74777445u);
  }
  return EtwpFreeKeyNameList(&Table);
}
