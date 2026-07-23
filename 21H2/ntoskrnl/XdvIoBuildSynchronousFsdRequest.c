/*
 * XREFs of XdvIoBuildSynchronousFsdRequest @ 0x1405A1E40
 * Callers:
 *     IovBuildSynchronousFsdRequest @ 0x1409C5C20 (IovBuildSynchronousFsdRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XdvIoBuildSynchronousFsdRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 (__fastcall *a9)(__int64, __int64, __int64, __int64))
{
  return a9(a1, a2, a3, a4);
}
