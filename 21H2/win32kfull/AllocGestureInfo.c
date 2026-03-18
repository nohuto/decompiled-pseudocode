/*
 * XREFs of AllocGestureInfo @ 0x1C0221000
 * Callers:
 *     NtUserInjectGesture @ 0x1C01F7FF0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C02213C4 (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0159D38 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01D57F8 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 */

__int64 __fastcall AllocGestureInfo(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  int v6; // r14d
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rbx
  _BYTE v12[56]; // [rsp+40h] [rbp-68h] BYREF

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a3 + 48);
  if ( v8 + 96 < v8 )
  {
    UserSetLastError(534LL, a2);
    return 0LL;
  }
  if ( v8 == -96 )
    return 0LL;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v12);
  LOBYTE(v9) = 21;
  v10 = HMAllocObject(v7, 0LL, v9);
  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v12);
  if ( !v10 )
    return 0LL;
  *(_DWORD *)(v10 + 24) = v6;
  *(_OWORD *)(v10 + 32) = *(_OWORD *)a3;
  *(_OWORD *)(v10 + 48) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v10 + 64) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(v10 + 80) = *(_QWORD *)(a3 + 48);
  if ( a4 )
    memmove((void *)(v10 + 88), a4, *(unsigned int *)(a3 + 48));
  return *(_QWORD *)v10;
}
