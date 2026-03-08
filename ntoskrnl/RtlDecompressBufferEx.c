/*
 * XREFs of RtlDecompressBufferEx @ 0x14035AF00
 * Callers:
 *     SmDecompressBuffer @ 0x14035AD38 (SmDecompressBuffer.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14045D346 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C3B64 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlDecompressBufferEx(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 5u )
    return 3221226079LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _DWORD, __int64, __int64))RtlDecompressBufferProcs[a1])(
           a2,
           a3,
           a4,
           a5,
           0,
           a6,
           a7);
}
