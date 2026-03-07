__int64 __fastcall DxgkAddDiagnosticInfoIntoReport(
        struct _WD_DEBUG_REPORT *a1,
        struct _DEVICE_OBJECT *a2,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  char *Pool2; // rax
  _DWORD *v7; // r13
  unsigned int v8; // eax
  int v9; // r12d
  int *v10; // r15
  int v11; // ebp
  __int64 v12; // rdi
  _DWORD *v13; // rax
  int *v14; // r14
  struct _WD_DEBUG_REPORT *v15; // rbx
  const wchar_t *v16; // r9
  bool v17; // cf
  unsigned int *v18; // r12
  unsigned int *v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rdi
  unsigned int v22; // ebp
  __int64 v23; // rax
  unsigned int v24; // ebp
  unsigned int v25; // edi
  int v26; // ebx
  unsigned int v27; // r10d
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // r8d
  unsigned int v31; // r9d
  __int64 v32; // rax
  int *v33; // rdi
  __int64 v34; // rbx
  unsigned int v36; // [rsp+50h] [rbp-48h]
  __int64 v37; // [rsp+58h] [rbp-40h]
  unsigned int v39; // [rsp+B8h] [rbp+20h]

  if ( !a1 || !a2 || !a3 || !*((_QWORD *)a3 + 28) )
    return 3221225485LL;
  v4 = 0;
  v5 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, 0) + 4095) & 0xFFFFF000;
  Pool2 = (char *)ExAllocatePool2(256LL, v5, 1380209782LL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry1(6LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating live dump data (size 0x%I64x)",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v8 = TdrCollectBugcheckSecondaryDumpData(Pool2, v5, 1, 0);
  v9 = *((_DWORD *)a3 + 55);
  v39 = v8;
  v10 = 0LL;
  v11 = v9 != 0 ? 32 : 24;
  v12 = (v11 + v9 + 4431) & 0xFFFFF000;
  v13 = (_DWORD *)ExAllocatePool2(256LL, v12, 1380209782LL);
  v14 = v13;
  if ( !v13 )
    goto LABEL_7;
  v17 = v9 != 0;
  v13[1] = 0;
  v18 = v13 + 2;
  v19 = v13 + 4;
  v20 = v13 + 4;
  *v13 = v17 + 2;
  v13[2] = v11;
  v13[3] = 49;
  if ( *((_DWORD *)a3 + 55) )
  {
    *v19 = 0;
    v20 = v13 + 6;
    v13[5] = 1;
  }
  *(_QWORD *)v20 = 0LL;
  v21 = v13 + 2;
  v22 = *v18;
  v20[2] = *((_DWORD *)a3 + 2);
  *((_QWORD *)v20 + 2) = 0LL;
  v20[3] = 0;
  *(_OWORD *)(v20 + 6) = *(_OWORD *)((char *)a3 + 12);
  *(_OWORD *)(v20 + 10) = *(_OWORD *)((char *)a3 + 28);
  *(_OWORD *)(v20 + 14) = *(_OWORD *)((char *)a3 + 44);
  *(_OWORD *)(v20 + 18) = *(_OWORD *)((char *)a3 + 60);
  *(_OWORD *)(v20 + 22) = *(_OWORD *)((char *)a3 + 76);
  *(_OWORD *)(v20 + 26) = *(_OWORD *)((char *)a3 + 92);
  *(_OWORD *)(v20 + 30) = *(_OWORD *)((char *)a3 + 108);
  *(_OWORD *)(v20 + 34) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)(v20 + 38) = *(_OWORD *)((char *)a3 + 140);
  *(_OWORD *)(v20 + 42) = *(_OWORD *)((char *)a3 + 156);
  *(_OWORD *)(v20 + 46) = *(_OWORD *)((char *)a3 + 172);
  *(_OWORD *)(v20 + 50) = *(_OWORD *)((char *)a3 + 188);
  if ( *((_DWORD *)a3 + 2) == 3 )
  {
    v23 = *((_QWORD *)a3 + 26);
    if ( v23 )
    {
      if ( *(_DWORD *)v23 == 16 )
      {
        *(_OWORD *)(v20 + 54) = *(_OWORD *)v23;
        v20[58] = *(_DWORD *)(v23 + 16);
      }
    }
  }
  v24 = v22 + 336;
  if ( *((_DWORD *)a3 + 55) )
  {
    *v19 = v24;
    v21 = v14 + 4;
    memmove((char *)v14 + v24, *((const void **)a3 + 28), *((unsigned int *)a3 + 55));
    v24 += *((_DWORD *)a3 + 55);
  }
  v21[2] = v24;
  v12 = (v24 + v39 + 4095) & 0xFFFFF000;
  v10 = (int *)ExAllocatePool2(256LL, v12, 1380209782LL);
  if ( v10 )
  {
    v25 = v7[2];
    v26 = *v7 + 1 + *v14;
    v36 = *v18;
    v37 = v25;
    memmove(v10, v7, v25);
    v27 = 2 * v26;
    *v10 = v26;
    v28 = v10 + 2;
    v29 = *v7 - 1;
    if ( *v7 != 1 )
    {
      do
      {
        if ( !v28[1] )
          break;
        *v28 += 8 * v26 - v25;
        v28 += 2;
        --v29;
      }
      while ( v29 );
    }
    v30 = *v14;
    v31 = v39 - v25;
    while ( --v30 && v18[1] )
    {
      v32 = *(_QWORD *)v18;
      v18 += 2;
      *(_QWORD *)v28 = v32;
      *v28 += v27 * 4 + v39 - v25 - v36;
      v28 += 2;
    }
    v33 = &v10[v27];
    v34 = v31;
    memmove(v33, (char *)v7 + v37, v31);
    memmove((char *)v33 + v34, (char *)v14 + v36, v24 - v36);
    v15 = a1;
    if ( (unsigned __int8)WdDbgReportSecondaryData(a1, v10, (v24 + v39 + 4095) & 0xFFFFF000) )
      goto LABEL_28;
    v12 = 3751LL;
    WdLogSingleEntry1(2LL, 3751LL);
    v16 = L"WdDbgReportSecondaryData returned FALSE for combined blob.";
  }
  else
  {
LABEL_7:
    WdLogSingleEntry1(2LL, v12);
    v15 = a1;
    v16 = L"Failed to allocate memory for DxgkAddDiagnosticInfoIntoReport (Size = 0x%I64x)";
  }
  v4 = -1073741801;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v12, 0LL, 0LL, 0LL, 0LL);
  if ( !(unsigned __int8)WdDbgReportSecondaryData(v15, v7, v39) )
  {
    WdLogSingleEntry1(2LL, 3762LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"WdDbgReportSecondaryData returned FALSE.",
      3762LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_28:
  ExFreePoolWithTag(v7, 0x52445476u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x52445476u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52445476u);
  return v4;
}
