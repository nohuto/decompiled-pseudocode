/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C0218544
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021553C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0216BBC (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C0218788 (xxxFreeDdeConv.c)
 */

_UNKNOWN **__fastcall xxxDDETrackWindowDying(_QWORD *a1, _UNKNOWN **a2)
{
  _UNKNOWN **v2; // rbx
  _UNKNOWN **result; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // rdx
  int v11; // ecx
  BOOL v12; // eax
  struct tagFREELIST *v13; // rdi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagDDECONV *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD v25[3]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v26; // [rsp+68h] [rbp-20h] BYREF
  __int64 v27; // [rsp+78h] [rbp-10h]

  v25[2] = 0LL;
  v2 = a2;
  v27 = 0LL;
  v26 = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qq(
                              WPP_GLOBAL_Control->AttachedDevice,
                              (_DWORD)a2,
                              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                              WPP_MAIN_CB.Queue.ListEntry.Flink,
                              4,
                              14,
                              22,
                              (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
                              *a1,
                              v2);
    else
      result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qq(
                              WPP_GLOBAL_Control->AttachedDevice,
                              (_DWORD)a2,
                              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                              WPP_MAIN_CB.Queue.ListEntry.Flink,
                              4,
                              14,
                              22,
                              (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
                              0,
                              v2);
  }
  if ( v2 )
  {
    do
    {
      ThreadLock((__int64)v2[3], (__int64 *)&v26);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v25;
      v25[1] = v2;
      HMLockObject(v2);
      if ( ((_DWORD)v2[10] & 2) == 0 )
      {
        v5 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( *(_DWORD *)(v5 + 632) > 0x400u
          || (*(_DWORD *)(v5 + 648) & 0x20) == 0
          || (v6 = v2[6]) == 0LL
          || (v7 = v6[2], *(_DWORD *)(v7 + 632) > 0x400u)
          || (*(_DWORD *)(v7 + 648) & 0x20) == 0 )
        {
          v8 = (__int64 *)v2[5];
          if ( v8 )
            v9 = *v8;
          else
            LODWORD(v9) = 0;
          PostMessage((int)v2[6], 993, v9, 0);
        }
      }
      v10 = v2[4];
      if ( v10 )
      {
        v11 = v10[20];
        v10[20] = v11 | 6;
        v12 = (v11 & 0xA) != 0;
      }
      else
      {
        v12 = 1;
      }
      v13 = (struct tagFREELIST *)v2[9];
      v2[9] = 0LL;
      v14 = *((_DWORD *)v2 + 20);
      if ( (v14 & 2) != 0 && v12 || (v14 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v2) + 25) & 1) == 0 )
          v2[4] = (_UNKNOWN *)xxxFreeDdeConv((struct tagDDECONV *)v2[4]);
        v18 = (struct tagDDECONV *)ThreadUnlock1(v16, v15, v17);
        if ( v18 )
          xxxFreeDdeConv(v18);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2);
        ThreadUnlock1(v20, v19, v21);
      }
      xxxFreeListFree(v13);
      result = (_UNKNOWN **)ThreadUnlock1(v23, v22, v24);
      v2 = result;
    }
    while ( result );
  }
  return result;
}
