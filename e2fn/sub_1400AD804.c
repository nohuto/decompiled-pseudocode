__int64 __fastcall sub_1400AD804(__int64 a1, int a2, __int64 (__fastcall ***a3)(PVOID P), __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD *Pool2; // rax
  __int64 result; // rax

  v5 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 552LL, 1685091442LL);
  if ( Pool2 )
    v5 = sub_14006171C(Pool2, a2, a3, a4, a5);
  result = a1;
  *(_QWORD *)(a1 + 16) = v5;
  return result;
}
