/*
 * XREFs of GreCancelDC @ 0x1C02AC7D8
 * Callers:
 *     NtGdiCancelDC @ 0x1C02C4760 (NtGdiCancelDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreCancelDC(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  GreAcquireHmgrSemaphore();
  v10 = 0;
  v2 = 1;
  v11 = 0;
  LOBYTE(v3) = 1;
  v4 = (__int64 *)HmgShareLockCheck(a1, v3);
  v9 = v4;
  if ( v4 )
  {
    v7 = v4[62];
    if ( v7 )
      *(_DWORD *)(v7 + 112) |= 0x40000000u;
    XDCOBJ::vAltUnlockFast(&v9);
  }
  else
  {
    v2 = 0;
  }
  GreReleaseHmgrSemaphore(v6, v5);
  return v2;
}
