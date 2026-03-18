/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x1C0057840
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00594C8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     RIMIsCurrentProcessTrusted @ 0x1C005F0F0 (RIMIsCurrentProcessTrusted.c)
 * Callees:
 *     AllocateWindowManagerSid @ 0x1C0058EC0 (AllocateWindowManagerSid.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  v0 = AllocateWindowManagerSid(&v3);
  if ( v0 >= 0 )
  {
    v0 = RtlCheckTokenMembership(0LL, v3, &v2);
    if ( v0 >= 0 && !v2 )
      v0 = -1073741720;
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v3);
  }
  return (unsigned int)v0;
}
