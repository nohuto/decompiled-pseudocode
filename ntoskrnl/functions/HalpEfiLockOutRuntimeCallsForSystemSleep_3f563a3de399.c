__int64 __fastcall HalpEfiLockOutRuntimeCallsForSystemSleep(char a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx

  result = HalQueryMaximumProcessorCount();
  if ( (_DWORD)result )
  {
    v3 = 0LL;
    v4 = (unsigned int)result;
    do
    {
      result = HalpInterruptProcessorPcr;
      v5 = *(_QWORD *)(v3 + HalpInterruptProcessorPcr);
      if ( v5 )
      {
        if ( a1 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v5 + 224), 0x7FFFFFFFu);
        }
        else
        {
          _m_prefetchw((const void *)(v5 + 224));
          for ( result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v5 + 224), 0x80000000);
                (result & 0x1FF) != 0;
                result = *(unsigned int *)(v5 + 224) )
          {
            _mm_pause();
          }
        }
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
