/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C0035C74
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000E488 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     zzzImeCanDestroyDefIME @ 0x1C0033A18 (zzzImeCanDestroyDefIME.c)
 *     zzzImeSetFutureOwner @ 0x1C0033FA4 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C0035B24 (zzzImeSetOwnerWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C003DF80 (xxxDW_DestroyOwnedWindows.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00E9948 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncOwnerChange(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+48h] [rbp-18h]
  _QWORD v10[2]; // [rsp+4Ch] [rbp-14h]

  v5 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    LODWORD(v7[0]) = 3932180;
    v8 = 0LL;
    WORD2(v7[0]) = 0x8000;
    v9 = 1073741877;
    v10[0] = a2;
    v10[1] = a3;
    EtwUpdateEvent(a2, 1073741877LL, a3, a4);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
