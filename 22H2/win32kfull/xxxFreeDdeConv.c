/*
 * XREFs of xxxFreeDdeConv @ 0x1C01FB8A0
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01FA218 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01FB100 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FB134 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01FB710 (xxxDDETrackWindowDying.c)
 * Callees:
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F9B74 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F9CC8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagDDECONV *v4; // rbx
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v4 = a1;
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 20) & 2) != 0
      || (*(_BYTE *)(_HMPheFromObject(*((_QWORD *)a1 + 6)) + 25) & 1) != 0
      || ((v14 = 0LL, v15 = 0LL, ThreadLock(v4, &v14), (v5 = (unsigned __int64 *)*((_QWORD *)v4 + 5)) != 0LL)
        ? (v6 = *v5)
        : (v6 = 0LL),
          PostMessage(*((struct tagWND **)v4 + 6), 0x3E1u, v6, 0LL),
          (v4 = (struct tagDDECONV *)ThreadUnlock1(v8, v7, v9)) != 0LL) )
    {
      v10 = *((_QWORD *)v4 + 4);
      if ( v10 && (*(_DWORD *)(*((_QWORD *)v4 + 2) + 488LL) & 1) != 0 )
        *(_DWORD *)(v10 + 80) |= 2u;
      UnlinkConv(v4, v10, a3, a4);
      v11 = *((_QWORD *)v4 + 11);
      if ( v11 )
      {
        --*(_WORD *)(v11 + 90);
        v12 = *((_QWORD *)v4 + 11);
        if ( !*(_WORD *)(v12 + 90) && !*(_WORD *)(v12 + 88) )
        {
          SeDeleteClientSecurity(v12 + 16);
          Win32FreePool(*((void **)v4 + 11));
        }
        *((_QWORD *)v4 + 11) = 0LL;
      }
      HMAssignmentUnlock((char *)v4 + 32);
      HMAssignmentUnlock((char *)v4 + 48);
      HMAssignmentUnlock((char *)v4 + 40);
      if ( !(unsigned int)HMMarkObjectDestroy(v4) )
        return v4;
      while ( *((_QWORD *)v4 + 7) )
        PopState(v4);
      HMFreeObject(v4);
    }
  }
  return 0LL;
}
