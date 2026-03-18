/*
 * XREFs of ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1C0205774
 * Callers:
 *     EditionPointerWindowHitTest @ 0x1C0207030 (EditionPointerWindowHitTest.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsThreadDesktopComposed @ 0x1C006DA68 (IsThreadDesktopComposed.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0204BEC (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0204D08 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0206C64 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C025C52C (TouchTargetingCreateContact.c)
 */

HWND __fastcall xxxPointerWindowHitTest(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8,
        const struct tagPOINTEREVENTINT *a9,
        unsigned __int64 a10,
        struct tagPOINT *a11)
{
  HWND v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rdi
  __int128 *v17; // rcx
  __int128 v18; // xmm0
  int v19; // eax
  struct tagTHREADINFO *v20; // r14
  __int64 v21; // r8
  __int64 v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm0
  struct tagWND *v25; // rax
  __int64 v26; // rcx
  const struct tagPOINTEREVENTINT *v27; // [rsp+40h] [rbp-C0h]
  struct tagPOINT *v28; // [rsp+48h] [rbp-B8h]
  struct tagPOINT v31; // [rsp+68h] [rbp-98h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int128 v36; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int128 v38; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-30h] BYREF
  int v40; // [rsp+E0h] [rbp-20h] BYREF
  struct tagPOINT v41; // [rsp+E4h] [rbp-1Ch]
  __int128 v42; // [rsp+ECh] [rbp-14h]
  __int128 v43; // [rsp+FCh] [rbp-4h]
  int v44; // [rsp+10Ch] [rbp+Ch]

  v31 = (struct tagPOINT)a1;
  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, (char *)a9 + 8) )
  {
    v14 = Win32AllocPoolZInit(192LL, 1920103253LL);
    if ( v14 )
    {
      v16 = Win32AllocPoolZInit(184LL, 1920103253LL);
      if ( v16 )
      {
        v37 = 0LL;
        v36 = 0LL;
        v35 = 0LL;
        v34 = 0LL;
        PushW32ThreadLock(v14, &v36, (__int64)Win32FreePool);
        PushW32ThreadLock(v16, &v34, (__int64)Win32FreePool);
        if ( gSqmIsOptedIn )
          WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
        *a11 = 0LL;
        *(_QWORD *)(v14 + 184) = 0LL;
        v38 = 0LL;
        v39 = 0LL;
        *(_QWORD *)&v32 = 0LL;
        v40 = 0;
        if ( (unsigned int)_GetDeviceRects((char *)a9 + 8, &v38, &v39) )
        {
          v32 = v39;
          v33 = v38;
          _SetHimetricToPixelRatio(&v33, &v32, v14);
          v17 = &v38;
        }
        else
        {
          v17 = (__int128 *)v32;
        }
        v18 = *((_OWORD *)a9 + 7);
        v19 = *((_DWORD *)a9 + 27);
        v41 = a6;
        v42 = v18;
        v43 = v18;
        if ( (v19 & 2) != 0 )
          v44 = *((_DWORD *)a9 + 36);
        else
          v44 = 0;
        TouchTargetingCreateContact(&v40, v17, 1LL, v14);
        v20 = (struct tagTHREADINFO *)v31;
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
        v31 = a6;
        v22 = Win32AllocPoolZInit(192LL, 1920103253LL);
        *(_QWORD *)&v32 = v22;
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
          v25 = TopLevelTouchTarget(a2, (struct tagTOUCHTARGETINGCONTACT *)v22, &v31, a11, *(_DWORD *)(v16 + 84));
          v26 = v32;
          *(_QWORD *)(v16 + 168) = v25;
          Win32FreePool(v26);
        }
        v33 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
          a2,
          a6,
          v16,
          &v33,
          0);
        if ( *(_DWORD *)(v16 + 180) )
        {
          v13 = xxxWindowHitTestWithoutTargeting(v20, a2, a3, a4, a5, a6, a7, a8, v27, v28);
        }
        else
        {
          *a7 = *(_DWORD *)(v16 + 32);
          *a11 = *(struct tagPOINT *)(v16 + 48);
          v13 = *(HWND *)(v16 + 56);
          TTSqm(*(struct tagPOINT *)(v16 + 48), (const struct tagTOUCHTARGETINGCONTACT *)v14);
        }
        PopAndFreeAlwaysW32ThreadLock((__int64)&v34);
        PopAndFreeAlwaysW32ThreadLock((__int64)&v36);
        goto LABEL_25;
      }
      Win32FreePool(v14);
    }
    return 0LL;
  }
  if ( gSqmIsOptedIn && *((_DWORD *)a9 + 2) == 2 && (*((_DWORD *)a9 + 5) & 0x10000) != 0 )
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 0LL);
  v13 = xxxWindowHitTestWithoutTargeting(a1, a2, a3, a4, a5, a6, a7, a8, v27, v28);
LABEL_25:
  EtwTraceTouchTargetingWindowHitTestStop();
  return v13;
}
