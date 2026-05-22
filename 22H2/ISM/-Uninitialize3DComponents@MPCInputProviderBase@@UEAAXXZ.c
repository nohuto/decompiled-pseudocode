/*
 * XREFs of ?Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ @ 0x180041340
 * Callers:
 *     ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007F4E0 (-Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018F6C0 (-Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801943B0 (-Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x180041250 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCInputProviderBase::Uninitialize3DComponents(MPCInputProviderBase *this)
{
  MPCInputProviderBase::ClearInputTargets((MPCInputProviderBase *)((char *)this - 24));
  *((_BYTE *)this + 4515) = 0;
}
