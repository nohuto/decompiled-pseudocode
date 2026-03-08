/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C6FB8
 * Callers:
 *     xxxPointerCallHook @ 0x1C01C5F94 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C014659C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int128 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int128 v13; // [rsp+40h] [rbp-158h]
  __int128 v14; // [rsp+50h] [rbp-148h]
  __int128 v15; // [rsp+60h] [rbp-138h]
  __int128 v16; // [rsp+70h] [rbp-128h]
  __int128 v17; // [rsp+80h] [rbp-118h]
  __int128 v18; // [rsp+90h] [rbp-108h]
  __int128 v19; // [rsp+A0h] [rbp-F8h]
  _OWORD v20[7]; // [rsp+B0h] [rbp-E8h] BYREF
  _DWORD v21[28]; // [rsp+120h] [rbp-78h] BYREF

  result = FindThreadPointerData(a1, a2);
  v5 = (__int64)result;
  if ( result )
  {
    v6 = HMValidateHandleNoSecure((int)result[2].Blink, 1);
    v7 = (__int128 *)INPUTDEST_FROM_PWND(v21, v6);
    v13 = *v7;
    v14 = v7[1];
    v15 = v7[2];
    v16 = v7[3];
    v17 = v7[4];
    v18 = v7[5];
    v19 = v7[6];
    v9 = SGDGetUserSessionState(v8);
    v10 = *(_QWORD *)(v5 + 24);
    v11 = *(_QWORD *)(v9 + 3424);
    LODWORD(v9) = *(_DWORD *)(v5 + 32);
    v12 = *(unsigned int *)(v5 + 20);
    v20[0] = v13;
    v20[1] = v14;
    v20[2] = v15;
    v20[3] = v16;
    v20[4] = v17;
    v20[5] = v18;
    v20[6] = v19;
    return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(v11, a1, a2, v12, v10, v9, v20);
  }
  return result;
}
