/*
 * XREFs of FreeHidData @ 0x1C000DC20
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0008F6C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0148BAC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01AA924 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AC288 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D4570 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C003AA08 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
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
