/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BEF0
 * Callers:
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetModernAppWindow @ 0x1C00058B0 (xxxSetModernAppWindow.c)
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     UnredirectDCEs @ 0x1C004C19C (UnredirectDCEs.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     UnlinkWindow @ 0x1C007E8D8 (UnlinkWindow.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 StyleWindow; // rax
  BOOL v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v2 + 1232) & 0x40000) != 0 && *(struct tagWND **)(v2 + 1392) == a1 && *(_QWORD *)(v2 + 1400) )
    xxxSetModernAppWindow(a1, 0LL);
  while ( 1 )
  {
    v3 = *((_QWORD *)a1 + 14);
    if ( !v3 )
      break;
    v4 = *((_QWORD *)a1 + 14);
    *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v9;
    *((_QWORD *)&v9 + 1) = v3;
    HMLockObject(v4);
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) != 0 )
      SetVisible((struct tagWND *)v3, 0);
    StyleWindow = GetStyleWindow(v3, 2848);
    v6 = StyleWindow && StyleWindow != v3;
    UnlinkWindow(v3, a1);
    if ( v6 )
      UnredirectDCEs((struct tagWND *)v3);
    SetOrClrWF(1, v3, 0x480u, 1);
    SetOrClrWF(1, v3, 0x380u, 1);
    v7 = *(_QWORD *)(v3 + 16);
    if ( v7 == gptiCurrent )
    {
      xxxFreeWindow((NotifyShell *)v3, (__int64)&v9);
    }
    else
    {
      PostEventMessageEx((struct tagTHREADINFO *)v7, *(struct tagQ **)(v7 + 432), 8u, 0LL, 0, *(_QWORD *)v3, 0LL, 0LL);
      ThreadUnlock1(v8);
    }
  }
}
