/*
 * XREFs of DpiDisableD3Requests @ 0x1C0198AF8
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     DpiRequestDevicePowerState @ 0x1C001AE94 (DpiRequestDevicePowerState.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C002395C (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDisableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(result + 4104));
  return result;
}
