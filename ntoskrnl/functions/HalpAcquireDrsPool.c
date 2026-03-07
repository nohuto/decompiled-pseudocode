__int64 HalpAcquireDrsPool()
{
  __int64 result; // rax
  volatile signed __int32 *v1; // rcx
  __int64 v2; // rdx

  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0LL;
    do
    {
      v1 = (volatile signed __int32 *)((char *)&WheapDrsPoolEntries + 80 * v2);
      if ( !_InterlockedCompareExchange(v1, 1, 0) )
        break;
      v1 = 0LL;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < 0x20 );
  }
  else
  {
    result = ExAllocatePool2(256LL, 80LL, 1634035799LL);
    v1 = (volatile signed __int32 *)result;
    if ( !result )
      return result;
    *(_OWORD *)(result + 8) = 0LL;
    *(_OWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 40) = 0LL;
    *(_QWORD *)(result + 24) = HalpErrorDeferredHandler;
    *(_BYTE *)(result + 32) = 0;
    *(_DWORD *)result = -1;
  }
  return (__int64)v1;
}
