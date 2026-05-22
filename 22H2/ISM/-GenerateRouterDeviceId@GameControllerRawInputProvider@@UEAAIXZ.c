/*
 * XREFs of ?GenerateRouterDeviceId@GameControllerRawInputProvider@@UEAAIXZ @ 0x180088900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GameControllerRawInputProvider::GenerateRouterDeviceId(GameControllerRawInputProvider *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
}
