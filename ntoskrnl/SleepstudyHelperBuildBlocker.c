__int64 __fastcall SleepstudyHelperBuildBlocker(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r13
  unsigned int v5; // ebp
  _QWORD *NonPaged; // rbx
  __int64 Pool2; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  ULONG_PTR *v10; // r14
  volatile signed __int64 *v11; // rbp
  __int64 v12; // rax
  __int128 v13; // xmm0
  _QWORD *v14; // rax
  __int64 v15; // r13
  ULONG_PTR *v16; // rdi
  ULONG_PTR **v17; // rcx
  unsigned int v18; // esi

  v2 = *a1;
  v5 = *(_DWORD *)(*a1 + 24);
  if ( !a2 )
    return 0;
  NonPaged = (_QWORD *)SSHSupportAllocateNonPaged(304LL, v5);
  Pool2 = ExAllocatePool2(256LL, 128LL, v5);
  v8 = (_QWORD *)Pool2;
  if ( NonPaged && Pool2 )
  {
    NonPaged[37] = Pool2;
    *(_QWORD *)(Pool2 + 120) = NonPaged;
    *NonPaged = 0LL;
    *(_DWORD *)(Pool2 + 112) = 1;
    if ( *((_BYTE *)a1 + 88) )
      *((_DWORD *)NonPaged + 2) |= 4u;
    v9 = a1[10];
    if ( v9 )
    {
      NonPaged[36] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 296) + 112LL));
    }
    v8[1] = v8;
    v10 = v8 + 2;
    v8[3] = v8 + 2;
    v11 = (volatile signed __int64 *)(v2 + 16);
    v8[2] = v8 + 2;
    *v8 = v8;
    v8[4] = v2;
    *((_DWORD *)v8 + 10) = *((_DWORD *)a1 + 2);
    v8[12] = a1[8];
    v12 = a1[9];
    a1[8] = 0LL;
    v8[13] = v12;
    v13 = *((_OWORD *)a1 + 1);
    a1[9] = 0LL;
    *((_OWORD *)v8 + 3) = v13;
    *((_OWORD *)v8 + 4) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v8 + 5) = *((_OWORD *)a1 + 3);
    *((_OWORD *)a1 + 3) = 0LL;
    ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
    v14 = *(_QWORD **)(v2 + 48);
    v15 = v2 + 40;
    if ( *v14 != v15 )
      goto FatalListEntryError_87;
    *v8 = v15;
    v8[1] = v14;
    *v14 = v8;
    *(_QWORD *)(v15 + 8) = v8;
    SSHSupportReleasePushLockExclusive(v11);
    v16 = &SshpBlockerCollections + 4 * *((int *)v8 + 10);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v16, 0LL);
    v17 = (ULONG_PTR **)v16[3];
    if ( *v17 != v16 + 2 )
FatalListEntryError_87:
      __fastfail(3u);
    *v10 = (ULONG_PTR)(v16 + 2);
    v10[1] = (ULONG_PTR)v17;
    *v17 = v10;
    v16[3] = (ULONG_PTR)v10;
    if ( *((_BYTE *)v16 + 8) )
    {
      *((_DWORD *)NonPaged + 2) |= 2u;
      NonPaged[3] = SSHSupportQueryInterruptTime();
    }
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v16);
    SleepstudyHelperDestroyBlockerBuilder(a1);
    *a2 = NonPaged;
    return 0;
  }
  v18 = -1073741670;
  if ( NonPaged )
    CmpFreeTransientPoolWithTag(NonPaged, v5);
  if ( v8 )
    CmpFreeTransientPoolWithTag(v8, v5);
  return v18;
}
