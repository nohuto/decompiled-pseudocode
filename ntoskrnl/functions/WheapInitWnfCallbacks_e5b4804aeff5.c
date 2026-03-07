__int64 WheapInitWnfCallbacks()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  qword_140C2A4A8 = 0LL;
  WheapOfflineChecker = 0LL;
  result = ExSubscribeWnfStateChange(
             (__int64)&v1,
             (__int64)&WNF_MM_BAD_MEMORY_QUARANTINED,
             1,
             0,
             (__int64)WheapProcessOfflineList,
             0LL);
  if ( (int)result >= 0 )
  {
    result = v1;
    qword_140C2A4B8 = v1;
  }
  return result;
}
