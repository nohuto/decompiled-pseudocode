void __fastcall MiDeletePartitionPageNodes(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 *i; // rbx
  unsigned __int64 **v4; // rax
  unsigned __int64 *v5; // rsi
  unsigned __int64 *v6; // rcx
  unsigned __int64 *v7; // rcx

  v1 = (unsigned __int64 *)*a1;
  i = 0LL;
  while ( v1 )
  {
    i = v1;
    v1 = (unsigned __int64 *)*v1;
  }
  while ( i )
  {
    v4 = (unsigned __int64 **)i[1];
    v5 = i;
    v6 = i;
    if ( v4 )
    {
      v7 = *v4;
      for ( i = (unsigned __int64 *)i[1]; v7; v7 = (unsigned __int64 *)*v7 )
        i = v7;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (unsigned __int64 *)*i == v6 )
          break;
        v6 = i;
      }
    }
    RtlAvlRemoveNode(a1, v5);
    MiDeletePartitionPageNode((PVOID *)v5);
  }
}
