/*
 * XREFs of GreMarkDCUnreadable @ 0x1C0010A28
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreMarkDCUnreadable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v7 = 0;
  v8 = 0;
  LOBYTE(a2) = 1;
  v2 = HmgShareLockEx(a1, a2, 0LL);
  v6 = v2;
  GreAcquireHmgrSemaphore(v3);
  if ( v2 )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 496) + 112LL) |= 0x10000000u;
    v4 = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v4 + 172) |= 0x10000000u;
    *(_DWORD *)(v4 + 180) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v6);
  }
  return GreReleaseHmgrSemaphore();
}
