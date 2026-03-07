__int64 __fastcall SetWaitForQueueAttach(int a1)
{
  __int64 result; // rax

  if ( (a1 != 0) != a1 )
    return 0LL;
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1272LL) ^= (*(_DWORD *)(gptiCurrent + 1272LL) ^ (a1 << 10)) & 0x400;
  return result;
}
