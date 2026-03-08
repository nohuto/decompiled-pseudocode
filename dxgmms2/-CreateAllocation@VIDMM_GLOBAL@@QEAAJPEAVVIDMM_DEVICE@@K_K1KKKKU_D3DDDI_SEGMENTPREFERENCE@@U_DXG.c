/*
 * XREFs of ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C009DE44
 * Callers:
 *     ?VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00021C0 (-VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_CROSSA.c)
 * Callees:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateAllocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        _QWORD *a18)
{
  __int64 result; // rax
  char v19; // [rsp+78h] [rbp-40h]
  _QWORD v20[3]; // [rsp+A0h] [rbp-18h] BYREF

  v20[0] = 0LL;
  *a18 = 0LL;
  v19 = 0;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, int, int, int, int, int, int, __int64, __int64, _QWORD, int, char, _QWORD, _QWORD, __int64, _QWORD *))VIDMM_GLOBAL::CreateOneAllocation)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a8,
             a9,
             a10,
             a12,
             a13,
             a15,
             a16,
             0LL,
             a14,
             v19,
             0LL,
             0LL,
             a17,
             v20);
  if ( (int)result >= 0 )
  {
    *a18 = v20[0];
    return (unsigned int)result;
  }
  return result;
}
