void __fastcall MigrateDefunctObjectsToNewOwner(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 *i; // rcx
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 56);
      if ( (*(_BYTE *)(v2 + 64) & 4) != 0 )
      {
        v5 = *(_QWORD *)(v2 + 48);
        if ( v5 )
        {
          for ( i = (__int64 *)(v5 + 24); ; i = (__int64 *)(v7 + 56) )
          {
            v7 = *i;
            if ( !*i )
              break;
            if ( v7 == v2 )
            {
              *i = v4;
              break;
            }
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v2 + 48) + 32LL));
        }
        InsertOwnerObjList(a2, (struct _EX_RUNDOWN_REF *)v2);
      }
      v2 = v4;
    }
    while ( v4 );
  }
}
