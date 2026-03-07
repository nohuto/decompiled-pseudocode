__int64 __fastcall sub_1400A4C10(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *Pool2; // rax
  __int64 result; // rax

  v1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 440LL, 1685091442LL);
  if ( Pool2 )
    v1 = sub_14002FEC0(Pool2);
  result = a1;
  *(_QWORD *)(a1 + 16) = v1;
  return result;
}
