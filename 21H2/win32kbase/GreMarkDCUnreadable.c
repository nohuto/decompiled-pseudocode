/*
 * XREFs of GreMarkDCUnreadable @ 0x1C00C4754
 * Callers:
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00205B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C0020870 (HmgShareLockEx.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall GreMarkDCUnreadable(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  HDC *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]

  v11 = 0;
  v12 = 0;
  v1 = HmgShareLockEx(a1, 1, 0);
  v10 = (HDC *)v1;
  GreAcquireHmgrSemaphore(v3, v2, v4);
  if ( v1 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 496) + 112LL) |= 0x10000000u;
    v8 = *(_QWORD *)(v1 + 48);
    *(_DWORD *)(v8 + 172) |= 0x10000000u;
    *(_DWORD *)(v8 + 180) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast(&v10);
  }
  return GreReleaseHmgrSemaphore(v6, v5, v7);
}
