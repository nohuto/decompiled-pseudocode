__int64 __fastcall sub_1400A4F90(__int64 a1, int a2, int *a3)
{
  _QWORD *v3; // rdi
  _QWORD *Pool2; // rax
  __int64 result; // rax

  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 664LL, 1685091442LL);
  if ( Pool2 )
    v3 = sub_140017DA0(Pool2, a2, *a3);
  result = a1;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
