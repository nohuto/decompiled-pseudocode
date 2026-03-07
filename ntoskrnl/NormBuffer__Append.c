char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  _WORD **v2; // r9
  _QWORD *v3; // r10
  _WORD *v4; // rcx
  _WORD *v5; // rax

  v2 = (_WORD **)(a1 + 40);
  v3 = (_QWORD *)(a1 + 32);
  if ( a2 >= 0x10000 )
  {
    v4 = *v2;
    if ( (unsigned __int64)*v2 >= *v3 )
      return 0;
    *v4 = (a2 - 0x10000) / 1024 - 10240;
    *v2 = v4 + 1;
    LOWORD(a2) = (a2 - 0x10000) % 1024 - 9216;
  }
  v5 = *v2;
  if ( (unsigned __int64)*v2 >= *v3 )
    return 0;
  *v5 = a2;
  *v2 = v5 + 1;
  return 1;
}
