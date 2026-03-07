__int64 __fastcall sub_1400B2E20(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 *a5)
{
  __int64 v5; // rdi
  __int64 Pool2; // rax
  __int64 result; // rax

  v5 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 104LL, 1685091442LL);
  if ( Pool2 )
    v5 = sub_14008B014(Pool2, a2, a3, *a4, *a5);
  result = a1;
  *(_QWORD *)(a1 + 16) = v5;
  return result;
}
