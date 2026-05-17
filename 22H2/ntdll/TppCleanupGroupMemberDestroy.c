/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180012088
 * Callers:
 *     TppWorkpFree @ 0x18000F0E0 (TppWorkpFree.c)
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 *     TppSimplepFree @ 0x180010BA0 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x180010BE0 (TpSimpleTryPost.c)
 *     TppWorkInitialize @ 0x1800122AC (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x180076CA0 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x18007A7D4 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x18007DF70 (TppIopFree.c)
 *     TpAllocJobNotification @ 0x18007FE00 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x180083EC0 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180085700 (TppJobpFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     TppPoolpFree @ 0x18004F4CC (TppPoolpFree.c)
 *     TppCleanupGroupRemoveMember @ 0x180076F1C (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18007A300 (TppCallbackCheckThreadBeforeCallback.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  void (__fastcall *v9)(_QWORD *, __int64); // rdi
  void *v10; // rdx
  __int64 *v11; // rcx
  volatile signed __int32 *v12; // r8
  __int64 v13; // r11
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD v17[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v12 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, v12);
  }
  v2 = a1[12];
  if ( v2 != -1 )
    RtlReleaseActivationContext(v2);
  v3 = a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 72);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive(a1[18] + 72LL);
    v7 = (volatile signed __int32 *)a1[18];
    if ( v7 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v10 = &TppPoolpGlobalPoolLock;
      v11 = &TppPoolpGlobalPool;
    }
    else
    {
      if ( v7 != (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v7, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = TppPoolpFree(v7);
        goto LABEL_13;
      }
      v10 = &TppPoolpSerializedPoolLock;
      v11 = &TppPoolpSerializedPool;
    }
    result = TppPoolpDereferenceGlobalPool(v11, v10);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v14 = a1 + 19;
  v15 = a1[19];
  v16 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v15 + 8) != a1 + 19 || (_QWORD *)*v16 != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  a1[20] = a1 + 19;
  *v14 = v14;
  result = RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v9 = (void (__fastcall *)(_QWORD *, __int64))a1[4];
  if ( v9 )
  {
    memset(v17, 0, 0xF8uLL);
    v17[11] = v9;
    v17[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback(v17);
    v9(v17, v13);
    return TppCallbackEpilog(v17);
  }
  return result;
}
