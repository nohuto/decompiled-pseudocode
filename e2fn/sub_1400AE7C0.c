__int64 __fastcall sub_1400AE7C0(__int64 a1, int a2, int *a3, unsigned int *a4)
{
  __int64 v4; // rdi
  __int64 Pool2; // rax
  __int64 result; // rax

  v4 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 488LL, 1685091442LL);
  if ( Pool2 )
    v4 = sub_14006C3B8(Pool2, a2, *a3, *a4);
  result = a1;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
