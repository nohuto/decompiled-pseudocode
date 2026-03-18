/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C00825E4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0063700 (xxxDW_DestroyOwnedWindows.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0080F68 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C0082B70 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0098738 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00A3568 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00F4EEC (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncOwnerChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  _QWORD v9[2]; // [rsp+4Ch] [rbp-14h]

  v4 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 3932180;
    v7 = 0LL;
    WORD2(v6[0]) = 0x8000;
    v8 = 1073741878;
    v9[0] = a2;
    v9[1] = a3;
    EtwUpdateEvent(a2);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
