/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00994C4
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 * Callees:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01BA6CC (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C01BA7A0 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BB984 (xxxAppAdjustDpiCandidateRect.c)
 */

bool __fastcall xxxSendDpiChangedMsgs(struct tagWND *this, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  __int64 v5; // r8
  int v8; // esi
  char v9; // r12
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagRECT *v14; // r9
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // r13d
  HWND *i; // rbx
  int v20; // eax
  HWND *j; // rbx
  struct tagRECT v22; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT v23; // [rsp+48h] [rbp-20h] BYREF

  v5 = *((_QWORD *)this + 5);
  v8 = 0;
  if ( (*(_BYTE *)(v5 + 288) & 0xF) == 3 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( *(_WORD *)(v5 + 286) )
      return 0;
    v10 = *((_DWORD *)this + 80);
    if ( (v10 & 0x40000) == 0 )
      return 0;
    *((_DWORD *)this + 80) = v10 & 0xFFFBFFFF;
  }
  v23 = 0LL;
  if ( IsTopLevelWindow((__int64)this) )
  {
    v15 = 1;
    if ( (*(_BYTE *)(v13 + 31) & 1) != 0 )
    {
      GetRect(v12, (__int64)&v23, 66);
    }
    else if ( v14 )
    {
      v23 = *v14;
    }
    else
    {
      GetRect(v12, (__int64)&v23, 66);
      if ( a4 )
      {
        v16 = *(unsigned __int16 *)(*((_QWORD *)this + 5) + 284LL);
        if ( a4 != (_WORD)v16 )
        {
          v17 = *(_QWORD *)&v23.left;
          v22 = v23;
          if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(this, v16, &v22, &v23) )
            ScaleDPIRect(
              (unsigned int)&v23,
              (unsigned int)&v23,
              *(unsigned __int16 *)(*((_QWORD *)this + 5) + 284LL),
              a4,
              v17,
              *(__int64 *)&v23.left);
        }
      }
    }
  }
  else
  {
    v15 = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF) == 2 || v9 )
  {
    if ( (*((_DWORD *)this + 80) & 0x100000) != 0 || v9 )
    {
      if ( a3 )
      {
        v18 = 0;
      }
      else
      {
        a3 = BuildHwndList(this, 1, 0LL, 1);
        v18 = 1;
      }
      if ( a3 )
      {
        for ( i = (HWND *)*((_QWORD *)a3 + 1); --i > (HWND *)a3 + 4; v8 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
          ;
        if ( v15 )
        {
          v20 = xxxSendDpiChangedMessageToTopLevelWindow(this, &v23);
        }
        else
        {
          v8 |= xxxSendDpiChangedMessageToChildWindow(*(HWND *)this, 1);
          v20 = xxxSendDpiChangedMessageToChildWindow(*(HWND *)this, 0);
        }
        v8 |= v20;
        for ( j = (HWND *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v8 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
        if ( v18 )
          FreeHwndList(a3);
      }
    }
    else if ( v15 )
    {
      v8 = xxxSendDpiChangedMessageToTopLevelWindow(this, &v23);
    }
  }
  return v8 != 0;
}
