__int64 __fastcall ExpSvmFaultRoutine(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = 104LL * a1;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v1 + ExpSvmWorkQueues + 96), 1, 0);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(v1 + ExpSvmWorkQueues + 32, 0LL, 0LL, 0LL, 0);
  return result;
}
