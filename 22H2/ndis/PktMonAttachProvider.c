/*
 * XREFs of PktMonAttachProvider @ 0x1C00C7160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonAttachProvider(HANDLE NmrBindingHandle, PVOID ClientBindingContext)
{
  unsigned int v4; // ebx
  PVOID ProviderBindingContext; // [rsp+58h] [rbp+20h] BYREF

  ProviderBindingContext = 0LL;
  if ( *((_QWORD *)&xmmword_1C00E4FE8 + 1) )
  {
    v4 = -1073741127;
  }
  else
  {
    if ( RunRefCacheAware )
    {
      ExReInitializeRundownProtectionCacheAware(RunRefCacheAware);
    }
    else
    {
      RunRefCacheAware = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x72644D50u);
      if ( !RunRefCacheAware )
        return (unsigned int)-1073741801;
    }
    v4 = NmrClientAttachProvider(
           NmrBindingHandle,
           ClientBindingContext,
           &PktMonClientDispatch,
           &ProviderBindingContext,
           (const void **)&xmmword_1C00E4FE8 + 1);
    if ( !v4 )
    {
      KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
      *(_QWORD *)&xmmword_1C00E4FE8 = ProviderBindingContext;
      ((void (*)(void))qword_1C00E4FD8)();
      KeReleaseMutex(&PktMonCompMutex, 0);
      return v4;
    }
  }
  if ( RunRefCacheAware )
  {
    ExFreeCacheAwareRundownProtection(RunRefCacheAware);
    RunRefCacheAware = 0LL;
  }
  return v4;
}
