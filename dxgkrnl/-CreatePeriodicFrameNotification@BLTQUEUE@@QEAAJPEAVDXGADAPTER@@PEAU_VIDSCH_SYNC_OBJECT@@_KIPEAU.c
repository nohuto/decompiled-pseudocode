/*
 * XREFs of ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C03CC7DC
 * Callers:
 *     ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C03CCA48 (-CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall BLTQUEUE::CreatePeriodicFrameNotification(
        struct _KTHREAD **this,
        struct DXGADAPTER *a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a6,
        unsigned __int64 *a7)
{
  unsigned int v10; // ebx
  __int64 FenceValueCPUVirtualAddress; // rbp
  const wchar_t *v12; // r9
  int v13; // edi
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned int v16; // edi
  unsigned __int64 v17; // rsi
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  struct _KTHREAD *v20; // rcx
  _BYTE v22[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+58h] [rbp-30h]
  int v24; // [rsp+60h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, this + 358, 0);
  v10 = 0;
  *a7 = 0LL;
  if ( !this[362] )
  {
    FenceValueCPUVirtualAddress = 3628LL;
    WdLogSingleEntry1(2LL, 3628LL);
    v12 = L"BltQueue ran out of unique bits for periodic monitored fence ID assignment";
    v13 = -1073741801;
LABEL_14:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, FenceValueCPUVirtualAddress, 0LL, 0LL, 0LL, 0LL);
    v10 = v13;
    goto LABEL_15;
  }
  FenceValueCPUVirtualAddress = (__int64)a6->MonitoredFence.FenceValueCPUVirtualAddress;
  if ( FenceValueCPUVirtualAddress < 0
    || FenceValueCPUVirtualAddress > (unsigned int)(10000000 * *((_DWORD *)this + 93)) / *((_DWORD *)this + 92) )
  {
    WdLogSingleEntry1(2LL, a6->PeriodicMonitoredFence.Time);
    v12 = L"Failed to create DOD periodic frame notification, invalid offset: %lld";
    v13 = -1073741811;
    goto LABEL_14;
  }
  DXGPUSHLOCK::AcquireExclusive(v23);
  v14 = 0LL;
  v15 = (_QWORD *)((char *)this[364] + 48);
  v24 = 2;
  while ( *v15 )
  {
    ++v14;
    v15 += 8;
    if ( v14 >= 8 )
      goto LABEL_8;
  }
  v17 = v14 << 6;
  *(_QWORD *)((char *)this[364] + v17) = ExAllocateTimer(0LL, 0LL, 4LL);
  v18 = this[364];
  if ( !*(_QWORD *)((char *)v18 + v17) )
  {
LABEL_8:
    WdLogSingleEntry1(2LL, 3672LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate DOD periodic frame notification",
      3672LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v16 = -1073741801;
    goto LABEL_16;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)((char *)v18 + v17 + 16), a2);
  v19 = 0LL;
  *(_QWORD *)((char *)this[364] + v17 + 8) = a3;
  *(_QWORD *)((char *)this[364] + v17 + 32) = FenceValueCPUVirtualAddress;
  *(_QWORD *)((char *)this[364] + v17 + 40) = 0LL;
  v20 = this[362];
  this[362] = (struct _KTHREAD *)((char *)v20 + 1);
  *(_QWORD *)((char *)this[364] + v17 + 48) = v20;
  do
    *((_BYTE *)this[364] + v17 + v19++ + 56) = 0;
  while ( v19 < 2 );
  ++*((_DWORD *)this + 726);
  *a7 = *(_QWORD *)((char *)this[364] + v17 + 48);
LABEL_15:
  v16 = v10;
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v16;
}
