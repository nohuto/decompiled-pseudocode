volatile signed __int32 *__fastcall PspInheritQuota(__int64 a1, __int64 a2)
{
  volatile signed __int32 *result; // rax

  if ( a2 )
    result = *(volatile signed __int32 **)(a2 + 1384);
  else
    result = (volatile signed __int32 *)&PspSystemQuotaBlock;
  _InterlockedIncrement(result + 128);
  _InterlockedIncrement(result + 129);
  *(_QWORD *)(a1 + 1384) = result;
  return result;
}
