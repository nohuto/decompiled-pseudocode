/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C021D538
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F354 (WPP_RECORDER_SF_qq.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021B138 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021C148 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C021D748 (xxxFreeDdeConv.c)
 */

_UNKNOWN **__fastcall xxxDDETrackWindowDying(__int64 *a1, _UNKNOWN **a2)
{
  _UNKNOWN **v2; // rbx
  _UNKNOWN **result; // rax
  __int64 v4; // rax
  void *v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // rdx
  int v14; // ecx
  BOOL v15; // eax
  struct tagFREELIST *v16; // rdi
  int v17; // ecx
  __int64 v18; // rcx
  struct tagDDECONV *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]
  _QWORD v24[4]; // [rsp+58h] [rbp-20h] BYREF

  v24[2] = 0LL;
  v2 = a2;
  v22 = 0LL;
  v23 = 0LL;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v4 = *a1;
    else
      v4 = 0LL;
    result = (_UNKNOWN **)WPP_RECORDER_SF_qq(
                            (__int64)a1,
                            4u,
                            0xEu,
                            0x16u,
                            (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
                            v4,
                            a2);
  }
  if ( v2 )
  {
    do
    {
      v5 = v2[3];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v24[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v24;
      v24[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v22 = *(_QWORD *)(v7 + 416);
      *(_QWORD *)(v7 + 416) = &v22;
      *((_QWORD *)&v22 + 1) = v2;
      HMLockObject(v2);
      if ( ((_DWORD)v2[10] & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(0x400u) & 0x20) == 0
          || (v8 = v2[6]) == 0LL
          || ((v9 = v8[2], *(_DWORD *)(v9 + 632) <= 0x400u) ? (v10 = *(_DWORD *)(v9 + 648)) : (LOBYTE(v10) = 0),
              (v10 & 0x20) == 0) )
        {
          v11 = (__int64 *)v2[5];
          if ( v11 )
            v12 = *v11;
          else
            LODWORD(v12) = 0;
          PostMessage((int)v2[6], 993, v12, 0);
        }
      }
      v13 = v2[4];
      if ( v13 )
      {
        v14 = v13[20];
        v13[20] = v14 | 6;
        v15 = (v14 & 0xA) != 0;
      }
      else
      {
        v15 = 1;
      }
      v16 = (struct tagFREELIST *)v2[9];
      v2[9] = 0LL;
      v17 = *((_DWORD *)v2 + 20);
      if ( (v17 & 2) != 0 && v15 || (v17 & 4) != 0 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v2) + 25) & 1) == 0 )
          v2[4] = (_UNKNOWN *)xxxFreeDdeConv((struct tagDDECONV *)v2[4]);
        v19 = (struct tagDDECONV *)ThreadUnlock1(v18);
        if ( v19 )
          xxxFreeDdeConv(v19);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2, (__int16)v13);
        ThreadUnlock1(v20);
      }
      xxxFreeListFree(v16);
      result = (_UNKNOWN **)ThreadUnlock1(v21);
      v2 = result;
    }
    while ( result );
  }
  return result;
}
