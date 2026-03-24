/*
 * XREFs of xxxFreeDdeConv @ 0x1C021D188
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C021B34C (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C021C6D0 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C734 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C021CF78 (xxxDDETrackWindowDying.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021A8E4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021AB78 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1, __int16 a2)
{
  struct tagDDECONV *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 *v4; // r8
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  TOKEN_TYPE v10; // eax
  void *v11; // rcx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)a1, a2, 14, 56, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, (char)a1);
  }
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 20) & 2) != 0 || (*(_BYTE *)(_HMPheFromObject(*((_QWORD *)v2 + 6)) + 25) & 1) != 0 )
      goto LABEL_10;
    v13[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v13;
    v13[1] = v2;
    HMLockObject(v2);
    v4 = (__int64 *)*((_QWORD *)v2 + 5);
    if ( v4 )
      v5 = *v4;
    else
      LODWORD(v5) = 0;
    PostMessage(*((_QWORD *)v2 + 6), 993, v5, 0);
    v2 = (struct tagDDECONV *)ThreadUnlock1(v6);
    if ( v2 )
    {
LABEL_10:
      v7 = *((_QWORD *)v2 + 4);
      if ( v7 && (*(_DWORD *)(*((_QWORD *)v2 + 2) + 488LL) & 1) != 0 )
        *(_DWORD *)(v7 + 80) |= 2u;
      UnlinkConv(v2, v7);
      v8 = *((_QWORD *)v2 + 11);
      if ( v8 )
      {
        --*(_WORD *)(v8 + 90);
        v9 = *((_QWORD *)v2 + 11);
        if ( !*(_WORD *)(v9 + 90) && !*(_WORD *)(v9 + 88) )
        {
          v10 = SeTokenType(*(PACCESS_TOKEN *)(v9 + 32));
          v11 = *(void **)(*((_QWORD *)v2 + 11) + 32LL);
          if ( v10 == TokenPrimary || v11 )
            ObfDereferenceObject(v11);
          Win32FreePool(*((void **)v2 + 11));
        }
        *((_QWORD *)v2 + 11) = 0LL;
      }
      HMAssignmentUnlock((char *)v2 + 32);
      HMAssignmentUnlock((char *)v2 + 48);
      HMAssignmentUnlock((char *)v2 + 40);
      if ( !(unsigned int)HMMarkObjectDestroy(v2) )
        return v2;
      while ( *((_QWORD *)v2 + 7) )
        PopState(v2);
      HMFreeObject(v2);
    }
  }
  return 0LL;
}
