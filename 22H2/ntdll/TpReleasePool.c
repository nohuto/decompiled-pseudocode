/*
 * XREFs of TpReleasePool @ 0x18004F2A0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x18004F4CC (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x18008AA3C (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A0BB0 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18011235C (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x18011272C (TppETWPoolClose.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v12; // rax
  void (__fastcall *v13)(__int64, PTP_POOL); // rax
  __int64 v14; // rcx
  _RTL_SRWLOCK *v15; // rdx
  const void **v16; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v19; // [rsp+88h] [rbp+10h]
  signed __int64 v20; // [rsp+90h] [rbp+18h]

  v19 = 0;
  if ( !Pool
    || Pool == TppPoolpGlobalPool
    || Pool == (PTP_POOL)TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, v1, v2);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      TppRaiseInvalidParameter(v5, v4, v6);
    }
    else
    {
      if ( !*((_BYTE *)Pool + 376) )
      {
        *((_BYTE *)Pool + 376) = 1;
        ZwShutdownWorkerFactory(*((HANDLE *)Pool + 7), (LONG *)Pool);
      }
      while ( 1 )
      {
        _m_prefetchw((char *)Pool + 8);
        v7 = *((_QWORD *)Pool + 1);
        LODWORD(v20) = v7;
        do
        {
          if ( !HIDWORD(v7) )
            break;
          HIDWORD(v20) = HIDWORD(v7) - 1;
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v20, v7);
          LODWORD(v20) = v7;
        }
        while ( v8 != v7 );
        if ( !HIDWORD(v7) )
          break;
        v9 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v9 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v9; j = (unsigned int)(j + 1) )
          {
            v12 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j, i);
            if ( v12 )
              v9 = v12 - 16;
            else
              v9 = 0LL;
          }
        }
        if ( !v9 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v9 )
        {
          v13 = *(void (__fastcall **)(__int64, PTP_POOL))(*(_QWORD *)v9 + 8LL);
          if ( v13 )
            v13(v9, Pool);
        }
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
      v19 = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v14 = 2147353478LL;
    if ( *(_BYTE *)v14 )
      TppETWPoolClose(Pool);
    if ( v19 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v15 = &TppPoolpGlobalPoolLock;
        v16 = (const void **)&TppPoolpGlobalPool;
      }
      else
      {
        if ( Pool != (PTP_POOL)TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
            TppPoolpFree(Pool);
          return;
        }
        v15 = &TppPoolpSerializedPoolLock;
        v16 = (const void **)&TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool(v16, v15);
    }
  }
}
