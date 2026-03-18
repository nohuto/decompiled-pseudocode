/*
 * XREFs of xxxCallMsgFilter @ 0x1C013EB60
 * Callers:
 *     NtUserCallMsgFilter @ 0x1C013EA70 (NtUserCallMsgFilter.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0240F90 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C00AD240 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, int a2)
{
  __int64 ThreadWin32Thread; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  tagDomLock *v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  char v10; // [rsp+48h] [rbp-20h]
  char v11; // [rsp+50h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 == 576 || ((v5 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v8);
  if ( ((*(_BYTE *)(ThreadWin32Thread + 680) | *(_BYTE *)(**(_QWORD **)(ThreadWin32Thread + 464) + 16LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(a2, 0LL, a1, 6) )
  {
    v6 = 1;
  }
  else if ( ((*(_BYTE *)(ThreadWin32Thread + 680) | *(_BYTE *)(**(_QWORD **)(ThreadWin32Thread + 464) + 16LL)) & 1) != 0 )
  {
    v6 = xxxCallHook(a2, 0LL, a1, -1);
  }
  else
  {
    v6 = 0;
  }
  if ( v11 && v10 && v8 )
  {
    if ( v9 )
      tagDomLock::UnLockExclusive(v8);
    else
      tagDomLock::UnLockShared(v8);
  }
  return v6;
}
