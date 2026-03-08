/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x1C0090C60
 * Callers:
 *     RIMIsCurrentProcessTrusted @ 0x1C0032680 (RIMIsCurrentProcessTrusted.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00909F4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     AllocateWindowManagerSid @ 0x1C00692F0 (AllocateWindowManagerSid.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int WindowManagerSid; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  WindowManagerSid = AllocateWindowManagerSid((__int64 *)&v3);
  if ( WindowManagerSid >= 0 )
  {
    WindowManagerSid = RtlCheckTokenMembership(0LL, v3, &v2);
    if ( WindowManagerSid >= 0 && !v2 )
      WindowManagerSid = -1073741720;
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
  return (unsigned int)WindowManagerSid;
}
