/*
 * XREFs of UserDeleteW32Process @ 0x1C0017780
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

ReEnterLeaveCrit *__fastcall UserDeleteW32Process(struct _RTL_BITMAP *a1)
{
  ReEnterLeaveCrit *result; // rax
  PULONG v3; // rdx
  struct _RTL_BITMAP **v4; // rcx
  void **Buffer; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  if ( !LODWORD(a1->Buffer) )
  {
    if ( *(&a1[65].SizeOfBitMap + 1) )
    {
      v4 = *(struct _RTL_BITMAP ***)&a1[66].SizeOfBitMap;
      if ( v4[1] != &a1[66] || (Buffer = (void **)a1[66].Buffer, *Buffer != &a1[66]) )
        __fastfail(3u);
      *Buffer = v4;
      v4[1] = (struct _RTL_BITMAP *)Buffer;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v3 = a1[45].Buffer;
    if ( v3 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v3);
      RtlInitializeBitMap(a1 + 45, 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)&a1->SizeOfBitMap, 0LL, a1);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a1);
    result = (ReEnterLeaveCrit *)ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v6 )
    return (ReEnterLeaveCrit *)UserSessionSwitchLeaveCrit();
  return result;
}
