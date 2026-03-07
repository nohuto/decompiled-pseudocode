__int64 __fastcall sub_14004E430(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(*(_QWORD *)(result + 8) + 5412LL) = *(_DWORD *)(a1 + 72);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
