/*
 * XREFs of GreMarkDCUnreadable @ 0x1C00C2748
 * Callers:
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0041CB0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreMarkDCUnreadable(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  HDC *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v7 = 0;
  v8 = 0;
  v1 = HmgShareLockEx(a1, 1, 0);
  v6 = (HDC *)v1;
  GreAcquireHmgrSemaphore(v2);
  if ( v1 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 496) + 112LL) |= 0x10000000u;
    v4 = *(_QWORD *)(v1 + 48);
    *(_DWORD *)(v4 + 172) |= 0x10000000u;
    *(_DWORD *)(v4 + 180) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast(&v6);
  }
  return GreReleaseHmgrSemaphore(v3);
}
