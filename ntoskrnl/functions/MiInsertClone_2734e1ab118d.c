char __fastcall MiInsertClone(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v4 = 0;
  if ( (_DWORD)a3 )
    MiDeleteCloneZombies(a1, 1LL, a3, a4);
  v7 = *(_QWORD **)(a1 + 1264);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 24) > v7[4] || *(_QWORD *)(a2 + 32) >= v7[3] )
      {
        v8 = (_QWORD *)v7[1];
        if ( !v8 )
        {
          v4 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v7, v4, a2);
        }
      }
      else
      {
        v8 = (_QWORD *)*v7;
        if ( !*v7 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v7, v4, a2);
      }
      v7 = v8;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v7, v4, a2);
}
