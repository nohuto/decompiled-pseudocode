__int64 __fastcall sub_14007C1CC(__int64 a1, int a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 8LL);
  *(_DWORD *)(*(unsigned int *)(a1 + 368) + result) = a2;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
