__int64 __fastcall RtlDestroyLowBoxAtoms(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD **i; // r14
  _QWORD *v7; // rsi
  _QWORD *j; // rdi
  __int64 v9; // r13
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  result = RtlpLockAtomTable();
  if ( (_BYTE)result )
  {
    v5 = 0;
    for ( i = (_QWORD **)(a1 + 32); v5 < *(_DWORD *)(a1 + 28); ++v5 )
    {
      v7 = *i++;
      while ( 1 )
      {
        v9 = (__int64)v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        for ( j = *(_QWORD **)(v9 + 16); j != (_QWORD *)(v9 + 16); j = (_QWORD *)*j )
        {
          v10 = j;
          if ( *((_DWORD *)j + 4) == a2 )
          {
            v11 = (_QWORD *)*j;
            v12 = (_QWORD *)j[1];
            j = v12;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
              __fastfail(3u);
            *v12 = v11;
            v11[1] = v12;
            RtlpFreeAtom(v10);
            if ( RtlpDereferenceAtom(v9, (__int64 *)(v9 + 16), a1) )
              break;
          }
        }
      }
    }
    return RtlpUnlockAtomTable(a1);
  }
  return result;
}
