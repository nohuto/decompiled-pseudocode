/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FD30
 * Callers:
 *     RmAccessCheck @ 0x180010140 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x180010180 (RmAccessCheckOnSelf.c)
 *     RmAcquireResources @ 0x1800101B0 (RmAcquireResources.c)
 *     RmAvailabilityCheck @ 0x180010270 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x1800102F0 (RmGetNotification.c)
 *     RmRegisterResource @ 0x180010340 (RmRegisterResource.c)
 *     RmReleaseResources @ 0x1800103A0 (RmReleaseResources.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x18000FC7C (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_180024788;
  if ( qword_180024788 )
    goto LABEL_4;
  ResourceManagerProxy = CreateResourceManagerProxy();
  if ( ResourceManagerProxy >= 0 )
  {
    v2 = (struct ResourceManagerProxy *)qword_180024788;
LABEL_4:
    *a1 = v2;
    ResourceManagerProxy = 0;
  }
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
