/*
 * XREFs of AllocateHidData @ 0x1C0009078
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0008F6C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0148BAC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01AA924 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AC288 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C009FA48 (PtiKbdFromQ.c)
 */

__int64 __fastcall AllocateHidData(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a5 )
    v8 = *(_QWORD *)(a5 + 16);
  else
    v8 = PtiKbdFromQ(gpqForeground);
  if ( (int)a3 + 56 < (unsigned int)a3 )
    return 0LL;
  v9 = a3 + 24;
  if ( (int)a3 + 24 < (unsigned int)a3 )
    return 0LL;
  LOBYTE(a3) = 18;
  v10 = HMAllocObject(v8, 0LL, a3);
  v11 = v10;
  if ( v10 )
  {
    v13[1] = a5;
    *(_QWORD *)(v10 + 24) = 0LL;
    v13[0] = v10 + 24;
    HMAssignmentLock(v13, 1LL);
    *(_DWORD *)(v11 + 36) = v9;
    *(_DWORD *)(v11 + 32) = a2;
    *(_QWORD *)(v11 + 40) = a1;
    *(_QWORD *)(v11 + 48) = a4;
  }
  return v11;
}
