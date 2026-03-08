/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     UnredirectDCEs @ 0x1C002C2E4 (UnredirectDCEs.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     GetStyleWindow @ 0x1C0039020 (GetStyleWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x1C00AB340 (UnlinkWindow.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 v2; // rcx
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  __int64 StyleWindow; // rax
  BOOL v6; // esi
  struct tagQ **v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v2 + 1272) & 0x40000) != 0 && *(struct tagWND **)(v2 + 1432) == a1 && *(_QWORD *)(v2 + 1440) )
    xxxSetModernAppWindow(a1, 0LL);
  while ( 1 )
  {
    v3 = (struct tagWND *)*((_QWORD *)a1 + 14);
    if ( !v3 )
      break;
    v4 = *((_QWORD *)a1 + 14);
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v11;
    *((_QWORD *)&v11 + 1) = v3;
    HMLockObject(v4);
    if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL) & 0x10) != 0 )
      SetVisible(v3, 0);
    StyleWindow = GetStyleWindow(v3, 2848LL);
    v6 = StyleWindow && (struct tagWND *)StyleWindow != v3;
    UnlinkWindow(v3, a1);
    if ( v6 )
      UnredirectDCEs(v3);
    SetOrClrWF(1LL, v3, 1152LL, 1LL);
    SetOrClrWF(1LL, v3, 896LL, 1LL);
    v7 = (struct tagQ **)*((_QWORD *)v3 + 2);
    if ( v7 == (struct tagQ **)gptiCurrent )
    {
      xxxFreeWindow(v3, (__int64)&v11);
    }
    else
    {
      PostEventMessageEx((struct tagTHREADINFO *)v7, v7[54], 8u, 0LL, 0, *(_QWORD *)v3, 0LL, 0LL);
      ThreadUnlock1(v9, v8, v10);
    }
  }
}
