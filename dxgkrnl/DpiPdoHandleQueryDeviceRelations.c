__int64 __fastcall DpiPdoHandleQueryDeviceRelations(_QWORD *Object, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  __int64 Pool2; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int *v14; // r14
  unsigned int i; // edi
  __int64 v16; // rdx
  unsigned int v17; // eax

  v4 = *(_QWORD *)(*(_QWORD *)(Object[8] + 32LL) + 64LL);
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v5 )
    return *(unsigned int *)(a2 + 48);
  v6 = v5 - 1;
  if ( !v6 )
    return *(unsigned int *)(a2 + 48);
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      Pool2 = ExAllocatePool2(256LL, 16LL, 1953656900LL);
      v9 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1;
        *(_QWORD *)(Pool2 + 8) = Object;
        ObfReferenceObject(Object);
        v10 = 0;
        *(_QWORD *)(a2 + 56) = v9;
        return v10;
      }
LABEL_9:
      v10 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      return v10;
    }
    return *(unsigned int *)(a2 + 48);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  v12 = *(_DWORD *)(v4 + 236);
  if ( v12 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v12 - 3) & 0xFFFFFFFC) != 0 || v12 == 4)
    || (v13 = *(_DWORD *)(v4 + 2736), v13 < 2) )
  {
    v10 = *(_DWORD *)(a2 + 48);
  }
  else
  {
    v14 = (unsigned int *)ExAllocatePool2(256LL, 8LL * (v13 - 2) + 16, 1953656900LL);
    if ( !v14 )
      goto LABEL_9;
    for ( i = 1; i < *(_DWORD *)(v4 + 2736); ++i )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2728) + 8LL * i) + 64LL);
      *(_QWORD *)&v14[2 * i] = *(_QWORD *)(v16 + 152);
      ObfReferenceObject(*(PVOID *)(v16 + 152));
    }
    v17 = i - 1;
    v10 = 0;
    *v14 = v17;
    *(_QWORD *)(a2 + 56) = v14;
  }
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return v10;
}
