/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C00CCF70
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000B40C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0025464 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0059F80 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00654C8 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C0065CE8 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00EB35C (xxxDW_DestroyOwnedWindows.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C00CD030 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
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
