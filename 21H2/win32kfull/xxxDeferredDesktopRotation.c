/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C0211D1C
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     NtUserDeferredDesktopRotation @ 0x1C01F24D0 (NtUserDeferredDesktopRotation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2300 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rdi
  __int64 *v1; // rax
  __int64 v2; // rcx
  int v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h]

  v0 = *(_QWORD **)(gptiCurrent + 456LL);
  v1 = (__int64 *)v0[1];
  if ( v1 )
  {
    v2 = *v1;
    v3 = *(_DWORD *)(*v1 + 64);
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(v2 + 64) = v3 & 0xFFFFFFFD;
      v4 = (volatile signed __int32 *)v0[32];
      v0[32] = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      if ( v4 )
        PushW32ThreadLock((__int64)v4, &v9, (__int64)_lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
      PushW32ThreadLock((__int64)v0, &v7, UserDereferenceObject);
      ObfReferenceObject(v0);
      xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, (__int64)v4, *(_WORD *)(gpsi + 6996LL), 1u, 0LL, 1);
      PopAndFreeW32ThreadLock((__int64)&v7);
      if ( v4 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v9;
        if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
          Win32FreePool(v4);
      }
    }
  }
  return 0LL;
}
