/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C00280A4
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000A7BC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0026E94 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C007E294 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00A0A28 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00C7B00 (xxxDW_DestroyOwnedWindows.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncOwnerChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _OWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  _QWORD v11[2]; // [rsp+4Ch] [rbp-14h]

  v6 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    WORD2(v8[0]) = 0x8000;
    LODWORD(v8[0]) = 3932180;
    v10 = 1073741878;
    v11[0] = a2;
    v11[1] = a3;
    EtwUpdateEvent(a2, 1073741878LL);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
