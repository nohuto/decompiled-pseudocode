__int64 __fastcall sub_140054110(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr(
    (volatile signed __int32 *)(a1 + 4LL * *(unsigned int *)(a1 + 12LL * a2 + 20) + 184),
    128 << *(_DWORD *)(a1 + 12LL * a2 + 24));
  result = *(_QWORD *)(a1 + 152);
  *(_DWORD *)(dword_1400D76E0[*(unsigned int *)(a1 + 12LL * a2 + 20)] + *(_QWORD *)(result + 8)) = *(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 12LL * a2 + 20) + 184);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
