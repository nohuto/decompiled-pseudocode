void __fastcall CcDeleteNumaNode(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD **v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 4) == 1 )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3 + 112) = 0LL;
  else
    *(_QWORD *)(v1 + 8 * v3 + 64) = 0LL;
  v4 = (_QWORD **)(a1 + 56);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
LABEL_19:
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    ExFreePoolWithTag(v5, 0x71576343u);
  }
  v7 = (_QWORD **)(a1 + 136);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 )
      goto LABEL_19;
    v9 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_19;
    *v7 = v9;
    v9[1] = v7;
    ExFreePoolWithTag(v8, 0x71576343u);
  }
  v10 = (_QWORD **)(a1 + 160);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == v10 )
      break;
    if ( (_QWORD **)v11[1] != v10 )
      goto LABEL_19;
    v12 = (_QWORD *)*v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_19;
    *v10 = v12;
    v12[1] = v10;
    ExFreePoolWithTag(v11, 0x71576343u);
  }
}
