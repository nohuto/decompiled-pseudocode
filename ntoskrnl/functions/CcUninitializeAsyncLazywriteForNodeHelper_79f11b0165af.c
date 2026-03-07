char __fastcall CcUninitializeAsyncLazywriteForNodeHelper(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rbx
  _QWORD *v5; // rcx
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax

  v4 = (_QWORD **)(a3 + 288);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v9 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
LABEL_12:
      __fastfail(3u);
    *v4 = v9;
    v9[1] = v4;
    ExFreePoolWithTag(v5, 0x71576343u);
  }
  v6 = (_QWORD **)(a3 + 400);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      return 1;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_12;
    v10 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_12;
    *v6 = v10;
    v10[1] = v6;
    ExFreePoolWithTag(v7, 0x71576343u);
  }
}
