/*
 * XREFs of ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x1C0359ED8
 * Callers:
 *     ?RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0359E64 (-RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0ppqqqqqqPR7_EtwWriteTransfer @ 0x1C0058FC8 (McTemplateK0ppqqqqqqPR7_EtwWriteTransfer.c)
 *     ?ReportState@TrackedWorkloadMonitor@@QEAAXXZ @ 0x1C035A0A0 (-ReportState@TrackedWorkloadMonitor@@QEAAXXZ.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C035A2E8 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::ReportState(DXGTRACKEDWORKLOAD *this, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edi
  int v7; // edi
  unsigned int v8; // edi
  const EVENT_DESCRIPTOR *v9; // rdx
  _BYTE v10[8]; // [rsp+60h] [rbp-238h] BYREF
  DXGPUSHLOCK *v11; // [rsp+68h] [rbp-230h]
  int v12; // [rsp+70h] [rbp-228h]
  _BYTE v13[512]; // [rsp+80h] [rbp-218h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = a2 - 444;
  if ( !v6 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_17;
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v13, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventCreateTrackedWorkload;
    goto LABEL_16;
  }
  v7 = v6 - 37;
  if ( !v7 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_17;
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v13, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventReportTrackedWorkload;
    goto LABEL_16;
  }
  if ( v7 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v13, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventDestroyTrackedWorkload;
LABEL_16:
    McTemplateK0ppqqqqqqPR7_EtwWriteTransfer(
      v4,
      v9,
      v5,
      this,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 20),
      *((_DWORD *)this + 286),
      *((_DWORD *)this + 287),
      *((_DWORD *)this + 288),
      *((_DWORD *)this + 26),
      v8,
      v13);
  }
LABEL_17:
  if ( (qword_1C013A870 & 0x10000000) != 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v11);
    v12 = 2;
    TrackedWorkloadMonitor::ReportState((DXGTRACKEDWORKLOAD *)((char *)this + 328));
    DXGTRACKEDWORKLOAD::ReportStats(this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
  DXGGLOBAL::GetGlobal();
}
