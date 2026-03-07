__int64 __fastcall MiObtainRotateProtectionRanges(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // edi
  _KPROCESS *Process; // r14
  unsigned __int8 v10; // r12
  int v11; // eax
  _QWORD *Pool; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  int v18; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+54h] [rbp-Ch] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-8h] BYREF
  __int16 v21; // [rsp+A8h] [rbp+48h] BYREF
  int v22; // [rsp+B0h] [rbp+50h] BYREF

  v20 = 0LL;
  v7 = 0;
  v19 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  while ( a2 <= a3 )
  {
    MiQueryAddressState(a2, a3, v10, a1, 0LL, &v22, &v19, &v21, (__int64 *)&v20, &v18);
    v11 = v22 & 7;
    if ( v11 != 4 && v11 != 1 )
    {
      v7 = -1073741755;
      break;
    }
    Pool = MiAllocatePool(64, 0x28uLL, 0x6252694Du);
    v13 = Pool;
    if ( !Pool )
    {
      v7 = -1073741670;
      break;
    }
    Pool[2] = a2;
    Pool[3] = v20;
    *((_DWORD *)Pool + 8) = v22;
    v14 = *(_QWORD **)(a4 + 8);
    if ( *v14 != a4 )
LABEL_16:
      __fastfail(3u);
    *v13 = a4;
    v13[1] = v14;
    *v14 = v13;
    a2 = v20;
    *(_QWORD *)(a4 + 8) = v13;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v10);
  if ( v7 < 0 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD **)a4;
      if ( *(_QWORD *)a4 == a4 )
        break;
      if ( v15[1] != a4 )
        goto LABEL_16;
      v16 = *v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        goto LABEL_16;
      *(_QWORD *)a4 = v16;
      *(_QWORD *)(v16 + 8) = a4;
      ExFreePoolWithTag(v15, 0);
    }
  }
  return (unsigned int)v7;
}
