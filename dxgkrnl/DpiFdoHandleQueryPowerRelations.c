__int64 __fastcall DpiFdoHandleQueryPowerRelations(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r12d
  unsigned int v5; // ebp
  __int64 v7; // r14
  __int64 *v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rsi
  __int64 *v11; // r13
  int v12; // ecx
  __int64 v13; // r12
  unsigned int *Pool2; // rax
  unsigned int *v15; // r12
  unsigned int v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+90h] [rbp+8h]
  unsigned int v19; // [rsp+A0h] [rbp+18h]

  v2 = *(unsigned int **)(a2 + 56);
  v3 = a2;
  v16 = 0;
  v4 = 0;
  v5 = 0;
  v17 = 4;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 133LL) || *(_BYTE *)(a1 + 480) )
  {
    v16 = -1073741637;
    goto LABEL_4;
  }
  if ( v2 )
    v4 = *v2;
  AcquireMiniportListMutex();
  v7 = qword_1C013B4C8;
  if ( *(_QWORD *)v7 == v7 )
  {
LABEL_43:
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
    return v16;
  }
  v5 = v4;
  while ( *(_BYTE *)(v7 + 133) )
  {
LABEL_42:
    v7 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 == qword_1C013B4C8 )
      goto LABEL_43;
  }
  KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
  v8 = *(__int64 **)(v7 + 56);
  if ( (__int64 *)*v8 == v8 )
  {
LABEL_41:
    KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
    goto LABEL_42;
  }
  while ( 1 )
  {
    if ( !*((_BYTE *)v8 + 480) && *((_DWORD *)v8 + 4) == 1953656900 )
    {
      if ( *((_DWORD *)v8 + 5) == 2 )
      {
        v9 = v8;
        goto LABEL_20;
      }
      if ( *((_DWORD *)v8 + 5) == 3 )
      {
        v10 = v8[341];
        if ( v10 )
          break;
      }
    }
LABEL_40:
    v8 = (__int64 *)*v8;
    if ( *v8 == *(_QWORD *)(v7 + 56) )
      goto LABEL_41;
  }
  v9 = *(__int64 **)(v10 + 64);
LABEL_20:
  KeEnterCriticalRegion();
  v11 = v9 + 3;
  if ( *((_BYTE *)v9 + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*v11 + 64) + 4104LL));
  ExAcquireResourceSharedLite((PERESOURCE)v9[21], 1u);
  v12 = *((_DWORD *)v9 + 59);
  if ( v12 != 2 && (*((_DWORD *)v9 + 60) != 2 || ((v12 - 3) & 0xFFFFFFFC) != 0 || v12 == 4)
    || (v9[490] & 2) == 0
    || (*((_BYTE *)v9 + 3921) & 0x20) != 0 )
  {
    goto LABEL_37;
  }
  if ( v4 >= v5 + 1 )
    goto LABEL_36;
  v13 = v17 + v4;
  v19 = v13;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8 * v13 + 15, 1953656900LL);
  v15 = Pool2;
  if ( Pool2 )
  {
    if ( v2 && v5 )
    {
      memmove(Pool2, v2, 8LL * (v5 - 1) + 16);
      goto LABEL_34;
    }
    *Pool2 = 0;
    if ( v2 )
LABEL_34:
      ExFreePoolWithTag(v2, 0);
    v2 = v15;
    *(_QWORD *)(a2 + 56) = v15;
    v4 = v19;
    v17 *= 2;
LABEL_36:
    ObfReferenceObject((PVOID)v8[19]);
    ++v5;
    *(_QWORD *)&v2[2 * (*v2)++ + 2] = v8[19];
LABEL_37:
    if ( *((_BYTE *)v9 + 484) )
      DpiEnableD3Requests(*v11);
    ExReleaseResourceLite((PERESOURCE)v9[21]);
    KeLeaveCriticalRegion();
    goto LABEL_40;
  }
  v16 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  if ( *((_BYTE *)v9 + 484) )
    DpiEnableD3Requests(*v11);
  ExReleaseResourceLite((PERESOURCE)v9[21]);
  KeLeaveCriticalRegion();
  KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  v3 = a2;
LABEL_4:
  if ( v2 )
  {
    while ( v5 )
      ObfDereferenceObject(*(PVOID *)&v2[2 * --v5 + 2]);
    ExFreePoolWithTag(v2, 0);
  }
  *(_QWORD *)(v3 + 56) = 0LL;
  return v16;
}
