__int64 __fastcall PsApplyDeepFreezeOptimizations(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  int ProcessSessionId; // [rsp+38h] [rbp+10h] BYREF

  result = *a2;
  if ( (result & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      return PsInvokeWin32Callout(44LL, a1, 0LL, &ProcessSessionId);
    }
  }
  return result;
}
