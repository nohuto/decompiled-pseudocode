/*
 * XREFs of xxxSwitchWndProc @ 0x1C01CC6D0
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B9B60 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0042A88 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxDefWindowProc @ 0x1C00A66F0 (xxxDefWindowProc.c)
 *     xxxValidateClassAndSize @ 0x1C00FA3E4 (xxxValidateClassAndSize.c)
 *     xxxCancelCoolSwitch @ 0x1C0146A72 (xxxCancelCoolSwitch.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CADAC (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, unsigned int a2, HWND a3, __int64 a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF

  v13[2] = 0LL;
  v12 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, a3, a4, 672, 1, &v12) )
    return v12;
  **((_QWORD **)a1 + 35) = a1;
  switch ( a2 )
  {
    case 1u:
      zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 17) + 88LL));
      break;
    case 0x10u:
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
      xxxCancelCoolSwitch();
      break;
    case 0x14u:
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = a1;
      HMLockObject(a1);
      xxxPaintSwitchWindow(a1);
      ThreadUnlock1(v10, v9, v11);
      return 0LL;
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
