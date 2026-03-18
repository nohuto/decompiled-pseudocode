/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C0217AA8
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0057600 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     SfnSENTDDEMSG @ 0x1C022A060 (SfnSENTDDEMSG.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0214F2C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C0216060 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C02162C8 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0216BBC (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C02177D0 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C0218788 (xxxFreeDdeConv.c)
 *     HMValidateCatHandleNoSecure @ 0x1C025A2D0 (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C025A384 (HMValidateHandleNoRipNoIL.c)
 */

struct _HANDLEENTRY *__fastcall xxxDDETrackGetMessageHook(__int64 *a1)
{
  __int64 v2; // rcx
  struct _HANDLEENTRY *result; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  struct tagWND *v7; // r14
  bool v8; // bl
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v10; // rax
  char v11; // bl
  struct tagDDECONV *DdeConv; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  struct tagDDECONV *v16; // r14
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  struct tagFREELIST *v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct tagDDECONV *v28; // rax
  __int64 v29; // rax
  struct _HANDLEENTRY *v30; // r14
  int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  int v40; // r8d
  int v41; // r9d
  bool v42; // bl
  void *v43; // rdi
  bool v44; // bl
  void *v45; // rdi
  __int64 v46; // [rsp+50h] [rbp-21h]
  __int128 v47; // [rsp+58h] [rbp-19h] BYREF
  __int64 v48; // [rsp+68h] [rbp-9h]
  _QWORD v49[3]; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v50[4]; // [rsp+88h] [rbp+17h] BYREF
  void *v51; // [rsp+D8h] [rbp+67h] BYREF

  v51 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v50[2] = 0LL;
  if ( *((_DWORD *)a1 + 2) == 993 )
  {
    v2 = *a1;
    v49[2] = 0LL;
    result = (struct _HANDLEENTRY *)ValidateHwnd(v2);
    v51 = result;
    v7 = result;
    if ( !result )
    {
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = v8;
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        return (struct _HANDLEENTRY *)WPP_RECORDER_AND_TRACE_SF_(
                                        WPP_GLOBAL_Control->AttachedDevice,
                                        v4,
                                        v5,
                                        v6,
                                        4,
                                        14,
                                        16,
                                        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
      }
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v49[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v49;
    v49[1] = v7;
    HMLockObject(v7);
    v10 = (struct tagWND *)HMValidateCatHandleNoSecure(a1[2]);
    v11 = 1;
    if ( v10 )
    {
      DdeConv = FindDdeConv(v7, v10);
      v16 = DdeConv;
      if ( !DdeConv )
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v11 = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (struct _HANDLEENTRY *)ThreadUnlock1(v17, v13, v14);
        v18 = 18;
        goto LABEL_53;
      }
      v19 = *((_DWORD *)DdeConv + 20);
      if ( (v19 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v47 = *(_QWORD *)(v20 + 416);
        *(_QWORD *)(v20 + 416) = &v47;
        *((_QWORD *)&v47 + 1) = v16;
        HMLockObject(v16);
        v22 = (struct tagFREELIST *)*((_QWORD *)v16 + 9);
        if ( v22 )
        {
          *((_QWORD *)v16 + 9) = 0LL;
          xxxFreeListFree(v22);
        }
        LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( (*((_DWORD *)v16 + 20) & 1) != 0 )
            v23 = *a1;
          else
            v23 = a1[2];
          v46 = v23;
          v24 = a1 + 2;
          if ( (*((_DWORD *)v16 + 20) & 1) == 0 )
            v24 = a1;
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v21,
            v23,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            14,
            19,
            (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
            *v24,
            v46);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v16) + 25) & 1) == 0 )
          *((_QWORD *)v16 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v16 + 4));
        v28 = (struct tagDDECONV *)ThreadUnlock1(v26, v25, v27);
        if ( v28 )
          xxxFreeDdeConv(v28);
      }
      else
      {
        *((_DWORD *)DdeConv + 20) = v19 | 8;
      }
      v7 = (struct tagWND *)v51;
    }
    v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(v29 + 632) <= 0x9900u && (*(_DWORD *)(v29 + 648) & 0x2000) != 0 )
    {
      xxxCleanupDdeConv(v7);
      return (struct _HANDLEENTRY *)ThreadUnlock1(v17, v13, v14);
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (struct _HANDLEENTRY *)ThreadUnlock1(v17, v13, v14);
    v18 = 17;
LABEL_53:
    LOBYTE(v13) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      v17->AttachedDevice,
      v13,
      v14,
      v15,
      4,
      14,
      v18,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
    return (struct _HANDLEENTRY *)ThreadUnlock1(v17, v13, v14);
  }
  result = (struct _HANDLEENTRY *)HMValidateHandleNoRipNoIL(a1[3]);
  v30 = result;
  if ( result )
  {
    v31 = *((_DWORD *)result + 16);
    v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v50[0] = *(_QWORD *)(v32 + 416);
    *(_QWORD *)(v32 + 416) = v50;
    v50[1] = v30;
    HMLockObject(v30);
    v35 = xxxCopyDDEOut(*((struct tagINTDDEINFO **)v30 + 7), &v51, v33, v34);
    a1[3] = v35;
    if ( !v35 )
      *((_DWORD *)a1 + 2) = 993;
    result = (struct _HANDLEENTRY *)ThreadUnlock1(v37, v36, v38);
    if ( result )
    {
      if ( (v31 & 0x200) != 0 )
      {
        return FreeDdeXact(v30);
      }
      else if ( *((_QWORD *)v30 + 5) )
      {
        v44 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v45 = v51;
        if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = v44;
          LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          result = (struct _HANDLEENTRY *)WPP_RECORDER_AND_TRACE_SF_q(
                                            WPP_GLOBAL_Control->AttachedDevice,
                                            v39,
                                            v40,
                                            v41,
                                            4,
                                            14,
                                            21,
                                            (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
                                            (char)v51);
        }
        *((_QWORD *)v30 + 6) = v45;
      }
      else
      {
        v42 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v43 = v51;
        if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = v42;
          LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          result = (struct _HANDLEENTRY *)WPP_RECORDER_AND_TRACE_SF_q(
                                            WPP_GLOBAL_Control->AttachedDevice,
                                            v39,
                                            v40,
                                            v41,
                                            4,
                                            14,
                                            20,
                                            (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
                                            (char)v51);
        }
        *((_QWORD *)v30 + 5) = v43;
      }
    }
  }
  else
  {
    a1[3] = 0LL;
    *((_DWORD *)a1 + 2) = 0;
  }
  return result;
}
