__int64 __fastcall sub_1400A3560(__int64 a1)
{
  _QWORD *Pool2; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 144LL, 1685091442LL);
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    *Pool2 = off_1400D48C8;
    Pool2[1] = 0xA5A5A5A5A5000030uLL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    Pool2[5] = 0LL;
    Pool2[6] = 0LL;
    Pool2[7] = 0LL;
    Pool2[8] = 0LL;
    Pool2[9] = 0LL;
    Pool2[10] = 0LL;
    Pool2[11] = 0LL;
    Pool2[12] = 0LL;
    Pool2[13] = 0LL;
    Pool2[14] = 0LL;
    Pool2[15] = 0LL;
    Pool2[16] = 0LL;
    Pool2[17] = 0LL;
  }
  else
  {
    Pool2 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = Pool2;
  return a1;
}
