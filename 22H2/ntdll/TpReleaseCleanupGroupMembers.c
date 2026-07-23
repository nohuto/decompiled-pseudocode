/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x18004CCC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18011235C (TppRaiseInvalidParameter.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  _TP_CLEANUP_GROUP *i; // rax
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _TP_CLEANUP_GROUP *v10; // rdx
  _TP_CLEANUP_GROUP *v11; // r8
  _TP_CLEANUP_GROUP **v12; // rax
  _TP_CLEANUP_GROUP *v13; // rax
  PTP_CLEANUP_GROUP *v14; // rdx
  _TP_CLEANUP_GROUP *v15; // r8
  _TP_CLEANUP_GROUP **v16; // rax
  signed __int32 v17; // r9d
  signed __int32 v18; // r8d
  bool v19; // zf
  signed __int32 v20; // eax
  PTP_CLEANUP_GROUP *v21; // rcx
  _QWORD **v22; // r14
  _QWORD *v23; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v25; // rdi
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  void (__fastcall *v28)(_QWORD, PVOID); // rax
  _QWORD *v29; // rdi
  void (__fastcall *v30)(_QWORD *, _QWORD); // rax
  void (__fastcall *v31)(_QWORD *); // rax
  signed __int32 *v32; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v33; // [rsp+28h] [rbp-40h]
  _TP_CLEANUP_GROUP *v34; // [rsp+30h] [rbp-38h]
  _QWORD *v35; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CleanupGroup || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !CleanupGroup )
      TppRaiseInvalidParameter(0LL, *(_QWORD *)&CancelPendingCallbacks, CleanupParameter);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    for ( i = (_TP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 2);
          i != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 16);
          i = v34 )
    {
      v7 = (volatile signed __int32 *)((char *)i - 40);
      v32 = (signed __int32 *)((char *)i - 40);
      v34 = *(_TP_CLEANUP_GROUP **)i;
      _m_prefetchw((char *)i + 128);
      v8 = *((_DWORD *)i + 32);
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(v7 + 42, v8 | 0x20000, v8);
      }
      while ( v9 != v8 );
      v10 = (_TP_CLEANUP_GROUP *)(v32 + 10);
      if ( (v8 & 0x30000) != 0 )
      {
        v15 = *(_TP_CLEANUP_GROUP **)v10;
        v16 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v32 + 6);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v10 + 8LL) != v10 || *v16 != v10 )
LABEL_24:
          __fastfail(3u);
        *v16 = v15;
        *((_QWORD *)v15 + 1) = v16;
        _m_prefetchw(v32);
        v17 = *v32;
        while ( v17 )
        {
          v18 = v17;
          v20 = _InterlockedCompareExchange(v32, v17 + 1, v17);
          v19 = v17 == v20;
          v17 = v20;
          if ( v19 )
            goto LABEL_20;
        }
        v18 = 0;
LABEL_20:
        if ( v18 )
        {
          v21 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
          if ( *v21 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
            goto LABEL_24;
          *(_QWORD *)v10 = (char *)CleanupGroup + 64;
          *((_QWORD *)v32 + 6) = v21;
          *v21 = v10;
          *((_QWORD *)CleanupGroup + 9) = v10;
        }
        else
        {
          *((_QWORD *)v32 + 6) = v32 + 10;
          *(_QWORD *)v10 = v10;
        }
      }
      else
      {
        *((_QWORD *)v32 + 23) = retaddr;
        v11 = *(_TP_CLEANUP_GROUP **)v10;
        v12 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v32 + 6);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v10 + 8LL) != v10 )
          goto LABEL_24;
        if ( *v12 != v10 )
          goto LABEL_24;
        *v12 = v11;
        *((_QWORD *)v11 + 1) = v12;
        v13 = (_TP_CLEANUP_GROUP *)(v32 + 10);
        v14 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
        if ( *v14 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
          goto LABEL_24;
        *(_QWORD *)v13 = (char *)CleanupGroup + 64;
        *((_QWORD *)v32 + 6) = v14;
        *v14 = v13;
        *((_QWORD *)CleanupGroup + 9) = v13;
      }
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    v22 = (_QWORD **)((char *)CleanupGroup + 64);
    v23 = (_QWORD *)*((_QWORD *)CleanupGroup + 8);
    while ( v23 != v22 )
    {
      v29 = v23 - 5;
      v23 = (_QWORD *)*v23;
      v30 = *(void (__fastcall **)(_QWORD *, _QWORD))(v29[1] + 16LL);
      if ( v30 )
        v30(v29, CancelPendingCallbacks);
      if ( CancelPendingCallbacks )
      {
        v31 = *(void (__fastcall **)(_QWORD *))(v29[1] + 24LL);
        if ( v31 )
          v31(v29);
      }
    }
    for ( j = *v22; j != v22; j = v35 )
    {
      v25 = (volatile signed __int32 *)(j - 5);
      v33 = (volatile signed __int32 *)(j - 5);
      v26 = (_QWORD *)*j;
      v35 = (_QWORD *)*j;
      v27 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v27 != j )
        __fastfail(3u);
      *v27 = v26;
      v26[1] = v27;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v25 + 14, 0LL);
      if ( *((_QWORD *)v25 + 3) )
      {
        if ( (v25[42] & 0x10000) != 0 )
        {
          v25 = v33;
        }
        else
        {
          v28 = (void (__fastcall *)(_QWORD, PVOID))*((_QWORD *)v25 + 3);
          v25 = v33;
          v28(*((_QWORD *)v33 + 11), CleanupParameter);
        }
      }
      if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(volatile signed __int32 *))v33 + 1))(v33);
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    TppBarrierAdjust((char *)CleanupGroup + 32, 0LL);
  }
}
