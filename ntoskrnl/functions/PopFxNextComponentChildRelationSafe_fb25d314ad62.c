char __fastcall PopFxNextComponentChildRelationSafe(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  _QWORD *v4; // rbp
  _QWORD **v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v3 = 0;
  v4 = (_QWORD *)(a1 + 440);
  if ( a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(a2 + 8));
    v7 = (_QWORD **)(a2 + 32);
  }
  else
  {
    v7 = (_QWORD **)(a1 + 440);
  }
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v4 )
      break;
    v10 = v8 - 4;
    KxAcquireSpinLock(v8 - 3);
    if ( (*(_DWORD *)(v8 - 2) & 8) != 0 )
    {
      *a3 = v10;
      return 1;
    }
    KxReleaseSpinLock(v10 + 1);
    *((_DWORD *)v10 + 4) &= ~4u;
    v10[3] = 0LL;
    v11 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExFreePoolWithTag(v8 - 4, 0x4D584650u);
  }
  return v3;
}
