void __fastcall UnlinkHook(struct tagHOOK *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct tagHOOK **i; // rcx
  struct tagHOOK *v5; // rax
  struct tagHOOK *v6; // rdx
  struct tagHOOK *v7; // rax

  LockRefactorStagingAssertOwned(gDomainHookLock);
  if ( (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 8 * (*((int *)a1 + 12) + 6LL));
  }
  else
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( !v2 )
      return;
    v3 = *((int *)a1 + 12);
    *((_QWORD *)a1 + 9) = 0LL;
    i = (struct tagHOOK **)(v2 + 8 * v3 + 928);
  }
  v5 = *i;
  if ( *i != a1 )
  {
    v6 = *i;
    do
    {
      v5 = v6;
      if ( !v6 )
        break;
      i = (struct tagHOOK **)((char *)v6 + 40);
      v5 = (struct tagHOOK *)*((_QWORD *)v6 + 5);
      v6 = v5;
    }
    while ( v5 != a1 );
  }
  if ( !v5 )
  {
    for ( i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 8LL * (*((_DWORD *)a1 + 12) + 1) + 40);
          ;
          i = (struct tagHOOK **)((char *)v7 + 40) )
    {
      v7 = *i;
      if ( *i == a1 || !v7 )
        break;
    }
  }
  *i = (struct tagHOOK *)*((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0LL;
  if ( *((_QWORD *)a1 + 10) )
    UnlockObjectAssignment((char *)a1 + 80);
}
