/*
 * XREFs of xxxSwitchWndProc @ 0x1C01F4C80
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E37D0 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C00484E0 (xxxDefWindowProc.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B5B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxCancelCoolSwitch @ 0x1C0125A64 (xxxCancelCoolSwitch.c)
 *     xxxValidateClassAndSize @ 0x1C0167A7C (xxxValidateClassAndSize.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3314 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // esi
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-20h] BYREF

  v11[2] = 0LL;
  v10 = 0LL;
  v7 = a2;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, a3, a4, 672, 1, &v10) )
    return v10;
  **((_QWORD **)a1 + 35) = a1;
  switch ( v7 )
  {
    case 1u:
      zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 17) + 88LL));
      break;
    case 0x10u:
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
      xxxCancelCoolSwitch();
      break;
    case 0x14u:
    case 0x3Au:
      v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v11;
      v11[1] = a1;
      HMLockObject(a1);
      xxxPaintSwitchWindow(a1);
      ThreadUnlock1(v9);
      return 0LL;
  }
  return xxxDefWindowProc(a1, v7, a3, a4);
}
