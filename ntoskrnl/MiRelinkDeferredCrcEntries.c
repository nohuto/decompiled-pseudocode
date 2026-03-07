_QWORD *__fastcall MiRelinkDeferredCrcEntries(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r15
  _QWORD **v5; // rdi
  unsigned int v6; // r12d
  __int64 v8; // r13
  unsigned int i; // esi
  _QWORD *v10; // rbx
  _QWORD *v12; // r14

  v4 = *(_QWORD *)a1;
  v5 = (_QWORD **)(a2 + 80);
  v6 = *(_DWORD *)(a1 + 140);
  v8 = *(_QWORD *)(a1 + 112);
  for ( i = 2; i <= 3; ++i )
  {
    v10 = *v5;
    if ( *v5 )
    {
      do
      {
        v12 = (_QWORD *)*v10;
        if ( (unsigned int)MiCrcStillIntact(v4, v8, v6, (__int64)v10, i) )
        {
          *v10 = a4;
          a4 = v10;
        }
        v10 = v12;
      }
      while ( v12 );
    }
    *v5 = 0LL;
    v5 += 5;
  }
  return a4;
}
