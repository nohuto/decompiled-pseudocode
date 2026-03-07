__int64 __fastcall xxxDWPPrint(struct tagWND *a1, Gre::Base *a2, char a3)
{
  char v3; // si
  struct tagWND *v5; // rbx
  BOOL v6; // r13d
  int v7; // r12d
  __int64 v8; // rax
  int v9; // r15d
  unsigned int v10; // r12d
  int v12; // r14d
  unsigned int v13; // r13d
  __int64 v14; // rcx
  struct tagBWL *v15; // rax
  struct tagBWL *v16; // r15
  _QWORD *i; // r12
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 DesktopWindow; // rax
  struct tagBWL *v25; // rax
  struct tagBWL *v26; // rbx
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  struct tagWND *v29; // r12
  __int64 v30; // rax
  struct tagWND *v31; // r14
  unsigned int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct tagBWL *v36; // rcx
  __int128 v37; // [rsp+38h] [rbp-18h] BYREF
  __int64 v38; // [rsp+48h] [rbp-8h]
  unsigned int v39; // [rsp+90h] [rbp+40h]
  __int64 v40; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v41; // [rsp+A8h] [rbp+58h]

  v40 = 0LL;
  v41 = a1;
  v3 = a3;
  v38 = 0LL;
  v5 = a1;
  v37 = 0LL;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible((__int64)a1) )
    return 0LL;
  v6 = (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout((HDC)a2) & 1) == 0;
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
    SetOrClrWF(1, (__int64 *)v5, 0x180u, 1);
    v8 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v9 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v39 = GreSetLayout(a2, (unsigned int)(v9 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, (HDC)a2, (*(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40) != 0);
      else
        xxxSendMessage(v5, 0xAFu);
      GreSetLayout(a2, (unsigned int)(v9 - 1), v39);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame(v5, (HDC)a2, (*(_BYTE *)(v8 + 16) & 0x40) != 0);
    }
    else
    {
      xxxSendMessage(v5, 0xAFu);
    }
    SetOrClrWF(0, (__int64 *)v5, 0x180u, 1);
    if ( v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v10 = GreSaveDCInternal(a2, 1);
  if ( !v10 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v40);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg((HDC)a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL)),
    *(_DWORD *)(*((_QWORD *)v5 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 108LL));
  if ( v6 )
  {
    v12 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v13 = GreSetLayout(a2, (unsigned int)(v12 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u);
    xxxSendMessage(v5, 0x318u);
    GreSetLayout(a2, (unsigned int)(v12 - 1), v13);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u);
    xxxSendMessage(v5, 0x318u);
  }
  GreRestoreDC(a2, v10);
  v14 = *((_QWORD *)v5 + 5);
  LODWORD(v40) = *(_DWORD *)(v14 + 88) + v40;
  HIDWORD(v40) += *(_DWORD *)(v14 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v15 = BuildHwndList(*((ShellWindowManagement **)v5 + 14), 2, 0LL, 1);
    v16 = v15;
    if ( v15 )
    {
      for ( i = (_QWORD *)((char *)v15 + 32); *i != 1LL; ++i )
      {
        v18 = HMValidateHandleNoSecure(*i, 1);
        v5 = (struct tagWND *)v18;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 40);
          if ( (*(_BYTE *)(v19 + 31) & 0x10) != 0 )
          {
            v20 = GreSaveDCInternal(a2, 1);
            if ( !v20 )
            {
              v36 = v16;
              goto LABEL_58;
            }
            GreSetWindowOrg((HDC)a2);
            if ( *(char *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 8LL) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v19 + 96) - *(_DWORD *)(v19 + 88)),
                *(_DWORD *)(v19 + 100) - *(_DWORD *)(v19 + 92));
            ThreadLockAlways(v5, &v37);
            xxxSendMessage(v5, 0x317u);
            ThreadUnlock1(v22, v21, v23);
            GreRestoreDC(a2, v20);
          }
        }
      }
      FreeHwndList(v16);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v25 = BuildHwndList(*(ShellWindowManagement **)(DesktopWindow + 112), 2, 0LL, 1);
  v26 = v25;
  if ( !v25 )
    return 1LL;
  v27 = (_QWORD *)((char *)v25 + 32);
  v28 = *((_QWORD *)v25 + 4);
  if ( v28 == 1 )
  {
LABEL_55:
    FreeHwndList(v26);
    return 1LL;
  }
  v29 = v41;
  while ( 1 )
  {
    v30 = HMValidateHandleNoSecure(v28, 1);
    v31 = (struct tagWND *)v30;
    if ( !v30 || *(struct tagWND **)(v30 + 120) != v29 || (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_54;
    v32 = GreSaveDCInternal(a2, 1);
    if ( !v32 )
      break;
    GreSetWindowOrg((HDC)a2);
    ThreadLockAlways(v31, &v37);
    xxxSendMessage(v31, 0x317u);
    ThreadUnlock1(v34, v33, v35);
    GreRestoreDC(a2, v32);
LABEL_54:
    v28 = *++v27;
    if ( *v27 == 1LL )
      goto LABEL_55;
  }
  v36 = v26;
LABEL_58:
  FreeHwndList(v36);
  return 0LL;
}
