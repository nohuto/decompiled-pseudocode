char __fastcall MiInsertExtentList(unsigned int *a1)
{
  __int64 v1; // rax
  unsigned int v3; // esi
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  _QWORD *BugCheckParameter4; // rdx
  bool v8; // r8
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax

  v1 = (int)a1[1];
  v3 = 0;
  v4 = (unsigned __int64 *)((char *)&unk_140C65518 + 8 * v1);
  v5 = (unsigned __int64)(a1 + 2);
  if ( !*a1 )
    return v1;
  do
  {
    v6 = *(_QWORD *)(v5 + 32);
    LOBYTE(v1) = 0;
    if ( v6 == 0x8000000000000000uLL )
      goto LABEL_12;
    BugCheckParameter4 = (_QWORD *)*v4;
    v8 = 0;
    if ( !*v4 )
      goto LABEL_11;
    while ( 1 )
    {
      v9 = BugCheckParameter4[4];
      if ( v6 + *(_QWORD *)(v5 + 40) > v9 )
        break;
      v10 = (_QWORD *)*BugCheckParameter4;
      if ( !*BugCheckParameter4 )
      {
        v8 = 0;
        goto LABEL_11;
      }
LABEL_9:
      BugCheckParameter4 = v10;
    }
    if ( v6 < BugCheckParameter4[5] + v9 )
      KeBugCheckEx(0x1Au, 0x13003uLL, *(_QWORD *)(v5 + 32), *(_QWORD *)(v5 + 40), (ULONG_PTR)BugCheckParameter4);
    v10 = (_QWORD *)BugCheckParameter4[1];
    if ( v10 )
      goto LABEL_9;
    v8 = 1;
LABEL_11:
    LOBYTE(v1) = RtlAvlInsertNodeEx(v4, (unsigned __int64)BugCheckParameter4, v8, v5);
LABEL_12:
    ++v3;
    v5 += 48LL;
  }
  while ( v3 < *a1 );
  return v1;
}
