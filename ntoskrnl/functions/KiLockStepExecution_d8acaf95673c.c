__int64 __fastcall KiLockStepExecution(__int64 a1)
{
  volatile signed __int32 *v1; // r8
  volatile signed __int32 v2; // edx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 16);
  if ( KeGetCurrentPrcb()->Number == *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)result == *(_DWORD *)(a1 + 4) )
        break;
      _mm_pause();
    }
    *(_DWORD *)(a1 + 8) = 0;
    _InterlockedIncrement(v1);
  }
  else
  {
    v2 = *v1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    while ( 1 )
    {
      result = *(unsigned int *)v1;
      if ( (_DWORD)result != v2 )
        break;
      _mm_pause();
    }
  }
  return result;
}
