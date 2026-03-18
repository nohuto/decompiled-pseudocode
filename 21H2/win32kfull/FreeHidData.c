/*
 * XREFs of FreeHidData @ 0x1C0003270
 * Callers:
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0001838 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0001A18 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     EditionPostRawMouseInputMessage @ 0x1C009B5F0 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D0B1C (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01F6020 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C002338C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
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
