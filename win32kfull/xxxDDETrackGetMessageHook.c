struct _HANDLEENTRY *__fastcall xxxDDETrackGetMessageHook(__int64 *a1)
{
  __int64 v2; // rcx
  struct _HANDLEENTRY *result; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  struct tagWND *v7; // r14
  bool v8; // bl
  struct tagWND *v9; // rax
  char v10; // bl
  struct tagDDECONV *DdeConv; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  struct tagDDECONV *v15; // r14
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  int v18; // edx
  struct tagFREELIST *v19; // rcx
  char v20; // dl
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct tagDDECONV *v26; // rax
  __int64 ThreadWin32Thread; // rax
  struct _HANDLEENTRY *v28; // r14
  int v29; // ebx
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // bl
  void *v38; // rdi
  char v39; // bl
  void *v40; // rdi
  __int128 v41; // [rsp+58h] [rbp-19h] BYREF
  __int64 v42; // [rsp+68h] [rbp-9h]
  __int128 v43; // [rsp+70h] [rbp-1h] BYREF
  __int64 v44; // [rsp+80h] [rbp+Fh]
  __int128 v45; // [rsp+88h] [rbp+17h] BYREF
  __int64 v46; // [rsp+98h] [rbp+27h]
  void *v47; // [rsp+D8h] [rbp+67h] BYREF

  v47 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  if ( *((_DWORD *)a1 + 2) == 993 )
  {
    v2 = *a1;
    v41 = 0LL;
    v42 = 0LL;
    result = (struct _HANDLEENTRY *)ValidateHwnd(v2);
    v47 = result;
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
                                        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
      }
      return result;
    }
    ThreadLockAlways(result, &v41);
    v9 = (struct tagWND *)HMValidateCatHandleNoSecure(a1[2]);
    v10 = 1;
    if ( v9 )
    {
      DdeConv = FindDdeConv(v7, v9);
      v15 = DdeConv;
      if ( !DdeConv )
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v10 = 0;
        }
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (struct _HANDLEENTRY *)ThreadUnlock1(v16, v12, v13);
        v17 = 18;
        goto LABEL_53;
      }
      v18 = *((_DWORD *)DdeConv + 20);
      if ( (v18 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        ThreadLockAlways(DdeConv, &v43);
        v19 = (struct tagFREELIST *)*((_QWORD *)v15 + 9);
        if ( v19 )
        {
          *((_QWORD *)v15 + 9) = 0LL;
          xxxFreeListFree(v19);
        }
        v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( (*((_DWORD *)v15 + 20) & 1) != 0 )
            v21 = *a1;
          else
            v21 = a1[2];
          v22 = a1 + 2;
          if ( (*((_DWORD *)v15 + 20) & 1) == 0 )
            v22 = a1;
          WPP_RECORDER_AND_TRACE_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v20,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0xEu,
            0x13u,
            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
            *v22,
            v21,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v15) + 25) & 1) == 0 )
          *((_QWORD *)v15 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v15 + 4));
        v26 = (struct tagDDECONV *)ThreadUnlock1(v24, v23, v25);
        if ( v26 )
          xxxFreeDdeConv(v26);
      }
      else
      {
        *((_DWORD *)DdeConv + 20) = v18 | 8;
      }
      v7 = (struct tagWND *)v47;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x9900u
      && _bittest((const signed __int32 *)(ThreadWin32Thread + 648), 0xDu) )
    {
      xxxCleanupDdeConv(v7);
      return (struct _HANDLEENTRY *)ThreadUnlock1(v16, v12, v13);
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (struct _HANDLEENTRY *)ThreadUnlock1(v16, v12, v13);
    v17 = 17;
LABEL_53:
    LOBYTE(v12) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v16->AttachedDevice,
      v12,
      v13,
      v14,
      4,
      14,
      v17,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
    return (struct _HANDLEENTRY *)ThreadUnlock1(v16, v12, v13);
  }
  result = (struct _HANDLEENTRY *)HMValidateHandleNoRipNoIL(a1[3]);
  v28 = result;
  if ( result )
  {
    v29 = *((_DWORD *)result + 16);
    ThreadLockAlways(result, &v45);
    v32 = xxxCopyDDEOut(*((struct tagINTDDEINFO **)v28 + 7), &v47, v30, v31);
    a1[3] = v32;
    if ( !v32 )
      *((_DWORD *)a1 + 2) = 993;
    result = (struct _HANDLEENTRY *)ThreadUnlock1(v34, v33, v35);
    if ( result )
    {
      if ( (v29 & 0x200) != 0 )
      {
        return FreeDdeXact((void **)v28);
      }
      else if ( *((_QWORD *)v28 + 5) )
      {
        v39 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v40 = v47;
        if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          result = (struct _HANDLEENTRY *)WPP_RECORDER_AND_TRACE_SF_q(
                                            (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                            v39,
                                            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                                            v36,
                                            4u,
                                            0xEu,
                                            0x15u,
                                            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
                                            v47);
        *((_QWORD *)v28 + 6) = v40;
      }
      else
      {
        v37 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v38 = v47;
        if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          result = (struct _HANDLEENTRY *)WPP_RECORDER_AND_TRACE_SF_q(
                                            (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                            v37,
                                            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                                            v36,
                                            4u,
                                            0xEu,
                                            0x14u,
                                            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
                                            v47);
        *((_QWORD *)v28 + 5) = v38;
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
