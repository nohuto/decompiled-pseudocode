__int64 __fastcall sub_1400A367C(__int64 a1)
{
  _QWORD *Pool2; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1685091442LL);
  if ( Pool2 )
  {
    *Pool2 = &off_1400D49D8;
    Pool2[1] = 0xA5A5A5A5A50000A2uLL;
  }
  *(_QWORD *)(a1 + 16) = Pool2;
  return a1;
}
