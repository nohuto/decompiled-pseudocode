__int64 __fastcall SleepstudyHelperDestroyLibrary(ULONG *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rdx
  ULONG **v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  volatile signed __int64 *v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD **i; // rdi

  v1 = 0;
  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpLibraryListLock, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(ULONG **)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = (ULONG **)*((_QWORD *)a1 + 1), *v4 != a1) )
LABEL_17:
      __fastfail(3u);
    *v4 = (ULONG *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
    v5 = a1 + 10;
    while ( 1 )
    {
      v6 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
        break;
      if ( (_QWORD *)v6[1] != v5 )
        goto LABEL_17;
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_17;
      *v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      v8 = (volatile signed __int64 *)(&SshpBlockerCollections + 4 * *((int *)v6 + 10));
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v8, 0LL);
      v9 = v6[2];
      if ( *(_QWORD **)(v9 + 8) != v6 + 2 )
        goto LABEL_17;
      v10 = (_QWORD *)v6[3];
      if ( (_QWORD *)*v10 != v6 + 2 )
        goto LABEL_17;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      SSHSupportReleasePushLockExclusive(v8);
      SshpDereferenceBlocker((_QWORD *)v6[15]);
    }
    for ( i = (_QWORD **)(a1 + 14); *i != i; SshpFreeDataEntry(*i) )
      ;
    CmpFreeTransientPoolWithTag(a1, a1[6]);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
