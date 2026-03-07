char __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Lower_bound_duplicate<std::wstring>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  char v7; // cl
  unsigned __int16 v8; // dx
  signed __int64 v9; // r8
  bool v10; // cc
  unsigned __int16 v11; // dx
  int v12; // eax

  if ( *(_BYTE *)(a2 + 25) )
    return 0;
  v3 = (_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 56) >= 8uLL )
    v3 = (_QWORD *)*v3;
  v5 = *((_QWORD *)a3 + 2);
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    a3 = *(char **)a3;
  v6 = v5;
  v7 = 1;
  if ( v4 < v5 )
    v6 = *(_QWORD *)(a2 + 48);
  if ( !v6 )
  {
LABEL_19:
    if ( v5 >= v4 )
    {
      v12 = v5 > v4;
      goto LABEL_15;
    }
LABEL_14:
    v12 = -1;
    goto LABEL_15;
  }
  v8 = *(_WORD *)a3;
  if ( *(_WORD *)a3 < *(_WORD *)v3 )
    goto LABEL_14;
  v9 = a3 - (char *)v3;
  v10 = v8 <= *(_WORD *)v3;
  while ( v10 )
  {
    if ( v6 == 1 )
      goto LABEL_19;
    v3 = (_QWORD *)((char *)v3 + 2);
    --v6;
    v11 = *(_WORD *)((char *)v3 + v9);
    v10 = v11 <= *(_WORD *)v3;
    if ( v11 < *(_WORD *)v3 )
      goto LABEL_14;
  }
  v12 = 1;
LABEL_15:
  if ( v12 < 0 )
    return 0;
  return v7;
}
