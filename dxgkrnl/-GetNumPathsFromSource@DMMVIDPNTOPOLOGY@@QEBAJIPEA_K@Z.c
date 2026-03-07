__int64 __fastcall DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  __int64 Container; // rax
  __int64 v7; // rcx
  char *v8; // r8
  unsigned __int64 v9; // rdx
  char *v10; // r9
  unsigned __int64 v11; // rax
  char *v12; // rax
  __int64 v14; // rax

  v3 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    if ( IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3) )
    {
      v8 = (char *)this + 24;
      v9 = 0LL;
      v10 = (char *)*((_QWORD *)this + 3);
      if ( v10 == (char *)this + 24 )
        goto LABEL_12;
      v10 -= 8;
      if ( !v10 )
        goto LABEL_12;
      do
      {
        v7 = *(unsigned int *)(*((_QWORD *)v10 + 11) + 24LL);
        v11 = v9 + 1;
        if ( (_DWORD)v7 != (_DWORD)v3 )
          v11 = v9;
        v9 = v11;
        v12 = (char *)*((_QWORD *)v10 + 1);
        v10 = v12 - 8;
        if ( v12 == v8 )
          v10 = 0LL;
      }
      while ( v10 );
      if ( v9 )
      {
        *a3 = v9;
        return 0LL;
      }
      else
      {
LABEL_12:
        v14 = WdLogNewEntry5_WdTrace(v7, v9, v8, v10);
        *(_QWORD *)(v14 + 24) = v3;
        *(_QWORD *)(v14 + 32) = this;
        return 3223192377LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      return 3223192324LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a2);
    return 3221225485LL;
  }
}
