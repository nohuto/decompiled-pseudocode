/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C02386D0
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C02380E4 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C02396FC (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C004C6B8 (GetWindowDpiLastNotify.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C0061D98 (_HasCaptionIcon.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D85C (safe_cast_fnid_to_PMENUWND.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GetWindowBordersForDpi @ 0x1C00E11A0 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C0236A58 (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C0236C28 (MNItemHitTest.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r15d
  unsigned __int16 v4; // bx
  __int64 *v6; // rax
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rax
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  __int64 v20; // rcx
  int v22; // edx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v24; // rax
  int DpiDependentMetric; // ebx
  int v26; // edi
  __int64 v27; // r8
  __int64 v28; // r9
  int WindowBordersForDpi; // eax
  __int64 v30; // r9
  int v31; // ecx
  int v32; // edi
  bool v33; // zf
  unsigned __int64 v34; // r8
  int v35; // eax
  __int64 *v36; // rax
  int v37; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-38h]
  _DWORD v39[2]; // [rsp+40h] [rbp-30h] BYREF
  int v40; // [rsp+48h] [rbp-28h]
  int v41; // [rsp+4Ch] [rbp-24h]
  __int128 v42; // [rsp+50h] [rbp-20h] BYREF
  __int64 v43; // [rsp+60h] [rbp-10h]

  v37 = 0;
  *a2 = 0;
  v3 = SHIWORD(a3);
  v4 = a3;
  v43 = 0LL;
  v6 = *a1;
  v42 = 0LL;
  if ( *(_QWORD *)(*v6 + 24) )
  {
    v8 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v42 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v42;
    *((_QWORD *)&v42 + 1) = v8;
    HMLockObject(v8);
    v10 = xxxSendMessage(
            *(_QWORD *)(**a1 + 24),
            0x1EBu,
            (unsigned __int64)&v37,
            (struct _LARGE_STRING *)(v4 | ((unsigned __int16)v3 << 16)));
    ThreadUnlock1(v11);
    if ( IsMFMWFPWindow(v10) )
    {
      v13 = HMValidateHandleNoSecure(v12, 1);
      v10 = v13;
      if ( !v13 )
        goto LABEL_8;
      v14 = safe_cast_fnid_to_PMENUWND(v13);
      if ( !v14 )
        return 0LL;
      v15 = *(_QWORD *)(v14 + 8);
      if ( !v15 || !*(_QWORD *)(v15 + 40) )
        return 0LL;
    }
    if ( v10 )
      goto LABEL_41;
  }
LABEL_8:
  v16 = **a1;
  if ( (*(_DWORD *)v16 & 1) == 0 )
  {
    v10 = *(_QWORD *)(v16 + 16);
    LODWORD(v38) = (__int16)v4;
    HIDWORD(v38) = v3;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL), v38) )
      return 0LL;
LABEL_34:
    v36 = *a1;
    v38 = __PAIR64__(v18, v19);
    v37 = MNItemHitTest(*(_QWORD *)(*v36 + 40), v10, __PAIR64__(v18, v19));
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v35 = v37;
      if ( v37 != -1 )
      {
        v10 = 0xFFFFFFFFLL;
        goto LABEL_42;
      }
      if ( *(_QWORD *)(**a1 + 48) )
      {
        v35 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v38);
        goto LABEL_38;
      }
      return 0LL;
    }
LABEL_41:
    v35 = v37;
    goto LABEL_42;
  }
  v10 = *(_QWORD *)(v16 + 8);
  if ( !v10 )
    return 0LL;
  v17 = *a1;
  v18 = v3;
  v19 = (__int16)v4;
  LODWORD(v38) = (__int16)v4;
  HIDWORD(v38) = v3;
  if ( (*(_DWORD *)*v17 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
    goto LABEL_34;
  }
  if ( !(unsigned int)HasCaptionIcon(v10) )
    return 0LL;
  v20 = *(_QWORD *)(v10 + 40);
  if ( (*(_BYTE *)(v20 + 31) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v20 + 88), v38) )
      return 0xFFFFFFFFLL;
    return 0LL;
  }
  v22 = *(_DWORD *)(v20 + 288) & 0xF;
  if ( v22 == 3 )
  {
    WindowDpiLastNotify = (*(_DWORD *)(v20 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v20 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
  }
  else if ( !v22
         && (v24 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
  }
  DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
  v26 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 28LL),
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 24LL),
                          v27,
                          v28,
                          WindowDpiLastNotify);
  v30 = *(_QWORD *)(v10 + 40);
  v31 = *(_DWORD *)(v30 + 88);
  v32 = WindowBordersForDpi + *(_DWORD *)(v30 + 92) + v26;
  v39[1] = WindowBordersForDpi + *(_DWORD *)(v30 + 92);
  v33 = (*(_BYTE *)(v30 + 26) & 0x40) == 0;
  v39[0] = v31 + WindowBordersForDpi;
  v40 = v31 + WindowBordersForDpi + DpiDependentMetric;
  v41 = v32;
  if ( !v33 )
  {
    v40 = *(_DWORD *)(v30 + 96) - WindowBordersForDpi;
    v39[0] = v40 - DpiDependentMetric;
  }
  if ( PtInRect(v39, v38) )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(**a1 + 48) )
    return 0LL;
  v35 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v34);
LABEL_38:
  if ( v35 == -1 )
    return 0LL;
  v10 = 4294967291LL;
LABEL_42:
  *a2 = v35;
  return v10;
}
