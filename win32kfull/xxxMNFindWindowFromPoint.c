__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  __int16 v3; // bx
  LONG v4; // r14d
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edx
  int WindowDpiLastNotify; // r14d
  __int64 v23; // rax
  int DpiDependentMetric; // r12d
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  int WindowBordersForDpi; // eax
  __int64 v29; // r8
  int v30; // r9d
  int v31; // ebx
  bool v32; // zf
  struct tagPOINT v33; // r8
  int v34; // [rsp+30h] [rbp-40h]
  unsigned __int64 v35; // [rsp+38h] [rbp-38h]
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]
  struct tagPOINT v37; // [rsp+38h] [rbp-38h]
  _DWORD v38[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v39; // [rsp+48h] [rbp-28h]
  __int128 v40; // [rsp+50h] [rbp-20h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h]

  v34 = 0;
  *a2 = 0;
  v39 = 0LL;
  v3 = a3;
  v4 = SHIWORD(a3);
  v41 = 0LL;
  v7 = *a1;
  v40 = 0LL;
  if ( *(_QWORD *)(*v7 + 24) )
  {
    ThreadLockAlways(*(_QWORD *)(**a1 + 24), &v40);
    v8 = xxxSendMessage(*(struct tagWND **)(**a1 + 24), 0x1EBu);
    ThreadUnlock1(v10, v9, v11);
    LOBYTE(v12) = IsMFMWFPWindow(v8);
    if ( v12 )
    {
      v14 = HMValidateHandleNoSecure(v13, 1);
      v8 = v14;
      if ( v14 )
      {
        v15 = safe_cast_fnid_to_PMENUWND(v14);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8);
          if ( v16 )
          {
            if ( *(_QWORD *)(v16 + 40) )
              goto LABEL_7;
          }
        }
        return 0LL;
      }
    }
    else if ( v8 )
    {
      goto LABEL_7;
    }
  }
  v19 = **a1;
  if ( (*(_DWORD *)v19 & 1) == 0 )
  {
    v8 = *(_QWORD *)(v19 + 16);
    LODWORD(v36) = v3;
    HIDWORD(v36) = v4;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v8 + 40) + 88LL), v36) )
      return 0LL;
LABEL_38:
    v37.x = v3;
    v37.y = v4;
    v34 = MNItemHitTest(*(struct tagMENU **)(**a1 + 40), (struct tagWND *)v8, v37);
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v17 = v34;
      if ( v34 != -1 )
      {
        v8 = 0xFFFFFFFFLL;
        goto LABEL_8;
      }
      if ( !*(_QWORD *)(**a1 + 48) )
        return 0LL;
      v17 = MNItemHitTest(*(struct tagMENU **)(**a1 + 48), (struct tagWND *)v8, v37);
LABEL_32:
      if ( v17 != -1 )
      {
        v8 = 4294967291LL;
        goto LABEL_8;
      }
      return 0LL;
    }
LABEL_7:
    v17 = v34;
LABEL_8:
    *a2 = v17;
    return v8;
  }
  v8 = *(_QWORD *)(v19 + 8);
  if ( !v8 )
    return 0LL;
  LODWORD(v35) = v3;
  HIDWORD(v35) = v4;
  if ( (*(_DWORD *)**a1 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
    goto LABEL_38;
  }
  if ( !(unsigned int)HasCaptionIcon(v8) )
    return 0LL;
  v20 = *(_QWORD *)(v8 + 40);
  if ( (*(_BYTE *)(v20 + 31) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v20 + 88), v35) )
      return 0xFFFFFFFFLL;
    return 0LL;
  }
  v21 = *(_DWORD *)(v20 + 288) & 0xF;
  if ( v21 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v20 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v20 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v8);
  }
  else if ( !v21
         && (v23 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) + 284LL);
  }
  DpiDependentMetric = GetDpiDependentMetric(12, WindowDpiLastNotify);
  v25 = GetDpiDependentMetric(13, WindowDpiLastNotify);
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(*(_QWORD *)(v8 + 40) + 28LL),
                          *(_DWORD *)(*(_QWORD *)(v8 + 40) + 24LL),
                          v26,
                          v27,
                          WindowDpiLastNotify);
  v29 = *(_QWORD *)(v8 + 40);
  v30 = *(_DWORD *)(v29 + 88);
  v31 = WindowBordersForDpi + *(_DWORD *)(v29 + 92) + v25;
  v38[1] = WindowBordersForDpi + *(_DWORD *)(v29 + 92);
  v32 = (*(_BYTE *)(v29 + 26) & 0x40) == 0;
  v38[0] = v30 + WindowBordersForDpi;
  LODWORD(v39) = DpiDependentMetric + v30 + WindowBordersForDpi;
  HIDWORD(v39) = v31;
  if ( !v32 )
  {
    LODWORD(v39) = *(_DWORD *)(v29 + 96) - WindowBordersForDpi;
    v38[0] = v39 - DpiDependentMetric;
  }
  if ( PtInRect(v38, v35) )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( *(_QWORD *)(**a1 + 48) )
  {
    v17 = MNItemHitTest(*(struct tagMENU **)(**a1 + 48), (struct tagWND *)v8, v33);
    goto LABEL_32;
  }
  return 0LL;
}
