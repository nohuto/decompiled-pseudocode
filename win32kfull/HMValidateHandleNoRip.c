/*
 * XREFs of HMValidateHandleNoRip @ 0x1C01083AC
 * Callers:
 *     EditionGetKeyStateUpdateParamsForRawInput @ 0x1C0011600 (EditionGetKeyStateUpdateParamsForRawInput.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C0072160 (FindQMsg.c)
 *     DWP_GetIcon @ 0x1C00E542C (DWP_GetIcon.c)
 *     xxxSetClassData @ 0x1C00ED168 (xxxSetClassData.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0107A14 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxEventWndProc @ 0x1C0107F00 (xxxEventWndProc.c)
 *     xxxClientCopyImage @ 0x1C0107FC0 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C01080C0 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0109AE8 (xxxClientLoadMenu.c)
 *     xxxCreateWindowSmIcon @ 0x1C010A268 (xxxCreateWindowSmIcon.c)
 *     _RegisterClassEx @ 0x1C012DD34 (_RegisterClassEx.c)
 *     DestroyWindowSmIcon @ 0x1C012F204 (DestroyWindowSmIcon.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B9940 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01C9FD0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CA94C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     NtUserCsDdeUninitialize @ 0x1C01CF1F0 (NtUserCsDdeUninitialize.c)
 *     NtUserUpdateInstance @ 0x1C01E0670 (NtUserUpdateInstance.c)
 *     _GetWindowIcon @ 0x1C01E48BC (_GetWindowIcon.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FEEDC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFA0C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFB98 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFD30 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxSetClassIcon @ 0x1C0223360 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int16 v7; // ax
  __int64 v8; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rdx
  __int16 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rax

  v3 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
    v6 = (__int64 *)HMPkheFromPhe(v5);
    v7 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v5 + 26) || v7 == 0x7FFF || !v7 && PsGetCurrentProcessWow64Process(0x7FFFLL) )
    {
      if ( (*(_BYTE *)(v5 + 25) & 1) == 0 && *(_BYTE *)(v5 + 24) == a2 )
        v3 = *v6;
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      {
        if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
          v3 = 0LL;
      }
      else
      {
        v8 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
        v3 &= v8;
      }
      if ( *(char *)(v5 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
        v11 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v12 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
            if ( (v12 & 2) != 0 )
            {
              v13 = (_QWORD *)v6[1];
            }
            else
            {
              if ( (v12 & 1) == 0 )
                return v3;
              v14 = v6[1];
              if ( !v14 )
                return v3;
              v13 = *(_QWORD **)(v14 + 424);
            }
            if ( v13 && v13 != v11 )
              return 0LL;
          }
        }
      }
    }
  }
  return v3;
}
