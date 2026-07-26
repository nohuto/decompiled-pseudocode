/*
 * XREFs of ndisEnsureBindingInfoLoaded @ 0x1C0125B6C
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0145E64 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C01247AC (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C0126054 (ndisLoadNamedFilterAltitudes.c)
 */

__int64 ndisEnsureBindingInfoLoaded()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rdx

  result = ndisLoadNamedFilterAltitudes();
  if ( !(_DWORD)result )
  {
    result = netsetupEnumerateObjectIds<long (*)(_GUID const &)>(
               4,
               v1,
               (__int64 (__fastcall *)(GUID *))ndisReadProtocolById);
    if ( !(_DWORD)result )
      return netsetupEnumerateObjectIds<long (*)(_GUID const &)>(3, v2, (__int64 (__fastcall *)(GUID *))ndisReadLwfById);
  }
  return result;
}
