__int64 __fastcall sub_1400ABF50(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 result; // rax

  v2 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 376LL, 1685091442LL);
  if ( Pool2 )
    v2 = sub_1400646E8(Pool2, a2);
  result = a1;
  *(_QWORD *)(a1 + 16) = v2;
  return result;
}
