/*
 * XREFs of xxxCallMsgFilter @ 0x1C014538E
 * Callers:
 *     NtUserCallMsgFilter @ 0x1C01471C0 (NtUserCallMsgFilter.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxSendMenuSelect @ 0x1C0242A9C (xxxSendMenuSelect.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C00E379C (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C012D1C4 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, unsigned int a2)
{
  struct tagTHREADINFO *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  tagDomLock *v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  char v10; // [rsp+48h] [rbp-20h]
  char v11; // [rsp+50h] [rbp-18h]

  v4 = PtiCurrentShared(a1);
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 != 576 && ((v5 - 281) & 0xFFFFFFFD) != 0 )
  {
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v8);
    if ( ((*((_BYTE *)v4 + 680) | *(_BYTE *)(**((_QWORD **)v4 + 58) + 16LL)) & 0x80u) != 0
      && (unsigned int)xxxCallHook(a2, 0LL, a1, 6) )
    {
      v6 = 1;
LABEL_8:
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v8);
      return v6;
    }
    if ( ((*((_BYTE *)v4 + 680) | *(_BYTE *)(**((_QWORD **)v4 + 58) + 16LL)) & 1) != 0 )
    {
      v6 = xxxCallHook(a2, 0LL, a1, -1);
      goto LABEL_8;
    }
    if ( v11 && v10 && v8 )
    {
      if ( v9 )
        tagDomLock::UnLockExclusive(v8);
      else
        tagDomLock::UnLockShared(v8);
    }
  }
  return 0LL;
}
