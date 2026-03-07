void __fastcall CKeyboardProcessor::ForwardInputToKeyboardOverrider(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        unsigned __int16 a7,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a8)
{
  int v9; // ebp
  __int64 v12; // r9
  _DWORD v13[92]; // [rsp+60h] [rbp-178h] BYREF

  v9 = a1;
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[88]) = a2;
  v13[89] = v9;
  LOWORD(v13[90]) = a3;
  v13[91] = a6;
  CKeyboardProcessor::CreateKeyboardInputMessage(
    v9,
    a2,
    a3,
    a4,
    a5,
    a6,
    0,
    a7,
    0,
    a8,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v13);
  SendMessageTo(13LL, (__int64)v13, 368LL, v12);
}
