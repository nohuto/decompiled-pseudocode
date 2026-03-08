/*
 * XREFs of ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1C00DC7D0
 * Callers:
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0072910 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage @ 0x1C00DC8A4 (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage.c)
 */

struct tagWND *__fastcall tagQ::SetActiveWindow(tagQ *this, struct tagWND *a2)
{
  __int64 v4; // rdx
  __int64 i; // rcx
  __int64 *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage() )
  {
    if ( a2 )
      v4 = *(_QWORD *)a2;
    else
      v4 = 0LL;
    for ( i = *((_QWORD *)this + 60); i; i = *(_QWORD *)(i + 1528) )
      *(_QWORD *)(*(_QWORD *)(i + 448) + 40LL) = v4;
  }
  if ( !a2 )
    return (struct tagWND *)HMAssignmentUnlock((__int64 *)this + 16);
  v7[0] = (__int64 *)((char *)this + 128);
  v7[1] = (__int64 *)a2;
  return (struct tagWND *)HMAssignmentLock(v7, 0);
}
