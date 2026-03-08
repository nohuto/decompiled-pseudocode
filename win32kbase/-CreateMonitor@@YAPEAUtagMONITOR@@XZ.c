/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0012210
 * Callers:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00121E8 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0014BB4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

struct tagMONITOR *__fastcall CreateMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  LOBYTE(a3) = 12;
  v3 = (_QWORD *)HMAllocObjectEx(0LL, 0LL, a3, 152LL, 0);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3[5] + 28LL) = 0;
    *(_DWORD *)(v3[5] + 32LL) = 0;
    *(_DWORD *)(v3[5] + 36LL) = 0;
    *(_DWORD *)(v3[5] + 40LL) = 0;
    *(_DWORD *)(v3[5] + 44LL) = 0;
    *(_DWORD *)(v3[5] + 48LL) = 0;
    *(_DWORD *)(v3[5] + 52LL) = 0;
    *(_DWORD *)(v3[5] + 56LL) = 0;
    v3[14] = 0LL;
    v3[15] = 0LL;
  }
  else
  {
    UserSetLastError(8LL);
  }
  return (struct tagMONITOR *)v4;
}
