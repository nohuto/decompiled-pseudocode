/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010BE7C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     GreGetLayout @ 0x1C0045F14 (GreGetLayout.c)
 *     xxxDrawWindowFrame @ 0x1C004BA7C (xxxDrawWindowFrame.c)
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreSaveDC @ 0x1C008E4C8 (GreSaveDC.c)
 *     GreSetWindowOrg @ 0x1C010C2D0 (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1C0125D64 (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, struct _LARGE_STRING *a3)
{
  unsigned __int64 v3; // rsi
  struct tagWND *v5; // rbx
  BOOL v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  char v9; // dl
  unsigned int v10; // r13d
  __int64 v11; // rcx
  struct tagBWL *v12; // rax
  struct tagBWL *v13; // r15
  unsigned __int64 *i; // r12
  __int64 DesktopWindow; // rax
  struct tagBWL *v16; // rax
  struct tagBWL *v17; // rbx
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rcx
  struct tagWND *v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  unsigned int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int v29; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rcx
  int v32; // r15d
  char v33; // r10
  struct tagBWL *v34; // rcx
  int v35; // r14d
  unsigned int v36; // r12d
  __int128 v38; // [rsp+38h] [rbp-18h] BYREF
  __int64 v39; // [rsp+48h] [rbp-8h]
  unsigned int v40; // [rsp+90h] [rbp+40h]
  __int64 v41; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v42; // [rsp+A8h] [rbp+58h]

  v41 = 0LL;
  v42 = a1;
  v3 = (unsigned __int64)a3;
  v39 = 0LL;
  v5 = a1;
  v38 = 0LL;
  if ( ((unsigned __int8)a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
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
    SetOrClrWF(1, (__int64)v5, 0x180u, 1);
    v8 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v32 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v40 = GreSetLayout(a2, (unsigned int)(v32 - 1), 1LL);
      v33 = *(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v5, a2, v33 != 0);
      else
        xxxSendMessage((unsigned __int64)v5, 0xAFu, (unsigned __int64)a2, (struct _LARGE_STRING *)(v33 != 0));
      GreSetLayout(a2, (unsigned int)(v32 - 1), v40);
    }
    else
    {
      v9 = *(_BYTE *)(v8 + 16) & 0x40;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v5, a2, v9 != 0);
      else
        xxxSendMessage((unsigned __int64)v5, 0xAFu, (unsigned __int64)a2, (struct _LARGE_STRING *)(v9 != 0));
    }
    SetOrClrWF(0, (__int64)v5, 0x180u, 1);
    if ( v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v10 = GreSaveDC(a2);
  if ( !v10 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v41);
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
    v35 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v36 = GreSetLayout(a2, (unsigned int)(v35 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage((unsigned __int64)v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage((unsigned __int64)v5, 0x318u, (unsigned __int64)a2, (struct _LARGE_STRING *)v3);
    GreSetLayout(a2, (unsigned int)(v35 - 1), v36);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage((unsigned __int64)v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage((unsigned __int64)v5, 0x318u, (unsigned __int64)a2, (struct _LARGE_STRING *)v3);
  }
  GreRestoreDC(a2, v10);
  v11 = *((_QWORD *)v5 + 5);
  LODWORD(v41) = *(_DWORD *)(v11 + 88) + v41;
  HIDWORD(v41) += *(_DWORD *)(v11 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xFFFFFFFFFFFFFFF4uLL | 0xA;
    v12 = BuildHwndList(*((struct tagWND **)v5 + 14), 2, 0LL);
    v13 = v12;
    if ( v12 )
    {
      for ( i = (unsigned __int64 *)((char *)v12 + 32); *i != 1; ++i )
      {
        v27 = HMValidateHandleNoSecure(*i, 1);
        v5 = (struct tagWND *)v27;
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 40);
          if ( (*(_BYTE *)(v28 + 31) & 0x10) != 0 )
          {
            v29 = GreSaveDC(a2);
            if ( !v29 )
            {
              v34 = v13;
              goto LABEL_55;
            }
            GreSetWindowOrg(a2);
            if ( *(char *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 8LL) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v28 + 96) - *(_DWORD *)(v28 + 88)),
                *(_DWORD *)(v28 + 100) - *(_DWORD *)(v28 + 92));
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v38 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v38;
            *((_QWORD *)&v38 + 1) = v5;
            HMLockObject(v5);
            xxxSendMessage((unsigned __int64)v5, 0x317u, (unsigned __int64)a2, (struct _LARGE_STRING *)v3);
            ThreadUnlock1(v31);
            GreRestoreDC(a2, v29);
          }
        }
      }
      FreeHwndList(v13);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v16 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112), 2, 0LL);
  v17 = v16;
  if ( !v16 )
    return 1LL;
  v18 = (unsigned __int64 *)((char *)v16 + 32);
  v19 = *((_QWORD *)v16 + 4);
  if ( v19 == 1 )
  {
LABEL_32:
    FreeHwndList(v17);
    return 1LL;
  }
  v20 = v42;
  while ( 1 )
  {
    v21 = HMValidateHandleNoSecure(v19, 1);
    v22 = v21;
    if ( !v21 || *(struct tagWND **)(v21 + 120) != v20 || (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v24 = GreSaveDC(a2);
    if ( !v24 )
      break;
    GreSetWindowOrg(a2);
    v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v38 = *(_QWORD *)(v25 + 416);
    *(_QWORD *)(v25 + 416) = &v38;
    *((_QWORD *)&v38 + 1) = v22;
    HMLockObject(v22);
    xxxSendMessage(v22, 0x317u, (unsigned __int64)a2, a3);
    ThreadUnlock1(v26);
    GreRestoreDC(a2, v24);
LABEL_31:
    v19 = *++v18;
    if ( *v18 == 1 )
      goto LABEL_32;
  }
  v34 = v17;
LABEL_55:
  FreeHwndList(v34);
  return 0LL;
}
