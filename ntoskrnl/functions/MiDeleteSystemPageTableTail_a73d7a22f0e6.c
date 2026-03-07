__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  _OWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  v1 = *(unsigned int **)(a1 + 168);
  memset(v8, 0, sizeof(v8));
  v10 = 0LL;
  v3 = *((_QWORD *)v1 + 2);
  v9 = 0LL;
  MiFlushTbList(v3);
  v4 = *((_QWORD *)v1 + 1);
  if ( v4 )
  {
    MiFreeUnmappedPageTables(v4, v8);
    *((_QWORD *)v1 + 1) = 0LL;
    if ( (_QWORD)v9 )
    {
      if ( qword_140C6F658 )
      {
        v7 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        MiReturnCommit(v7, v9 - *((_QWORD *)&v8[0] + 1), v6);
        MiReturnSystemCharges(v7, v9, *v1);
      }
    }
  }
  return 0LL;
}
