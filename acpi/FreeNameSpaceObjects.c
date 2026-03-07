void __fastcall FreeNameSpaceObjects(__int64 *a1)
{
  KIRQL v2; // al
  __int64 v3; // rbp
  __int64 *v4; // rbx
  KIRQL v5; // r15
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  _QWORD *i; // rcx
  _QWORD **v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rcx
  __int64 **j; // rcx
  __int64 *v15; // rax

  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v3 = a1[2];
  v4 = a1;
  v5 = v2;
  do
  {
LABEL_2:
    while ( (__int64 *)v4[3] != v4 + 3 )
      v4 = (__int64 *)v4[3];
    v6 = (__int64 *)v4[2];
    if ( !v6 || (v7 = (__int64 *)*v4, (__int64 *)*v4 == v6 + 3) )
      v7 = 0LL;
    for ( i = (_QWORD *)qword_1C006F860; i; i = *v9 )
    {
      v9 = (_QWORD **)(i + 1);
      if ( v4 == (__int64 *)i[3] )
      {
        if ( *i )
          *(_QWORD *)(*i + 8LL) = *v9;
        if ( *v9 )
          **v9 = *i;
        if ( i == (_QWORD *)qword_1C006F860 )
          qword_1C006F860 = (__int64)*v9;
        ExFreePoolWithTag(i, 0);
        break;
      }
    }
    if ( *((_WORD *)v4 + 33) == 10 )
    {
      v10 = v4[12];
      if ( !*(_BYTE *)(v10 + 12) && (*(_BYTE *)(v10 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v10, *(unsigned int *)(v10 + 8));
    }
    if ( v6 )
    {
      v11 = (__int64 *)*v4;
      if ( *(__int64 **)(*v4 + 8) != v4 || (v12 = (__int64 **)v4[1], *v12 != v4) )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = (__int64)v12;
    }
    else if ( v4 == (__int64 *)gpnsNameSpaceRoot )
    {
      gpnsNameSpaceRoot = 0LL;
    }
    v13 = v4[6];
    if ( v13 )
    {
      for ( j = (__int64 **)(v13 + 24); ; j = (__int64 **)(v15 + 7) )
      {
        v15 = *j;
        if ( !*j )
          break;
        if ( v15 == v4 )
        {
          *j = (__int64 *)v4[7];
          break;
        }
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v4[6] + 32));
    }
    if ( (v4[8] & 0x40) == 0 )
    {
      FreeDataBuffs(v4 + 8, 1LL);
      HeapFree(v4);
    }
    if ( v4 == a1 )
      break;
    if ( v7 )
    {
      v4 = v7;
      goto LABEL_2;
    }
    v4 = v6;
  }
  while ( v6 );
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
  if ( v3 )
    DereferenceObjectEx(v3, "Child Object");
}
