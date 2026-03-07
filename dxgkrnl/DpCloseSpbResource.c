__int64 __fastcall DpCloseSpbResource(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  result = DpiValidateSpbResource(a1, a2, (unsigned int)DpCloseSpbResource, 1, (__int64)&v4);
  if ( (int)result >= 0 )
  {
    v3 = v4;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFF) == 1 )
      DpiDeleteSpbResourceRecord(v3, v4);
    return 0LL;
  }
  return result;
}
