/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C0231654
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0231190 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00684C0 (_HasCaptionIcon.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     GetWindowBordersForDpi @ 0x1C00BBC00 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C022EFC4 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  __int16 v3; // bx
  unsigned int v4; // r14d
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rcx
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v25; // rax
  int DpiDependentMetric; // r12d
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  int WindowBordersForDpi; // eax
  __int64 v31; // r8
  int v32; // r9d
  int v33; // ebx
  bool v34; // zf
  struct tagPOINT v35; // r8
  int v36; // eax
  int v37; // [rsp+30h] [rbp-40h]
  unsigned __int64 v38; // [rsp+38h] [rbp-38h]
  unsigned __int64 v39; // [rsp+38h] [rbp-38h]
  struct tagPOINT v40; // [rsp+38h] [rbp-38h]
  _DWORD v41[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v42; // [rsp+48h] [rbp-28h]
  __int128 v43; // [rsp+50h] [rbp-20h] BYREF
  __int64 v44; // [rsp+60h] [rbp-10h]

  v37 = 0;
  *a2 = 0;
  v42 = 0LL;
  v3 = a3;
  v4 = SHIWORD(a3);
  v44 = 0LL;
  v7 = *a1;
  v43 = 0LL;
  if ( *(_QWORD *)(*v7 + 24) )
  {
    v8 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v43 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v43;
    *((_QWORD *)&v43 + 1) = v8;
    HMLockObject(v8);
    v10 = xxxSendMessage(*(_QWORD *)(**a1 + 24));
    ThreadUnlock1(v12, v11, v13);
    if ( IsMFMWFPWindow(v10) )
    {
      v15 = HMValidateHandleNoSecure(v14, 1);
      v10 = v15;
      if ( v15 )
      {
        v16 = safe_cast_fnid_to_PMENUWND(v15);
        if ( !v16 )
          return 0LL;
        v17 = *(_QWORD *)(v16 + 8);
        if ( !v17 || !*(_QWORD *)(v17 + 40) )
          return 0LL;
        goto LABEL_42;
      }
    }
    else if ( v10 )
    {
      goto LABEL_42;
    }
  }
  v19 = **a1;
  if ( (*(_DWORD *)v19 & 1) != 0 )
  {
    v10 = *(_QWORD *)(v19 + 8);
    if ( !v10 )
      return 0LL;
    v20 = v4;
    v21 = v3;
    LODWORD(v38) = v3;
    HIDWORD(v38) = v4;
    if ( (*(_DWORD *)**a1 & 4) != 0 )
    {
      if ( !(unsigned int)HasCaptionIcon(v10) )
        return 0LL;
      v22 = *(_QWORD *)(v10 + 40);
      if ( (*(_BYTE *)(v22 + 31) & 0x20) != 0 )
      {
        if ( PtInRect((_DWORD *)(v22 + 88), v38) )
          return 0xFFFFFFFFLL;
        return 0LL;
      }
      v23 = *(_DWORD *)(v22 + 288) & 0xF;
      if ( v23 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v22 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v22 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
      }
      else if ( !v23
             && (v25 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
      }
      DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
      v27 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
      WindowBordersForDpi = GetWindowBordersForDpi(
                              *(_DWORD *)(*(_QWORD *)(v10 + 40) + 28LL),
                              *(_DWORD *)(*(_QWORD *)(v10 + 40) + 24LL),
                              v28,
                              v29,
                              WindowDpiLastNotify);
      v31 = *(_QWORD *)(v10 + 40);
      v32 = *(_DWORD *)(v31 + 88);
      v33 = WindowBordersForDpi + *(_DWORD *)(v31 + 92) + v27;
      v41[1] = WindowBordersForDpi + *(_DWORD *)(v31 + 92);
      v34 = (*(_BYTE *)(v31 + 26) & 0x40) == 0;
      v41[0] = v32 + WindowBordersForDpi;
      LODWORD(v42) = DpiDependentMetric + v32 + WindowBordersForDpi;
      HIDWORD(v42) = v33;
      if ( !v34 )
      {
        LODWORD(v42) = *(_DWORD *)(v31 + 96) - WindowBordersForDpi;
        v41[0] = v42 - DpiDependentMetric;
      }
      if ( PtInRect(v41, v38) )
      {
        *a2 = 0;
        return 0xFFFFFFFFLL;
      }
      if ( !*(_QWORD *)(**a1 + 48) )
        return 0LL;
      v36 = MNItemHitTest(*(struct tagMENU **)(**a1 + 48), (struct tagWND *)v10, v35);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v19 + 16);
    LODWORD(v39) = v3;
    HIDWORD(v39) = v4;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL), v39) )
      return 0LL;
  }
  v40 = (struct tagPOINT)__PAIR64__(v20, v21);
  v37 = MNItemHitTest(*(struct tagMENU **)(**a1 + 40), (struct tagWND *)v10, (struct tagPOINT)__PAIR64__(v20, v21));
  if ( (*(_DWORD *)**a1 & 1) == 0 )
  {
LABEL_42:
    v36 = v37;
    goto LABEL_43;
  }
  v36 = v37;
  if ( v37 != -1 )
  {
    v10 = 0xFFFFFFFFLL;
    goto LABEL_43;
  }
  if ( !*(_QWORD *)(**a1 + 48) )
    return 0LL;
  v36 = MNItemHitTest(*(struct tagMENU **)(**a1 + 48), (struct tagWND *)v10, v40);
LABEL_39:
  if ( v36 == -1 )
    return 0LL;
  v10 = 4294967291LL;
LABEL_43:
  *a2 = v36;
  return v10;
}
