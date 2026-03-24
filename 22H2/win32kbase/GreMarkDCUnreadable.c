/*
 * XREFs of GreMarkDCUnreadable @ 0x1C00B7148
 * Callers:
 *     InitUserScreen @ 0x1C006B23C (InitUserScreen.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E6D8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C002EA50 (HmgShareLockEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreMarkDCUnreadable(unsigned int a1)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
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
    *(_DWORD *)(v8 + 180) |= 0x10000000u;
    *(_DWORD *)(v8 + 188) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast(&v10);
  }
  return GreReleaseHmgrSemaphore(v6, v5, v7);
}
