__int64 __fastcall sub_1400ACA00(__int64 a1)
{
  __int64 Pool2; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 32LL, 1685091442LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)Pool2 = &off_1400D7C98;
    *(_QWORD *)(Pool2 + 8) = 0xA5A5A5A5A5000056uLL;
    *(_BYTE *)(Pool2 + 24) = 0;
  }
  *(_QWORD *)(a1 + 16) = Pool2;
  return a1;
}
