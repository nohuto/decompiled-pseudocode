/*
 * XREFs of KseRegisterShim @ 0x140800EC0
 * Callers:
 *     KseDriverScopeInitialize @ 0x140B35418 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140B35488 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B3E688 (KseInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
