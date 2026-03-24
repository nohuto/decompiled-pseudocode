/*
 * XREFs of KseRegisterShim @ 0x1407BDBE0
 * Callers:
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A38BB0 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A38C28 (KseUserCetInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A686BC (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A686E8 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A68758 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A68784 (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A687B0 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A687DC (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A68808 (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407BDC00 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
