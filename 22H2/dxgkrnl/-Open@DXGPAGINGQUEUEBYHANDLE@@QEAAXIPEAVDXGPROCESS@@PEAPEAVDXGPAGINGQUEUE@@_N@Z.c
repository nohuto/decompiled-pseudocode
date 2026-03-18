/*
 * XREFs of ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C0015400
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C017B640 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C4F60 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1C01D3300 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01D4460 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C02E9B38 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C03116CC (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1C03379B0 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::Open(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGPAGINGQUEUE **a4,
        bool a5)
{
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  _BYTE v18[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)a3 + 74) )
  {
    v10 = *((_QWORD *)a3 + 35);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
      if ( v11 )
      {
        if ( v11 == 10 )
        {
          v12 = *(_QWORD *)(v10 + 16LL * v9);
          *(_QWORD *)this = v12;
          if ( !v12 )
            goto LABEL_3;
          _m_prefetchw((const void *)(v12 + 64));
          v13 = *(_QWORD *)(v12 + 64);
          while ( v13 )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 64), v13 + 1, v13);
            if ( v14 == v13 )
              goto LABEL_3;
          }
        }
        else if ( a5 )
        {
          WdLogSingleEntry1(2LL, 316LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v16,
                v15,
                v17,
                0,
                0,
                -1,
                (__int64)L"Handle type mismatch",
                316LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
      }
    }
  }
  *(_QWORD *)this = 0LL;
LABEL_3:
  *a4 = *(struct DXGPAGINGQUEUE **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
