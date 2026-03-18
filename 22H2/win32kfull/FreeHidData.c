/*
 * XREFs of FreeHidData @ 0x1C000E960
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0009138 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     EditionPostRawMouseInputMessage @ 0x1C014F920 (EditionPostRawMouseInputMessage.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C01558CC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01A9724 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AB0B8 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D3540 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C011B7D0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _HANDLEENTRY *__fastcall FreeHidData(char *a1)
{
  struct _HANDLEENTRY *result; // rax
  char v3; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v3, a1);
  result = (struct _HANDLEENTRY *)HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    HMAssignmentUnlock(a1 + 24);
    result = (struct _HANDLEENTRY *)HMFreeObject(a1);
  }
  if ( v3 )
  {
    result = gphePrimaryDestroyTarget;
    gphePrimaryDestroyTarget = 0LL;
  }
  return result;
}
