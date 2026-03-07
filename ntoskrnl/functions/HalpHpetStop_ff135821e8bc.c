__int64 __fastcall HalpHpetStop(int *a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = a1[8] & 0xFFFFFFFB;
  *(_DWORD *)(32 * (*a1 + 8LL) + HalpHpetBaseAddress) = result;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  a1[2] = 0;
  a1[8] = result;
  return result;
}
