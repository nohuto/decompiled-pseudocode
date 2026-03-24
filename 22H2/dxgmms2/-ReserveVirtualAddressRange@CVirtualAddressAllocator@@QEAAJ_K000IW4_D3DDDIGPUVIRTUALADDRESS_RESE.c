/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0084188
 * Callers:
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0083FFC (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00B50AC (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00680E8 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00842B8 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00BB3E4 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BBB9C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
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
  struct VIDMM_MAPPED_VA_RANGE **v17; // rsi
  struct _RTL_AVL_TREE *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct VIDMM_VAD *v22; // rbx
  unsigned int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rcx
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE v26; // r8d
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v28; // rcx
  struct VIDMM_MAPPED_VA_RANGE *ReservedVaRange; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v33; // [rsp+58h] [rbp-30h]
  int v34; // [rsp+60h] [rbp-28h]
  struct VIDMM_VAD *v35; // [rsp+90h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 && (*(_DWORD *)(*((_QWORD *)this + 12) + 96LL) & 2) != 0 )
    v12 = *(_BYTE *)(*((_QWORD *)this + 11) + 40169LL) != 0 ? a12 : 0;
  v35 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, (struct _KTHREAD **)this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v33);
  v34 = 2;
  v19 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
          (unsigned __int64)this,
          v18,
          a2,
          a3,
          a4,
          a5,
          a6,
          &v35,
          v12);
  v22 = v35;
  v23 = v19;
  if ( v19 >= 0 )
  {
    CVirtualAddressAllocator::InsertVadToReservedList(this, v35);
    v26 = a7;
    if ( a7 == D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT )
    {
LABEL_6:
      *((_DWORD *)v22 + 18) ^= (*((_DWORD *)v22 + 18) ^ (a9 << 11)) & 0x800;
      *a10 = *((_QWORD *)v22 + 3);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      return 0LL;
    }
    if ( (unsigned int)a7 > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
    {
      v31 = WdLogNewEntry5_WdWarning(v25, v24);
      WdLogEvent5_WdWarning(v31);
      v23 = -1073741811;
      goto LABEL_15;
    }
    v28.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
    *((_DWORD *)v22 + 18) = *((_DWORD *)v22 + 18) & 0xFFFFFFF0 | 2;
    if ( v26 != D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
      v28.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
    ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                        this,
                        v22,
                        v26,
                        *((_QWORD *)v22 + 3),
                        *((_QWORD *)v22 + 4) - *((_QWORD *)v22 + 3),
                        v28,
                        a8);
    if ( ReservedVaRange )
    {
      *v17 = ReservedVaRange;
      goto LABEL_6;
    }
    v23 = -1073741801;
  }
  v30 = WdLogNewEntry5_WdWarning(v21, v20);
  WdLogEvent5_WdWarning(v30);
LABEL_15:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  if ( v22 )
    CVirtualAddressAllocator::FreeVirtualAddressRange(this, *((_QWORD *)v22 + 3));
  return v23;
}
