__int64 __fastcall DpiFdoHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  int PowerRelations; // esi
  int v5; // r15d
  unsigned int v6; // r13d
  __int64 v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Length; // ecx
  char v10; // bp
  unsigned int *Information; // r14
  int v12; // eax
  unsigned int v13; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v15; // r15
  __int64 *v16; // rbp
  unsigned int v17; // r12d
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-A8h]
  _QWORD v23[10]; // [rsp+30h] [rbp-98h] BYREF

  memset(v23, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v23[1]);
  PowerRelations = 0;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v23[8] = MEMORY[0xFFFFF78000000014];
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LODWORD(v23[3]) = 6;
  LOBYTE(v23[6]) = -1;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 2 )
  {
    PowerRelations = DpiFdoHandleQueryPowerRelations(v7, a2);
  }
  else
  {
    if ( Length )
      goto LABEL_25;
    _m_prefetchw((const void *)(v7 + 3660));
    v10 = _InterlockedOr((volatile signed __int32 *)(v7 + 3660), 1u);
    if ( (v10 & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( (v10 & 1) == 0 && *(_DWORD *)(v7 + 236) == 2 && *(_DWORD *)(v7 + 4000) != 1 && *(_DWORD *)(v7 + 284) == 1 )
        DpiFdoInvalidateChildRelations(a1, 6LL, v23);
      if ( *(_BYTE *)(v7 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
      KeLeaveCriticalRegion();
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3320), 1u);
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information && *Information )
    {
      v6 = *Information;
      v5 = *Information - 1;
    }
    v12 = *(_DWORD *)(v7 + 3680);
    if ( v12 )
      v5 = v6 + v12 - 1;
    v13 = 8 * v5 + 16;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v13, 1953656900LL);
    v15 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, v13);
      v22 = *(_DWORD *)(v7 + 3680);
      *v15 = v6 + v22;
      if ( v6 )
        memmove(v15 + 2, Information + 2, 8LL * v6);
      v16 = *(__int64 **)(v7 + 3664);
      v17 = 0;
      if ( v22 )
      {
        do
        {
          if ( *v16 == *(_QWORD *)(v7 + 3664) )
            break;
          *(_QWORD *)&v15[2 * v17 + 2 + 2 * v6] = v16[3];
          ObfReferenceObject((PVOID)v16[3]);
          *((_BYTE *)v16 + 509) = 1;
          ++v17;
          v16 = (__int64 *)*v16;
        }
        while ( v17 < *(_DWORD *)(v7 + 3680) );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v15;
      v18 = (_QWORD *)(v7 + 3688);
      while ( 1 )
      {
        v19 = (_QWORD *)*v18;
        if ( (_QWORD *)*v18 == v18 )
          break;
        if ( (_QWORD *)v19[1] != v18 || (v21 = *v19, *(_QWORD **)(*v19 + 8LL) != v19) )
          __fastfail(3u);
        *v18 = v21;
        *(_QWORD *)(v21 + 8) = v18;
        *((_BYTE *)v19 + 509) = 0;
      }
    }
    else
    {
      PowerRelations = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
    }
    _InterlockedAnd((volatile signed __int32 *)(v7 + 3660), 0xFFFFFFFE);
    ExReleaseResourceLite((PERESOURCE)(v7 + 3320));
    KeLeaveCriticalRegion();
  }
  if ( PowerRelations < 0 )
  {
    if ( PowerRelations != -1073741637 )
    {
      a2->IoStatus.Status = PowerRelations;
      IofCompleteRequest(a2, 1);
      return (unsigned int)PowerRelations;
    }
  }
  else
  {
    a2->IoStatus.Status = PowerRelations;
  }
LABEL_25:
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 160), a2);
}
