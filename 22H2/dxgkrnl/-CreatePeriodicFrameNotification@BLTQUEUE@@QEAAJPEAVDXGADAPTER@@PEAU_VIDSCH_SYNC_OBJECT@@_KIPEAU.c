/*
 * XREFs of ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C02FD344
 * Callers:
 *     ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C02FD550 (-CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  void *FenceValueCPUVirtualAddress; // rbp
  __int64 v15; // rdx
  __int64 Timer; // rcx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rax
  unsigned __int64 v19; // rsi
  struct _KTHREAD *v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  char v25[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+30h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, this + 356, 0);
  v12 = 0;
  *a7 = 0LL;
  if ( this[360] )
  {
    FenceValueCPUVirtualAddress = a6->MonitoredFence.FenceValueCPUVirtualAddress;
    if ( (__int64)FenceValueCPUVirtualAddress < 0
      || (v10 = (unsigned int)(10000000 * *((_DWORD *)this + 91)) % *((_DWORD *)this + 90),
          v11 = (unsigned int)(10000000 * *((_DWORD *)this + 91)) / *((_DWORD *)this + 90),
          (__int64)FenceValueCPUVirtualAddress > v11) )
    {
      v23 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v23 + 24) = FenceValueCPUVirtualAddress;
      WdLogEvent5_WdError(v23);
      v12 = -1073741811;
    }
    else
    {
      DXGPUSHLOCK::AcquireExclusive(v26);
      v17 = 0LL;
      v18 = (_QWORD *)((char *)this[362] + 48);
      v27 = 2;
      while ( *v18 )
      {
        ++v17;
        v18 += 8;
        if ( v17 >= 8 )
          goto LABEL_9;
      }
      v19 = v17 << 6;
      Timer = ExAllocateTimer(0LL, 0LL, 4LL);
      *(_QWORD *)((char *)this[362] + v19) = Timer;
      v20 = this[362];
      if ( !*(_QWORD *)((char *)v20 + v19) )
      {
LABEL_9:
        v13 = WdLogNewEntry5_WdError(Timer, v15);
        *(_QWORD *)(v13 + 24) = 3554LL;
        goto LABEL_3;
      }
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)((char *)v20 + v19 + 16), a2);
      v21 = 0LL;
      *(_QWORD *)((char *)this[362] + v19 + 8) = a3;
      *(_QWORD *)((char *)this[362] + v19 + 32) = FenceValueCPUVirtualAddress;
      *(_QWORD *)((char *)this[362] + v19 + 40) = 0LL;
      *(_QWORD *)((char *)this[362] + v19 + 48) = this[360];
      this[360] = (struct _KTHREAD *)((char *)this[360] + 1);
      do
      {
        v22 = v19 + v21++;
        *((_BYTE *)this[362] + v22 + 56) = 0;
      }
      while ( v21 < 2 );
      ++*((_DWORD *)this + 722);
      *a7 = *(_QWORD *)((char *)this[362] + v19 + 48);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = 3510LL;
LABEL_3:
    WdLogEvent5_WdError(v13);
    v12 = -1073741801;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return v12;
}
