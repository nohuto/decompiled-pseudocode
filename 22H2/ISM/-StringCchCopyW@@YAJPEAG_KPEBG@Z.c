/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031A5C
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180031EFC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180065170 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18009E598 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800AF5C8 (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180126D7C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ??0HeatDisplayOcclusionRect@@QEAA@AEBUtagRECT@@0QEBG@Z @ 0x18012C28C (--0HeatDisplayOcclusionRect@@QEAA@AEBUtagRECT@@0QEBG@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180032278 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
