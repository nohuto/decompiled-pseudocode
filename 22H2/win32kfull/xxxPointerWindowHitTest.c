/*
 * XREFs of xxxPointerWindowHitTest @ 0x1C0217734
 * Callers:
 *     EditionPointerWindowHitTest @ 0x1C0216B50 (EditionPointerWindowHitTest.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C006A378 (IsThreadDesktopComposed.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0214CE4 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0214E00 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02166DC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0216A54 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C025F244 (TouchTargetingCreateContact.c)
 */

HWND __fastcall xxxPointerWindowHitTest(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        struct tagPOINT *a11)
{
  HWND v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rdi
  struct tagRECT *v17; // rcx
  __int128 v18; // xmm0
  int v19; // eax
  struct tagTHREADINFO *v20; // r14
  __int64 v21; // r8
  __int64 v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm0
  struct tagWND *v25; // rax
  void *v26; // rcx
  struct tagPOINT v29; // [rsp+68h] [rbp-98h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v31; // [rsp+80h] [rbp-80h] BYREF
  __int128 v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h]
  struct tagRECT v36; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-30h] BYREF
  int v38; // [rsp+E0h] [rbp-20h] BYREF
  struct tagPOINT v39; // [rsp+E4h] [rbp-1Ch]
  __int128 v40; // [rsp+ECh] [rbp-14h]
  __int128 v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+10Ch] [rbp+Ch]

  v29 = (struct tagPOINT)a1;
  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, a9 + 8) )
  {
    v14 = Win32AllocPool(192LL, 1920103253LL);
    if ( v14 )
    {
      v16 = Win32AllocPool(184LL, 1920103253LL);
      if ( v16 )
      {
        v35 = 0LL;
        v34 = 0LL;
        v33 = 0LL;
        v32 = 0LL;
        PushW32ThreadLock(v14, &v34, (__int64)Win32FreePool);
        PushW32ThreadLock(v16, &v32, (__int64)Win32FreePool);
        if ( gSqmIsOptedIn )
          WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
        *a11 = 0LL;
        *(_QWORD *)(v14 + 184) = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        *(_QWORD *)&v30 = 0LL;
        v38 = 0;
        if ( (unsigned int)_GetDeviceRects(a9 + 8, &v36, &v37) )
        {
          v30 = v37;
          v31 = v36;
          _SetHimetricToPixelRatio(&v31, &v30, v14);
          v17 = &v36;
        }
        else
        {
          v17 = (struct tagRECT *)v30;
        }
        v18 = *(_OWORD *)(a9 + 112);
        v19 = *(_DWORD *)(a9 + 108);
        v39 = a6;
        v40 = v18;
        v41 = v18;
        if ( (v19 & 2) != 0 )
          v42 = *(_DWORD *)(a9 + 144);
        else
          v42 = 0;
        TouchTargetingCreateContact(&v38, v17, 1LL, v14);
        v20 = (struct tagTHREADINFO *)v29;
        *(_DWORD *)v16 = a3;
        *(_QWORD *)(v16 + 8) = a4;
        *(_QWORD *)(v16 + 16) = a5;
        *(_QWORD *)(v16 + 24) = a10;
        *(_DWORD *)(v16 + 32) = *a7;
        *(_DWORD *)(v16 + 36) = a8;
        *(_QWORD *)(v16 + 40) = v14;
        *(struct tagPOINT *)(v16 + 48) = *a11;
        *(_QWORD *)(v16 + 56) = 0LL;
        *(_DWORD *)(v16 + 64) = 0;
        *(_DWORD *)(v16 + 84) = IsThreadDesktopComposed((__int64)v20);
        *(_DWORD *)(v16 + 88) = v21;
        *(_QWORD *)(v16 + 96) = v21;
        *(_QWORD *)(v16 + 168) = v21;
        *(_QWORD *)(v16 + 176) = v21;
        v29 = a6;
        v22 = Win32AllocPool(192LL, 1920103253LL);
        *(_QWORD *)&v30 = v22;
        if ( v22 )
        {
          v23 = *(_OWORD **)(v16 + 40);
          *(_OWORD *)v22 = *v23;
          *(_OWORD *)(v22 + 16) = v23[1];
          *(_OWORD *)(v22 + 32) = v23[2];
          *(_OWORD *)(v22 + 48) = v23[3];
          *(_OWORD *)(v22 + 64) = v23[4];
          *(_OWORD *)(v22 + 80) = v23[5];
          *(_OWORD *)(v22 + 96) = v23[6];
          v24 = v23[7];
          v23 += 8;
          *(_OWORD *)(v22 + 112) = v24;
          *(_OWORD *)(v22 + 128) = *v23;
          *(_OWORD *)(v22 + 144) = v23[1];
          *(_OWORD *)(v22 + 160) = v23[2];
          *(_OWORD *)(v22 + 176) = v23[3];
          v25 = TopLevelTouchTarget(a2, (struct tagTOUCHTARGETINGCONTACT *)v22, &v29, a11, *(_DWORD *)(v16 + 84));
          v26 = (void *)v30;
          *(_QWORD *)(v16 + 168) = v25;
          Win32FreePool(v26);
        }
        v31 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
        xxxWindowHitTestWithTargeting((unsigned __int64)a2, a6, v16, &v31, 0);
        if ( *(_DWORD *)(v16 + 180) )
        {
          v13 = xxxWindowHitTestWithoutTargeting(v20, a2, a3, a4, a5, a6, a7, a8);
        }
        else
        {
          *a7 = *(_DWORD *)(v16 + 32);
          *a11 = *(struct tagPOINT *)(v16 + 48);
          v13 = *(HWND *)(v16 + 56);
          TTSqm(*(struct tagPOINT *)(v16 + 48), (const struct tagTOUCHTARGETINGCONTACT *)v14);
        }
        PopAndFreeAlwaysW32ThreadLock((__int64)&v32);
        PopAndFreeAlwaysW32ThreadLock((__int64)&v34);
        goto LABEL_25;
      }
      Win32FreePool((void *)v14);
    }
    return 0LL;
  }
  if ( gSqmIsOptedIn && *(_DWORD *)(a9 + 8) == 2 && (*(_DWORD *)(a9 + 20) & 0x10000) != 0 )
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 0LL);
  v13 = xxxWindowHitTestWithoutTargeting(a1, a2, a3, a4, a5, a6, a7, a8);
LABEL_25:
  EtwTraceTouchTargetingWindowHitTestStop();
  return v13;
}
