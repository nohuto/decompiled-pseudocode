/*
 * XREFs of xxxFreeDdeConv @ 0x1C0218788
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C0216060 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C0217A00 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C0217AA8 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C0218544 (xxxDDETrackWindowDying.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02151E0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021553C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1)
{
  struct tagDDECONV *v1; // rbx
  char v2; // dl
  __int64 *v3; // r8
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v1 = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      56,
      4,
      14,
      56,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      (char)a1);
  if ( v1 )
  {
    if ( (*((_DWORD *)v1 + 20) & 2) != 0
      || (*(_BYTE *)(_HMPheFromObject(*((_QWORD *)v1 + 6)) + 25) & 1) != 0
      || ((v12 = 0LL, v13 = 0LL, ThreadLock((__int64)v1, (__int64 *)&v12), (v3 = (__int64 *)*((_QWORD *)v1 + 5)) != 0LL)
        ? (v4 = *v3)
        : (LODWORD(v4) = 0),
          PostMessage(*((_QWORD *)v1 + 6), 993, v4, 0),
          (v1 = (struct tagDDECONV *)ThreadUnlock1(v6, v5, v7)) != 0LL) )
    {
      v8 = *((_QWORD *)v1 + 4);
      if ( v8 && (*(_DWORD *)(*((_QWORD *)v1 + 2) + 488LL) & 1) != 0 )
        *(_DWORD *)(v8 + 80) |= 2u;
      UnlinkConv(v1);
      v9 = *((_QWORD *)v1 + 11);
      if ( v9 )
      {
        --*(_WORD *)(v9 + 90);
        v10 = *((_QWORD *)v1 + 11);
        if ( !*(_WORD *)(v10 + 90) && !*(_WORD *)(v10 + 88) )
        {
          SeDeleteClientSecurity(v10 + 16);
          Win32FreePool(*((_QWORD *)v1 + 11));
        }
        *((_QWORD *)v1 + 11) = 0LL;
      }
      HMAssignmentUnlock((char *)v1 + 32);
      HMAssignmentUnlock((char *)v1 + 48);
      HMAssignmentUnlock((char *)v1 + 40);
      if ( !(unsigned int)HMMarkObjectDestroy(v1) )
        return v1;
      while ( *((_QWORD *)v1 + 7) )
        PopState(v1);
      HMFreeObject(v1);
    }
  }
  return 0LL;
}
