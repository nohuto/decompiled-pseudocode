/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00B3E50
 * Callers:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00170C8 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C011E928 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     HMAllocObject @ 0x1C0034080 (HMAllocObject.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 */

struct tagMONITOR *CreateMonitor(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx

  v0 = (_QWORD *)HMAllocObject(0LL, 0LL, 0xCu, 0x150u);
  v1 = v0;
  if ( v0 )
  {
    *(_DWORD *)(v0[5] + 28LL) = 0;
    *(_DWORD *)(v0[5] + 32LL) = 0;
    *(_DWORD *)(v0[5] + 36LL) = 0;
    *(_DWORD *)(v0[5] + 40LL) = 0;
    *(_DWORD *)(v0[5] + 44LL) = 0;
    *(_DWORD *)(v0[5] + 48LL) = 0;
    *(_DWORD *)(v0[5] + 52LL) = 0;
    *(_DWORD *)(v0[5] + 56LL) = 0;
    v0[37] = 0LL;
    v0[38] = 0LL;
  }
  else
  {
    UserSetLastError(8LL, 0LL);
  }
  return (struct tagMONITOR *)v1;
}
