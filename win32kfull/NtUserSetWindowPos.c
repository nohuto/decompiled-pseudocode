/*
 * XREFs of NtUserSetWindowPos @ 0x1C0067A30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C00254FC (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     AllocateCvr @ 0x1C0027990 (AllocateCvr.c)
 *     xxxSetWindowPosAndBand @ 0x1C0028FFC (xxxSetWindowPosAndBand.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C002D818 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035B2C (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 *     ValidateHwndIAM @ 0x1C009A070 (ValidateHwndIAM.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C00EFB10 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A6F6C (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CD768 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F5B3C (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C0220C70 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowPos(__int64 a1, unsigned __int64 a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v8; // r13d
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r12d
  int v21; // r15d
  unsigned __int64 v22; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v24; // edx
  int v25; // edx
  _BYTE *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // r14
  struct tagSMWP *v30; // rax
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r8d
  int v36; // ecx
  char v37; // dl
  __int64 v38; // rax
  __int64 v39; // rcx
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *TopLevelWindow; // r14
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  char v46; // [rsp+58h] [rbp-61h]
  unsigned int v47; // [rsp+5Ch] [rbp-5Dh]
  int v48; // [rsp+60h] [rbp-59h]
  int v49[2]; // [rsp+68h] [rbp-51h] BYREF
  int v50; // [rsp+70h] [rbp-49h] BYREF
  __int128 v51; // [rsp+78h] [rbp-41h] BYREF
  __int64 v52; // [rsp+88h] [rbp-31h]
  __int128 v53; // [rsp+90h] [rbp-29h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-19h]
  __int128 v55; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-1h]
  int v58; // [rsp+118h] [rbp+5Fh] BYREF
  int v59; // [rsp+120h] [rbp+67h] BYREF

  v59 = a4;
  v58 = a3;
  v47 = a3;
  v54 = 0LL;
  v52 = 0LL;
  v8 = a4;
  v53 = 0LL;
  v9 = a3;
  v51 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)v49 = gptiCurrent;
      *(_QWORD *)&v51 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v51;
      *((_QWORD *)&v51 + 1) = v10;
      HMLockObject(v10);
      v14 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v36 = 1004;
      }
      else
      {
        v15 = a2;
        v16 = 1;
        if ( a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v17 = ValidateHwndIAM(a2);
          a2 = v17;
          v15 = v17;
          if ( !v17 || (v18 = (*(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x2FFFu) - 669, (v18 & 0xFFFFFFFD) == 0) )
            v16 = 0;
          if ( !v16 )
            goto LABEL_48;
        }
        if ( *(char *)(*(_QWORD *)(v13 + 40) + 20LL) >= 0 )
        {
          if ( (v14 & 2) == 0 )
          {
            if ( v9 > 0x7FFF )
            {
              v9 = 0x7FFF;
              v47 = 0x7FFF;
            }
            else
            {
              if ( v9 < -32768 )
                v9 = -32768;
              v47 = v9;
            }
            v58 = v9;
            if ( v8 > 0x7FFF )
            {
              v8 = 0x7FFF;
            }
            else if ( v8 < -32768 )
            {
              v8 = -32768;
            }
            v59 = v8;
          }
          v20 = a5;
          if ( (v14 & 1) != 0 )
          {
            v21 = a6;
          }
          else
          {
            v21 = 0xFFFF;
            if ( a5 > 0xFFFF )
            {
              v20 = 0xFFFF;
            }
            else if ( a5 < 0 )
            {
              v20 = 0;
            }
            a5 = v20;
            if ( a6 <= 0xFFFF )
            {
              v21 = a6;
              if ( a6 < 0 )
                v21 = 0;
            }
            a6 = v21;
          }
          if ( v15 <= 1 || v15 == -2LL || (v22 = v15, v15 == -1LL) )
            v22 = 0LL;
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(1LL);
          if ( (unsigned __int8)ShouldVirtualizeWindowRect(v13, CurrentThreadDpiAwarenessContext) )
          {
            TransformSWPCoords((struct tagWND *)v13, &v58, &v59, &a5, &a6, v14);
            v21 = a6;
            v20 = a5;
            v8 = v59;
            v47 = v58;
          }
          if ( (v14 & 0x43) == 0x43
            && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 0x10) == 0
            && ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x80000000LL, v24)
            && ShellWindowManagement::WindowSubjectToBehavior(
                 (ShellWindowManagement *)v13,
                 (const struct tagWND *)1,
                 v35) )
          {
            v37 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v37,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                10LL,
                4u,
                0x16u,
                0xAu,
                (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
                v13);
            xxxShowWindowEx(v13, 5u, 0);
            v12 = 1;
            goto LABEL_48;
          }
          *(_QWORD *)&v53 = *(_QWORD *)(*(_QWORD *)v49 + 416LL);
          *(_QWORD *)(*(_QWORD *)v49 + 416LL) = &v53;
          *((_QWORD *)&v53 + 1) = v22;
          if ( v22 )
            HMLockObject(v22);
          if ( !a2
            && (*(_DWORD *)(v13 + 320) & 0x1000) != 0
            && (*(_QWORD *)v49 = 0LL, CWindowProp::GetProp<CoreWindowProp>(v13, (__int64 *)v49))
            && *(_DWORD *)(*(_QWORD *)v49 + 28LL)
            && (v14 & 0xFFFFFFEF) == 3 )
          {
            v14 |= 0x60400u;
            v46 = 1;
          }
          else
          {
            v46 = 0;
          }
          v25 = 0;
          v49[0] = v47;
          v50 = v8;
          v48 = 0;
          if ( (v14 & 0x80u) != 0 && *(_QWORD *)(v13 + 16) == gptiCurrent )
          {
            if ( IsWindowGhosted((const struct tagWND *)v13) )
              xxxHandleHealthyWindow((struct tagWND *)v13);
            v25 = 0;
          }
          if ( (v14 & 0xC0) != 0 )
          {
            v34 = *(_QWORD *)(v13 + 40);
            if ( (*(_BYTE *)(v34 + 21) & 1) == 0 )
            {
              v14 |= 3u;
              if ( (v14 & 0x40) != 0 )
              {
                if ( (*(_BYTE *)(v34 + 31) & 0x10) != 0 )
                  v25 = 1;
                v48 = v25;
              }
            }
          }
          v26 = *(_BYTE **)(v13 + 40);
          if ( (v26[21] & 4) == 0
            && *(_DWORD *)*gpDispInfo > 1u
            && (v14 & 2) == 0
            && (v26[31] & 0x50) == 0
            && (v26[30] & 0xC0) == 0xC0 )
          {
            v38 = *(_QWORD *)(v13 + 120);
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 40);
              if ( (*(_BYTE *)(v39 + 31) & 0x10) != 0
                && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v39 + 88)) )
              {
                FixBogusSWP((struct tagWND *)v13, v49, &v50, v20, v21, v14);
                v8 = v50;
                v47 = v49[0];
              }
            }
          }
          v27 = gdwPUDFlags;
          if ( (gdwPUDFlags & 0x40000000) != 0 || *((int *)&gSMWP + 8) < 1 )
          {
            v33 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
            v29 = (void *)v33;
            if ( !v33 )
              goto LABEL_100;
            if ( !(unsigned int)AllocateCvr(v33, 1) )
            {
              Win32FreePool(v29);
              goto LABEL_100;
            }
          }
          else
          {
            v28 = gdwPUDFlags | 0x40000000u;
            gdwPUDFlags |= 0x40000000u;
            v29 = (void *)gSMWP;
            gSMWP = 0LL;
            *((_OWORD *)&gSMWP + 1) = 0LL;
            if ( !gSMWP )
              goto LABEL_100;
          }
          v30 = (struct tagSMWP *)_DeferWindowPos(v29, v13, a2, v47, v8, v20, v21, v14, 0);
          if ( v30 && (unsigned int)xxxEndDeferWindowPosEx(v30) )
          {
            if ( v48 )
              xxxRedrawWindow((struct tagWND *)v13, 0LL, 0LL, 1157);
            v31 = 1LL;
            if ( v46 )
            {
              v27 = *(_QWORD *)(v13 + 16);
              v28 = gpqForeground;
              if ( *(_QWORD *)(v27 + 432) == gpqForeground )
              {
                TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)v13);
                TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
                v31 = 1LL;
                if ( TopLevelWindow )
                {
                  v55 = 0LL;
                  v56 = 0LL;
                  v42 = 394259;
                  ThreadLock(TopLevelWindow, &v55);
                  if ( (*(_BYTE *)(*((_QWORD *)TopLevelWindow + 5) + 24LL) & 8) == 0
                    && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 24LL) & 8) == 0 )
                  {
                    v42 = 2491411;
                  }
                  xxxSetWindowPosAndBand(TopLevelWindow, v13, 0, 0, 0, 0, v42, 0);
                  ThreadUnlock1(v44, v43, v45);
                  v31 = 1LL;
                }
              }
            }
            goto LABEL_47;
          }
LABEL_100:
          v31 = 0LL;
LABEL_47:
          v12 = v31;
          ThreadUnlock1(v28, v27, v31);
LABEL_48:
          ThreadUnlock1(v18, v15, v19);
          goto LABEL_49;
        }
        v36 = 87;
      }
      UserSetLastError(v36);
      goto LABEL_48;
    }
  }
LABEL_49:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
