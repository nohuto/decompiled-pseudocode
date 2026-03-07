void __fastcall DpiAcpiHandleAcpiEvent(char *P)
{
  int v2; // ebx
  bool v3; // zf
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  _DWORD *v8; // r15
  int v9; // edx
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // [rsp+38h] [rbp-39h] BYREF
  __int64 v17; // [rsp+40h] [rbp-31h]
  _QWORD v18[10]; // [rsp+48h] [rbp-29h] BYREF

  v16 = 0;
  AcquireMiniportListMutex();
  v2 = *((_DWORD *)P + 6);
  if ( v2 == 1 && (_BYTE)word_1C013B49C && HIBYTE(word_1C013B49C) && qword_1C013B4B0 == *((_QWORD *)P + 2) )
  {
    *((_DWORD *)P + 6) = 4;
    v2 = 4;
    *((_QWORD *)P + 2) = qword_1C013B4A8;
  }
  memset(v18, 0, 0x48uLL);
  v18[0] = 0x4000000006LL;
  v3 = *((_QWORD *)P + 4) == 0LL;
  LODWORD(v18[7]) = *((_DWORD *)P + 7);
  HIDWORD(v18[7]) = !v3;
  memset(&v18[1], 0, 36);
  LODWORD(v18[6]) = 25;
  HIDWORD(v18[6]) = v2;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18, 0x200000000LL);
  while ( 1 )
  {
    v4 = qword_1C013B4C8;
    if ( *(_QWORD *)v4 != v4 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v4 + 72), Executive, 0, 0, 0LL);
        v5 = *(_QWORD *)(v4 + 56);
        if ( *(_QWORD *)v5 != v5 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v4 + 72), 0);
        v4 = *(_QWORD *)v4;
        if ( *(_QWORD *)v4 == qword_1C013B4C8 )
          goto LABEL_46;
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
        {
          v6 = *((_DWORD *)P + 6);
          if ( v6 != 1 && v6 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v5 + 24) )
            break;
        }
LABEL_44:
        v5 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 == *(_QWORD *)(v4 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v5 + 484) )
        DpiCheckForOutstandingD3Requests(v5);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
      if ( *(_BYTE *)(v5 + 1158) != 1 || !*(_QWORD *)(v4 + 232) || *(_DWORD *)(v5 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v5 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v16 = 0;
      v8 = (_DWORD *)(v5 + 284);
      if ( *(_DWORD *)(v5 + 4000) == 1 || *v8 != 1 )
      {
        v9 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3912), 2, v7);
        v9 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v5 + 3912), v9);
      v10 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v4,
                   *(_QWORD *)(v5 + 48),
                   *((_DWORD *)P + 6),
                   *((_DWORD *)P + 7),
                   *((_QWORD *)P + 4),
                   (__int64)&v16);
      if ( *(_DWORD *)(v5 + 4000) == 1 || *v8 != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v5 + 3912));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v5 + 3912));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3912), 2u, v11);
      }
      v12 = *(_QWORD *)(v5 + 3912);
      v13 = 0;
      if ( v12 )
      {
        v17 = *(_QWORD *)(v12 + 404);
        v13 = v17;
      }
      memset(v18, 0, 0x48uLL);
      v14 = *(_QWORD *)(v5 + 2672);
      v18[7] = __PAIR64__(v10, v16);
      v18[0] = 0x480000001ELL;
      memset(&v18[1], 0, 36);
      LODWORD(v18[6]) = 42;
      HIDWORD(v18[6]) = v13;
      v18[8] = v14;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18, 0x200000000LL);
      if ( (int)v10 >= 0 )
      {
        v15 = v16;
        if ( *((_DWORD *)P + 6) == 4 && ((-((v16 & 8) != 0) - 8) & v16) != 0 )
        {
          WdLogSingleEntry1(2LL, v16);
          v15 = 0LL;
          v16 = 0;
        }
        if ( ((unsigned __int8)-((v15 & 7) != 0) & ((*(_BYTE *)(v5 + 3920) & 1) == 0)) == 0 )
          goto LABEL_37;
        WdLogSingleEntry1(2LL, -1073741823LL);
      }
      else
      {
        WdLogSingleEntry1(3LL, v10);
      }
      v15 = 0LL;
      v16 = 0;
LABEL_37:
      WdLogSingleEntry1(4LL, v15);
      if ( *(_DWORD *)(v5 + 4000) != 1 && *v8 == 1 && (v16 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v5 + 24), v16, P, P + 40);
      goto LABEL_41;
    }
LABEL_46:
    if ( *((_DWORD *)P + 6) != 4 || (v16 & 8) == 0 )
      break;
    *((_DWORD *)P + 6) = 1;
    *((_QWORD *)P + 2) = qword_1C013B4B0;
  }
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(P, 0);
}
