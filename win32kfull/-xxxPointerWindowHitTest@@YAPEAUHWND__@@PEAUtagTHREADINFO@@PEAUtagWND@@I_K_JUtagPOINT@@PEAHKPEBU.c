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
  HWND v14; // rbx
  _QWORD *v15; // rsi
  __int64 v17; // rdi
  __int128 *v18; // rcx
  __int128 v19; // xmm0
  int v20; // eax
  struct tagTHREADINFO *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rax
  _OWORD *v24; // rcx
  __int128 v25; // xmm0
  struct tagWND *v26; // rax
  void *v27; // rcx
  const struct tagPOINTEREVENTINT *v28; // [rsp+40h] [rbp-C0h]
  struct tagPOINT *v29; // [rsp+48h] [rbp-B8h]
  struct tagPOINT v32; // [rsp+68h] [rbp-98h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  __int128 v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v41[3]; // [rsp+E0h] [rbp-20h] BYREF

  v32 = (struct tagPOINT)a1;
  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, (char *)a9 + 8) )
  {
    v15 = (_QWORD *)Win32AllocPoolZInit(192LL, 1920103253LL);
    if ( v15 )
    {
      v17 = Win32AllocPoolZInit(184LL, 1920103253LL);
      if ( v17 )
      {
        v38 = 0LL;
        v37 = 0LL;
        v36 = 0LL;
        v35 = 0LL;
        PushW32ThreadLock((__int64)v15, &v37, (__int64)Win32FreePool);
        PushW32ThreadLock(v17, &v35, (__int64)Win32FreePool);
        v39 = 0LL;
        *a11 = 0LL;
        v15[23] = 0LL;
        v40 = 0LL;
        *(_QWORD *)&v33 = 0LL;
        memset(v41, 0, sizeof(v41));
        if ( (unsigned int)_GetDeviceRects((char *)a9 + 8, &v39, &v40) )
        {
          v33 = v40;
          v34 = v39;
          _SetHimetricToPixelRatio(&v34, &v33, v15);
          v18 = &v39;
        }
        else
        {
          v18 = (__int128 *)v33;
        }
        v19 = *((_OWORD *)a9 + 7);
        v20 = *((_DWORD *)a9 + 27);
        *(struct tagPOINT *)((char *)v41 + 4) = a6;
        *(_OWORD *)((char *)v41 + 12) = v19;
        *(_OWORD *)((char *)&v41[1] + 12) = v19;
        if ( (v20 & 2) != 0 )
          HIDWORD(v41[2]) = *((_DWORD *)a9 + 36);
        else
          HIDWORD(v41[2]) = 0;
        TouchTargetingCreateContact(v41, v18, 1LL, v15);
        *(_QWORD *)(v17 + 8) = a4;
        *(_QWORD *)(v17 + 16) = a5;
        *(_QWORD *)(v17 + 24) = a10;
        *(_DWORD *)v17 = a3;
        *(_DWORD *)(v17 + 32) = *a7;
        *(_QWORD *)(v17 + 40) = v15;
        v21 = (struct tagTHREADINFO *)v32;
        *(_DWORD *)(v17 + 36) = a8;
        *(struct tagPOINT *)(v17 + 48) = *a11;
        *(_QWORD *)(v17 + 56) = 0LL;
        *(_DWORD *)(v17 + 64) = 0;
        *(_DWORD *)(v17 + 84) = IsThreadDesktopComposed((__int64)v21);
        *(_DWORD *)(v17 + 88) = v22;
        *(_QWORD *)(v17 + 96) = v22;
        *(_QWORD *)(v17 + 168) = v22;
        *(_QWORD *)(v17 + 176) = v22;
        v32 = a6;
        v23 = Win32AllocPoolZInit(192LL, 1920103253LL);
        *(_QWORD *)&v33 = v23;
        if ( v23 )
        {
          v24 = *(_OWORD **)(v17 + 40);
          *(_OWORD *)v23 = *v24;
          *(_OWORD *)(v23 + 16) = v24[1];
          *(_OWORD *)(v23 + 32) = v24[2];
          *(_OWORD *)(v23 + 48) = v24[3];
          *(_OWORD *)(v23 + 64) = v24[4];
          *(_OWORD *)(v23 + 80) = v24[5];
          *(_OWORD *)(v23 + 96) = v24[6];
          v25 = v24[7];
          v24 += 8;
          *(_OWORD *)(v23 + 112) = v25;
          *(_OWORD *)(v23 + 128) = *v24;
          *(_OWORD *)(v23 + 144) = v24[1];
          *(_OWORD *)(v23 + 160) = v24[2];
          *(_OWORD *)(v23 + 176) = v24[3];
          v26 = TopLevelTouchTarget(a2, (struct tagTOUCHTARGETINGCONTACT *)v23, &v32, a11, *(_DWORD *)(v17 + 84));
          v27 = (void *)v33;
          *(_QWORD *)(v17 + 168) = v26;
          Win32FreePool(v27);
        }
        v34 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
          a2,
          a6,
          v17,
          &v34,
          0);
        if ( *(_DWORD *)(v17 + 180) )
        {
          v14 = xxxWindowHitTestWithoutTargeting(v21, a2, a3, a4, a5, a6, a7, a8, v28, v29);
        }
        else
        {
          *a7 = *(_DWORD *)(v17 + 32);
          *a11 = *(struct tagPOINT *)(v17 + 48);
          v14 = *(HWND *)(v17 + 56);
        }
        PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
        PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
        goto LABEL_19;
      }
      Win32FreePool(v15);
    }
    return 0LL;
  }
  v14 = xxxWindowHitTestWithoutTargeting(a1, a2, a3, a4, a5, a6, a7, a8, v28, v29);
LABEL_19:
  EtwTraceTouchTargetingWindowHitTestStop();
  return v14;
}
