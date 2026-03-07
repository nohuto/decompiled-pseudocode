__int64 __fastcall PpmStartIllegalProcessorThrottleLogging(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 33848) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 33856) = 0;
  return result;
}
