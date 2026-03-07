__int64 __fastcall sub_1400A96A0(__int64 a1)
{
  _QWORD *Pool2; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D64D0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1685091442LL);
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    Pool2[5] = 0LL;
    Pool2[6] = 0LL;
    Pool2[7] = 0LL;
    Pool2[8] = 0LL;
    Pool2[9] = 0LL;
  }
  else
  {
    Pool2 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = Pool2;
  return a1;
}
