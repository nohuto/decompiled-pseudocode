/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C0081160
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C007F530 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     SendMessageTo @ 0x1C0081230 (SendMessageTo.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToISM(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int64 a8,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a9)
{
  _BYTE v13[352]; // [rsp+60h] [rbp-168h] BYREF

  memset(v13, 0, sizeof(v13));
  CKeyboardProcessor::CreateKeyboardInputMessage(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    0,
    a8,
    a9,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v13);
  SendMessageTo(8LL, v13, 352LL);
}
