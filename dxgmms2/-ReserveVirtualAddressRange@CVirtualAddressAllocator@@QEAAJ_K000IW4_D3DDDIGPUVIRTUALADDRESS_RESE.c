/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C00A6818
 * Callers:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00A66D8 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C00EA550 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C009BC60 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00A6630 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00A69AC (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00C3074 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRange(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE a7,
        unsigned __int64 a8,
        unsigned __int8 a9,
        unsigned __int64 *a10,
        struct VIDMM_MAPPED_VA_RANGE **a11,
        unsigned __int8 a12)
{
  unsigned __int8 v12; // bl
  struct VIDMM_MAPPED_VA_RANGE **v17; // r14
  struct _RTL_AVL_TREE *v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  struct VIDMM_VAD *v21; // rbx
  unsigned int v22; // esi
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE v23; // r8d
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v24; // rcx
  struct VIDMM_MAPPED_VA_RANGE *ReservedVaRange; // rax
  _BYTE v27[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v28; // [rsp+58h] [rbp-30h]
  int v29; // [rsp+60h] [rbp-28h]
  struct VIDMM_VAD *v30; // [rsp+90h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 && (*(_DWORD *)(*((_QWORD *)this + 12) + 96LL) & 2) != 0 )
    v12 = *(_BYTE *)(*((_QWORD *)this + 11) + 40177LL) != 0 ? a12 : 0;
  v30 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v28);
  v29 = 2;
  v19 = CVirtualAddressAllocator::AllocateVirtualAddressRange(this, v18, a2, a3, a4, a5, a6, &v30, v12);
  v21 = v30;
  v22 = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry0(3LL);
  }
  else
  {
    CVirtualAddressAllocator::InsertVadToReservedList(this, v30, v20);
    v23 = a7;
    if ( a7 == D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT )
    {
LABEL_13:
      *((_DWORD *)v21 + 18) ^= (*((_DWORD *)v21 + 18) ^ (a9 << 11)) & 0x800;
      *a10 = *((_QWORD *)v21 + 3);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
      return 0LL;
    }
    if ( (unsigned int)a7 > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
    {
      WdLogSingleEntry0(3LL);
      v22 = -1073741811;
    }
    else
    {
      v24.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
      *((_DWORD *)v21 + 18) = *((_DWORD *)v21 + 18) & 0xFFFFFFF0 | 2;
      if ( v23 != D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
        v24.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
      ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                          this,
                          v21,
                          v23,
                          *((_QWORD *)v21 + 3),
                          *((_QWORD *)v21 + 4) - *((_QWORD *)v21 + 3),
                          v24,
                          a8);
      if ( ReservedVaRange )
      {
        *v17 = ReservedVaRange;
        goto LABEL_13;
      }
      v22 = -1073741801;
      WdLogSingleEntry0(3LL);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  if ( v21 )
    CVirtualAddressAllocator::FreeVirtualAddressRange(this, *((_QWORD *)v21 + 3));
  return v22;
}
