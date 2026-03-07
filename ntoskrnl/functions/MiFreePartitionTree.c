__int64 __fastcall MiFreePartitionTree(__int16 *a1, unsigned __int64 *a2, int a3, int a4)
{
  unsigned __int64 *v4; // rdi
  bool v5; // bl
  int v6; // ebp
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  v4 = (unsigned __int64 *)*a2;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4 )
      return (unsigned int)v6;
    RtlAvlRemoveNode(a2, v4);
    if ( a4 )
    {
      v6 = MiFreePartitionNodePages(a1, (__int64)v4, a3);
      if ( v6 < 0 )
        break;
    }
    MiDeletePartitionPageNode((PVOID *)v4);
    v4 = (unsigned __int64 *)*a2;
  }
  v11 = (_QWORD *)*a2;
  if ( !*a2 )
    goto LABEL_14;
  while ( (v4[3] & 0x3FFFFFFFFFFFFFFFLL) < (v11[3] & 0x3FFFFFFFFFFFFFFFuLL) )
  {
    v12 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_14;
LABEL_12:
    v11 = v12;
  }
  v12 = (_QWORD *)v11[1];
  if ( v12 )
    goto LABEL_12;
  v5 = 1;
LABEL_14:
  RtlAvlInsertNodeEx(a2, (unsigned __int64)v11, v5, (unsigned __int64)v4);
  return (unsigned int)v6;
}
