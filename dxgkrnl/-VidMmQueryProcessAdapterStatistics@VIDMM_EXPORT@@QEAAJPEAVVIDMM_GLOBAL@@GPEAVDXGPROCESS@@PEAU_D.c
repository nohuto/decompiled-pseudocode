/*
 * XREFs of ?VidMmQueryProcessAdapterStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C0046294
 * Callers:
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C02CB2CC (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQueryProcessAdapterStatistics(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned __int16 a3,
        struct DXGPROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a5)
{
  __int64 v5; // r10
  __int64 v7; // r8

  v5 = *((_QWORD *)a4 + 8);
  v7 = 0LL;
  if ( v5 )
    v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)this - 1));
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *))(*((_QWORD *)this + 1) + 304LL))(
           a2,
           a3,
           v7,
           a5);
}
