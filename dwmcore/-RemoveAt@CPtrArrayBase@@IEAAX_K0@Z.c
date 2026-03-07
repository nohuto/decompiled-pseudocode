void __fastcall CPtrArrayBase::RemoveAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  HANDLE ProcessHeap; // rax

  v4 = *(_QWORD *)this;
  v5 = a3;
  if ( (v4 & 2) != 0 )
    v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v6 = v4 & 1;
  v7 = v4;
  if ( (v4 & 2) == 0 )
    v7 = v4;
  v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( a2 < v6 && a3 )
  {
    if ( a3 >= v6 - a2 )
      v5 = v6 - a2;
    if ( v6 == v5 )
    {
      if ( v6 > 1 )
        operator delete((void *)(v4 & 0xFFFFFFFFFFFFFFFCuLL));
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v9 = v6 - v5;
      if ( v9 == 1 )
      {
        v10 = v8[(v5 & (a2 - 1)) + 2];
        if ( v8 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v8);
        }
        *(_QWORD *)this = v10 | 1;
      }
      else
      {
        if ( a2 < v9 )
          memmove_0(&v8[a2 + 2], &v8[v5 + 2 + a2], 8 * (v9 - a2));
        *v8 = v9;
      }
    }
  }
}
