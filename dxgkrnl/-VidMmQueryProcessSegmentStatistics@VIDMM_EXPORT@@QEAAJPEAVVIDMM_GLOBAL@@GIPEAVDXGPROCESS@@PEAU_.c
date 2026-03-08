/*
 * XREFs of ?VidMmQueryProcessSegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C0046344
 * Callers:
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C02CB2CC (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQueryProcessSegmentStatistics(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a6)
{
  __int64 v7; // r9
  __int64 v8; // r10

  v7 = 0LL;
  v8 = *((_QWORD *)a5 + 8);
  if ( v8 )
    v7 = *(_QWORD *)(v8 + 8LL * (unsigned int)(*(_DWORD *)this - 1));
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, _QWORD, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *))(*((_QWORD *)this + 1) + 320LL))(
           a2,
           a3,
           a4,
           v7,
           a6);
}
