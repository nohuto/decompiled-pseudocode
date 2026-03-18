/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIUnknownWeakRefSource@@@@UEAAKXZ @ 0x18028BC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILCOMBaseT<IUnknownWeakRefSource>::Release(volatile signed __int32 *a1)
{
  return CMILRefCountBaseT<IUnknownWeakRefSource>::InternalRelease(a1);
}
