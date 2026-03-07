__int64 __fastcall CmFcpManagerArmFeatureUsageRetryTimer(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 337) )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    result = ExSetTimer(*(_QWORD *)(a1 + 488), -600000000LL, 0LL, (__int64)v3);
    *(_BYTE *)(a1 + 337) = 1;
  }
  return result;
}
