/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013F388
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 *     _IsWindowVisible @ 0x1C0111098 (_IsWindowVisible.c)
 *     GreSetWindowOrg @ 0x1C013F75C (GreSetWindowOrg.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, char a3)
{
  char v3; // si
  struct tagWND *v5; // rbx
  BOOL v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 v10; // rcx
  struct tagBWL *v11; // rax
  struct tagBWL *v12; // r15
  _QWORD *i; // r12
  __int64 DesktopWindow; // rax
  struct tagBWL *v15; // rax
  struct tagBWL *v16; // rbx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  struct tagWND *v19; // r12
  __int64 v20; // rax
  ULONG_PTR v21; // r14
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned int v25; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r14d
  struct tagBWL *v31; // rcx
  int v32; // r14d
  unsigned int v33; // r12d
  unsigned int v34; // eax
  unsigned int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int128 v40; // [rsp+38h] [rbp-18h] BYREF
  __int64 v41; // [rsp+48h] [rbp-8h]
  unsigned int v42; // [rsp+90h] [rbp+40h]
  __int64 v43; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v44; // [rsp+A8h] [rbp+58h]

  v43 = 0LL;
  v44 = a1;
  v3 = a3;
  v41 = 0LL;
  v5 = a1;
  v40 = 0LL;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible((__int64)a1) )
    return 0LL;
  v6 = (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v3 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      SetVisible(v5, 5u);
    }
    SetOrClrWF(1, v5, 0x180u, 1);
    v8 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v30 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v42 = GreSetLayout(a2, (unsigned int)(v30 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, a2, (*(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40) != 0);
      else
        xxxSendMessage((ULONG_PTR)v5);
      GreSetLayout(a2, (unsigned int)(v30 - 1), v42);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame(v5, a2, (*(_BYTE *)(v8 + 16) & 0x40) != 0);
    }
    else
    {
      xxxSendMessage((ULONG_PTR)v5);
    }
    SetOrClrWF(0, v5, 0x180u, 1);
    if ( v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v9 = GreSaveDCInternal(a2, 1);
  if ( !v9 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v43);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL)),
    *(_DWORD *)(*((_QWORD *)v5 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 108LL));
  if ( v6 )
  {
    v32 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v33 = GreSetLayout(a2, (unsigned int)(v32 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
    GreSetLayout(a2, (unsigned int)(v32 - 1), v33);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
  }
  GreRestoreDC(a2, v9);
  v10 = *((_QWORD *)v5 + 5);
  LODWORD(v43) = *(_DWORD *)(v10 + 88) + v43;
  HIDWORD(v43) += *(_DWORD *)(v10 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v11 = BuildHwndList(*((ShellWindowManagement **)v5 + 14), (const struct tagWND *)2, 0LL, 1);
    v12 = v11;
    if ( v11 )
    {
      for ( i = (_QWORD *)((char *)v11 + 32); *i != 1LL; ++i )
      {
        v23 = HMValidateHandleNoSecure(*i, 1);
        v5 = (struct tagWND *)v23;
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 40);
          if ( (*(_BYTE *)(v24 + 31) & 0x10) != 0 )
          {
            v25 = GreSaveDCInternal(a2, 1);
            if ( !v25 )
            {
              v31 = v12;
              goto LABEL_54;
            }
            GreSetWindowOrg(a2);
            if ( *(char *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 8LL) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v24 + 96) - *(_DWORD *)(v24 + 88)),
                *(_DWORD *)(v24 + 100) - *(_DWORD *)(v24 + 92));
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v40 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v40;
            *((_QWORD *)&v40 + 1) = v5;
            HMLockObject(v5);
            xxxSendMessage((ULONG_PTR)v5);
            ThreadUnlock1(v28, v27, v29);
            GreRestoreDC(a2, v25);
          }
        }
      }
      FreeHwndList(v12);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v15 = BuildHwndList(*(ShellWindowManagement **)(DesktopWindow + 112), (const struct tagWND *)2, 0LL, 1);
  v16 = v15;
  if ( !v15 )
    return 1LL;
  v17 = (_QWORD *)((char *)v15 + 32);
  v18 = *((_QWORD *)v15 + 4);
  if ( v18 == 1 )
  {
LABEL_32:
    FreeHwndList(v16);
    return 1LL;
  }
  v19 = v44;
  while ( 1 )
  {
    v20 = HMValidateHandleNoSecure(v18, 1);
    v21 = v20;
    if ( !v20 || *(struct tagWND **)(v20 + 120) != v19 || (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v34 = GreSaveDCInternal(a2, 1);
    v35 = v34;
    if ( !v34 )
      break;
    GreSetWindowOrg(a2);
    v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v40 = *(_QWORD *)(v36 + 416);
    *(_QWORD *)(v36 + 416) = &v40;
    *((_QWORD *)&v40 + 1) = v21;
    HMLockObject(v21);
    xxxSendMessage(v21);
    ThreadUnlock1(v38, v37, v39);
    GreRestoreDC(a2, v35);
LABEL_31:
    v18 = *++v17;
    if ( *v17 == 1LL )
      goto LABEL_32;
  }
  v31 = v16;
LABEL_54:
  FreeHwndList(v31);
  return 0LL;
}
