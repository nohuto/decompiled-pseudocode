/*
 * XREFs of ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C035A3D0
 * Callers:
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C035B4F0 (NtDxgkResetTrackedWorkloadStatistics.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(struct _KTHREAD **this, struct DXGDEVICE *a2)
{
  unsigned int i; // ecx
  __int64 v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v4 = (__int64)this[4] + 136 * i;
    if ( *(_BYTE *)(v4 + 32) )
      *(_BYTE *)(v4 + 120) = 0;
  }
  *((_DWORD *)this + 48) = 0;
  this[25] = (struct _KTHREAD *)0x7FEFFFFFFFFFFFFFLL;
  this[27] = 0LL;
  this[26] = (struct _KTHREAD *)0xFFEFFFFFFFFFFFFFLL;
  this[28] = 0LL;
  this[38] = 0LL;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return 0LL;
}
