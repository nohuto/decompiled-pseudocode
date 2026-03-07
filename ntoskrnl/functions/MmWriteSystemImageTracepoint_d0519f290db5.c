__int64 __fastcall MmWriteSystemImageTracepoint(unsigned __int64 a1, char a2, char a3)
{
  char v3; // si
  unsigned __int64 v4; // rdi
  __int64 Lock; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  int v8; // ebx
  char v9; // r14
  char *AnyMultiplexedVm; // rbx
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int *v13; // rax
  unsigned int v15; // eax
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  char *v20; // [rsp+48h] [rbp-B8h]
  __int64 v21[14]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[14]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = a2;
  v4 = a1;
  memset(v21, 0, 0x68uLL);
  v19 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = MiLookupDataTableEntry(v4, 0);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -1073741811;
    goto LABEL_15;
  }
  if ( (unsigned int)MiGetSystemRegionType(v6[6]) == 1 )
  {
    v8 = -1073741637;
    goto LABEL_15;
  }
  v9 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v20 = AnyMultiplexedVm;
  while ( 1 )
  {
    MiInitializeDriverPatchState(v7, v21);
    v8 = MiPrepareDriverPatchState(v21, AnyMultiplexedVm);
    if ( v8 < 0 )
      break;
    if ( v9 )
    {
      v11 = *((_DWORD *)v7 + 16);
      v12 = 0;
    }
    else
    {
      if ( !v3 )
      {
        v12 = v4 - *((_DWORD *)v7 + 12);
        v11 = 1;
        goto LABEL_19;
      }
      v13 = RtlLookupFunctionEntry(v4, &v19, 0LL);
      if ( !v13 )
        goto LABEL_13;
      v12 = *v13;
      v11 = v13[1] - *v13;
    }
    if ( !v11 )
      goto LABEL_13;
LABEL_19:
    v15 = *((_DWORD *)v7 + 16);
    if ( v12 >= v15 || v15 - v12 < v11 )
    {
LABEL_13:
      v8 = -1073741811;
      break;
    }
    v8 = MiLockDriverPageRange(v21, v12 >> 12, (v11 + v12 - 1) >> 12, 2 * v9 + 1, 0LL);
    if ( v8 < 0 )
      break;
    memset(v22, 0, 0x68uLL);
    LOBYTE(v22[3]) = a3;
    v22[1] = a1;
    v22[2] = __PAIR64__(v11, v12);
    v8 = VslpEnterIumSecureMode(2u, 84, 0, (__int64)v22);
    if ( v8 != -1073741267 )
      break;
    if ( v9 )
    {
      v8 = -1073741637;
      break;
    }
    MiUnlockDriverPages(v21);
    v4 = a1;
    v9 = 1;
    AnyMultiplexedVm = v20;
    v3 = a2;
  }
  MiUnlockDriverPages(v21);
LABEL_15:
  if ( Lock )
    MmReleaseLoadLock(Lock);
  return (unsigned int)v8;
}
