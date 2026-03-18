/*
 * XREFs of KseRegisterShim @ 0x14080AC90
 * Callers:
 *     KseVersionLieInitialize @ 0x140B3970C (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B4CCCC (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140B761B8 (KseDriverScopeInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x14080ACB0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
