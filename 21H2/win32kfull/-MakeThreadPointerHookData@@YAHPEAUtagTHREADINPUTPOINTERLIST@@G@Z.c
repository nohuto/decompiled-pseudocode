/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01EBEE4
 * Callers:
 *     xxxPointerCallHook @ 0x1C01EAF28 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01EBAA4 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  _OWORD *v7; // rax
  __int64 v8; // r9
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  __int128 v14; // xmm6
  __int64 v15; // [rsp+20h] [rbp-118h]
  int v16; // [rsp+28h] [rbp-110h]
  _OWORD v17[7]; // [rsp+40h] [rbp-F8h] BYREF
  _DWORD v18[32]; // [rsp+B0h] [rbp-88h] BYREF

  result = FindThreadPointerData(a1, a2);
  v5 = (__int64)result;
  if ( result )
  {
    v6 = HMValidateHandleNoSecure((int)result[2].Blink, 1);
    v7 = INPUTDEST_FROM_PWND(v18, v6);
    v8 = *(unsigned int *)(v5 + 20);
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v12 = v7[4];
    v13 = v7[5];
    v14 = v7[6];
    v17[0] = *v7;
    v17[1] = v9;
    v17[2] = v10;
    v16 = *(_DWORD *)(v5 + 32);
    v15 = *(_QWORD *)(v5 + 24);
    v17[3] = v11;
    v17[4] = v12;
    v17[5] = v13;
    v17[6] = v14;
    return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, a1, a2, v8, v15, v16, v17);
  }
  return result;
}
