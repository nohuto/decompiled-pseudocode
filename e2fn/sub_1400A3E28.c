_QWORD *__fastcall sub_1400A3E28(_QWORD *a1, unsigned int a2)
{
  __int64 Pool2; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rax

  Pool2 = ExAllocatePool2(64LL, 32LL, a2);
  v4 = Pool2;
  if ( !Pool2 )
    goto LABEL_6;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_DWORD *)(Pool2 + 8) = 1;
  *(_DWORD *)(Pool2 + 12) = 1;
  *(_QWORD *)Pool2 = off_1400D44C8;
  v5 = (_QWORD *)ExAllocatePool2(64LL, 120LL, 1685091442LL);
  if ( v5 )
    v5 = sub_14000D040(v5);
  *(_QWORD *)(v4 + 16) = v5;
  if ( v5 )
  {
    a1[1] = v4;
    *a1 = v5;
  }
  else
  {
LABEL_6:
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
