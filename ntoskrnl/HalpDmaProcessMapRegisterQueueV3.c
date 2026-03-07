__int64 *__fastcall HalpDmaProcessMapRegisterQueueV3(__int64 a1, char a2)
{
  __int64 *result; // rax
  __int64 v5; // rdx

  do
  {
    result = HalpDmaDequeueAdapter(a1, a2);
    if ( !result )
      break;
    LOBYTE(v5) = 1;
    result = (__int64 *)HalpAllocateDmaResourcesInternal(result, v5, 0LL);
  }
  while ( (_BYTE)result );
  return result;
}
