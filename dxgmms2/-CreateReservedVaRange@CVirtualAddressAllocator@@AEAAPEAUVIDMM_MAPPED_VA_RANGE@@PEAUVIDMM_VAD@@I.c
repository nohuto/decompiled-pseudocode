/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00A69AC
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C00A6818 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001310 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0011974 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C009C8A0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        unsigned __int64 a7)
{
  __int64 v10; // rax
  struct VIDMM_MAPPED_VA_RANGE *v11; // rax
  struct VIDMM_VAD *v12; // rdx
  VIDMM_MAPPED_VA_RANGE *v13; // rbx
  unsigned int v15; // edx
  __int64 v16; // rcx

  v10 = operator new(136LL, 0x39346956u, 256LL);
  if ( v10
    && (v11 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                v10,
                                                (__int64)a2,
                                                a4,
                                                a4 + a5,
                                                0,
                                                0LL,
                                                0LL,
                                                (*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0,
                                                a6.Value,
                                                a7,
                                                0LL,
                                                0LL),
        (v13 = v11) != 0LL) )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, v12, 0, 0LL, v11) >= 0 )
      return v13;
    WdLogSingleEntry0(3LL);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v13, v15);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00768B4);
    WdLogSingleEntry1(6LL, 1847LL);
    DxgkLogInternalTriageEvent(v16, 262145LL);
  }
  return 0LL;
}
