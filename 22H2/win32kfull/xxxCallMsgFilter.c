/*
 * XREFs of xxxCallMsgFilter @ 0x1C015208E
 * Callers:
 *     NtUserCallMsgFilter @ 0x1C0153EE0 (NtUserCallMsgFilter.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022992C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxSendMenuSelect @ 0x1C023FDCC (xxxSendMenuSelect.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C004F384 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0139AF4 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  struct tagTHREADINFO *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  tagDomLock *v10; // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+28h] [rbp-40h]
  char v12; // [rsp+48h] [rbp-20h]
  char v13; // [rsp+50h] [rbp-18h]

  v4 = a2;
  v6 = PtiCurrentShared(a1, a2, a3, a4);
  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 != 576 && ((v7 - 281) & 0xFFFFFFFD) != 0 )
  {
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v10);
    if ( ((*((_BYTE *)v6 + 680) | *(_BYTE *)(**((_QWORD **)v6 + 58) + 16LL)) & 0x80u) != 0
      && (unsigned int)xxxCallHook(v4, 0LL, a1, 6LL) )
    {
      v8 = 1;
LABEL_8:
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v10);
      return v8;
    }
    if ( ((*((_BYTE *)v6 + 680) | *(_BYTE *)(**((_QWORD **)v6 + 58) + 16LL)) & 1) != 0 )
    {
      v8 = xxxCallHook(v4, 0LL, a1, 0xFFFFFFFFLL);
      goto LABEL_8;
    }
    if ( v13 && v12 && v10 )
    {
      if ( v11 )
        tagDomLock::UnLockExclusive(v10);
      else
        tagDomLock::UnLockShared(v10);
    }
  }
  return 0LL;
}
