/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C021C734
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0057C00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C022FC80 (SfnSENTDDEMSG.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00E0FC0 (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021A698 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C021B34C (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021B5AC (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BB88 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C021C4B0 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C021D188 (xxxFreeDdeConv.c)
 *     HMValidateCatHandleNoSecure @ 0x1C025CFEC (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C025D0A0 (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  struct tagWND *v6; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 *v8; // r12
  struct tagWND *v9; // rax
  struct tagDDECONV *DdeConv; // rax
  int v11; // edx
  __int64 v12; // rcx
  struct tagDDECONV *v13; // rdi
  int v14; // r9d
  int v15; // edx
  __int64 v16; // rax
  struct tagFREELIST *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct tagDDECONV *v20; // rax
  __int64 v21; // rdi
  int v22; // ebx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // edx
  int v29; // ecx
  void *v30; // rsi
  void *v31; // rsi
  __int128 v32; // [rsp+40h] [rbp-19h] BYREF
  __int64 v33; // [rsp+50h] [rbp-9h]
  _QWORD v34[3]; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v35[4]; // [rsp+70h] [rbp+17h] BYREF
  void *v36; // [rsp+C0h] [rbp+67h] BYREF

  v36 = 0LL;
  v35[2] = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    v2 = *(_QWORD *)a1;
    v34[2] = 0LL;
    result = ValidateHwnd(v2);
    v6 = (struct tagWND *)result;
    if ( !result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        return WPP_RECORDER_SF_(v5, v4, 14, 16, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      }
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v34[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v34;
    v34[1] = v6;
    HMLockObject(v6);
    v8 = (__int64 *)(a1 + 16);
    v9 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v9 )
    {
      DdeConv = FindDdeConv(v6, v9);
      v13 = DdeConv;
      if ( !DdeConv )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 18;
LABEL_29:
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_(v12, v11, 14, v14, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
          return ThreadUnlock1(v12);
        }
        return ThreadUnlock1(v12);
      }
      v15 = *((_DWORD *)DdeConv + 20);
      if ( (v15 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v32 = *(_QWORD *)(v16 + 416);
        *(_QWORD *)(v16 + 416) = &v32;
        *((_QWORD *)&v32 + 1) = v13;
        HMLockObject(v13);
        v17 = (struct tagFREELIST *)*((_QWORD *)v13 + 9);
        if ( v17 )
        {
          *((_QWORD *)v13 + 9) = 0LL;
          xxxFreeListFree(v17);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( (*((_DWORD *)v13 + 20) & 1) != 0 )
            v18 = *(_QWORD *)a1;
          else
            v18 = *v8;
          if ( (*((_DWORD *)v13 + 20) & 1) == 0 )
            v8 = (__int64 *)a1;
          WPP_RECORDER_SF_qq(v18, 4u, 0xEu, 0x13u, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, *v8, v18);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v13) + 25) & 1) == 0 )
          *((_QWORD *)v13 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v13 + 4));
        v20 = (struct tagDDECONV *)ThreadUnlock1(v19);
        if ( v20 )
          xxxFreeDdeConv(v20);
      }
      else
      {
        *((_DWORD *)DdeConv + 20) = v15 | 8;
      }
    }
    if ( (GetAppCompatFlags2(0x9900u) & 0x2000) != 0 )
    {
      xxxCleanupDdeConv(v6);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 17;
      goto LABEL_29;
    }
    return ThreadUnlock1(v12);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v21 = result;
  if ( result )
  {
    v22 = *(_DWORD *)(result + 64);
    v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v35[0] = *(_QWORD *)(v23 + 416);
    *(_QWORD *)(v23 + 416) = v35;
    v35[1] = v21;
    HMLockObject(v21);
    v26 = xxxCopyDDEOut(*(struct tagINTDDEINFO **)(v21 + 56), &v36, v24, v25);
    *(_QWORD *)(a1 + 24) = v26;
    if ( !v26 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v27);
    if ( result )
    {
      if ( (v22 & 0x200) != 0 )
      {
        return FreeDdeXact(v21);
      }
      else if ( *(_QWORD *)(v21 + 40) )
      {
        v31 = v36;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          result = WPP_RECORDER_SF_q(
                     v29,
                     v28,
                     14,
                     21,
                     (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                     (char)v36);
        }
        *(_QWORD *)(v21 + 48) = v31;
      }
      else
      {
        v30 = v36;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          result = WPP_RECORDER_SF_q(
                     v29,
                     v28,
                     14,
                     20,
                     (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                     (char)v36);
        }
        *(_QWORD *)(v21 + 40) = v30;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
