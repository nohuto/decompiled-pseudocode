__int64 __fastcall sub_1400B1248(__int64 a1)
{
  _DWORD *Pool2; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D9850;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1685091442LL);
  if ( Pool2 )
  {
    *Pool2 = 0;
    Pool2[1] = 2;
    Pool2[2] = 3;
    Pool2[3] = 1;
  }
  *(_QWORD *)(a1 + 16) = Pool2;
  return a1;
}
