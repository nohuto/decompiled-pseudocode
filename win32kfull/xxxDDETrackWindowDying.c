_UNKNOWN **__fastcall xxxDDETrackWindowDying(__int64 *a1, _UNKNOWN **a2)
{
  char v3; // dl
  _UNKNOWN **result; // rax
  __int64 v5; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r8
  _DWORD *v11; // rdx
  int v12; // ecx
  BOOL v13; // eax
  struct tagFREELIST *v14; // rdi
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagDDECONV *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+60h] [rbp-28h]
  __int128 v28; // [rsp+68h] [rbp-20h] BYREF
  __int64 v29; // [rsp+78h] [rbp-10h]

  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v5 = *a1;
    else
      v5 = 0LL;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qq(
                            (__int64)WPP_GLOBAL_Control->AttachedDevice,
                            v3,
                            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                            (__int64)gFullLog,
                            4u,
                            0xEu,
                            0x16u,
                            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
                            v5,
                            a2,
                            v26,
                            v27,
                            v28,
                            v29);
  }
  if ( a2 )
  {
    do
    {
      ThreadLock(a2[3], &v26);
      ThreadLockAlways(a2, &v28);
      if ( ((_DWORD)a2[10] & 2) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u
          || (*(_DWORD *)(ThreadWin32Thread + 648) & 0x20) == 0
          || (v7 = a2[6]) == 0LL
          || (v8 = v7[2], *(_DWORD *)(v8 + 632) > 0x400u)
          || (*(_DWORD *)(v8 + 648) & 0x20) == 0 )
        {
          v9 = (unsigned __int64 *)a2[5];
          if ( v9 )
            v10 = *v9;
          else
            v10 = 0LL;
          PostMessage((unsigned __int64)a2[6], 0x3E1u, v10, 0LL);
        }
      }
      v11 = a2[4];
      if ( v11 )
      {
        v12 = v11[20];
        v11[20] = v12 | 6;
        v13 = (v12 & 0xA) != 0;
      }
      else
      {
        v13 = 1;
      }
      v14 = (struct tagFREELIST *)a2[9];
      a2[9] = 0LL;
      v15 = *((_DWORD *)a2 + 20);
      if ( (v15 & 2) != 0 && v13 || (v15 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(a2) + 25) & 1) == 0 )
          a2[4] = (_UNKNOWN *)xxxFreeDdeConv((struct tagDDECONV *)a2[4]);
        v19 = (struct tagDDECONV *)ThreadUnlock1(v17, v16, v18);
        if ( v19 )
          xxxFreeDdeConv(v19);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)a2);
        ThreadUnlock1(v21, v20, v22);
      }
      xxxFreeListFree(v14);
      result = (_UNKNOWN **)ThreadUnlock1(v24, v23, v25);
      a2 = result;
    }
    while ( result );
  }
  return result;
}
