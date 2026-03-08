/*
 * XREFs of ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x1C0040D18
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x1C03CCAEC (-DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGADAPTER::RemovePending(DXGADAPTER *this)
{
  return *((_DWORD *)this + 50) == 5 || *((_DWORD *)this + 50) == 6;
}
