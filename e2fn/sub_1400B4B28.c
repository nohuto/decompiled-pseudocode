__int64 __fastcall sub_1400B4B28(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D9DF8;
  Pool2 = ExAllocatePool2(64LL, 80LL, 1685091442LL);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    sub_1400B6C40(Pool2, 0LL, 80LL);
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
    v3[9] = 0LL;
    v3[2] = off_1400D4BE0;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return a1;
}
