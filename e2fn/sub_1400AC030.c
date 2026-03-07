__int64 __fastcall sub_1400AC030(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 Pool2; // rax
  __int64 result; // rax

  v2 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 544LL, 1685091442LL);
  if ( Pool2 )
    v2 = sub_140064FA0(Pool2, a2);
  result = a1;
  *(_QWORD *)(a1 + 16) = v2;
  return result;
}
