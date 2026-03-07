__int64 __fastcall sub_1400E6668(__int64 a1)
{
  _QWORD *Pool2; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 56LL, 1600743026LL);
  if ( Pool2 )
  {
    Pool2[1] = 0LL;
    *Pool2 = 0xA5A5A5A5A500009DuLL;
    Pool2[2] = 0LL;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    Pool2[5] = 0LL;
    Pool2[6] = 0LL;
    P = Pool2;
    return sub_1400E66DC(Pool2, a1);
  }
  else
  {
    P = 0LL;
    return 3221225495LL;
  }
}
