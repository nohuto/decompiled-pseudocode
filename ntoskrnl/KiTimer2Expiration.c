/*
 * XREFs of KiTimer2Expiration @ 0x140250C10
 * Callers:
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x14057A560 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiUpdateTimer2Flags @ 0x1402044C8 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x140248860 (KiRemoveTimer2.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiShouldActivateHRTimerClock @ 0x14024FE90 (KiShouldActivateHRTimerClock.c)
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiInsertTimer2 @ 0x1402DFF54 (KiInsertTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x1402F984C (KiSendClockInterruptToClockOwner.c)
 *     KiCheckAndRearmForceIdle @ 0x1403026FC (KiCheckAndRearmForceIdle.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, char a4, _DWORD *a5)
{
  char result; // al
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rdi
  char v16; // r14
  unsigned __int64 v17; // rsi
  char v18; // al
  __int64 v19; // rsi
  _QWORD *v20; // rdi
  signed __int32 v21; // edx
  signed __int32 v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // rax
  signed __int32 v25; // edx
  int v26; // edx
  volatile signed __int32 *v27; // rcx
  char inserted; // al
  char v29; // r8
  _BYTE v30[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+38h] [rbp-80h]
  _QWORD *v32; // [rsp+40h] [rbp-78h] BYREF
  _QWORD **v33; // [rsp+48h] [rbp-70h]
  int v34; // [rsp+50h] [rbp-68h]
  __int128 v35; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-50h] BYREF

  result = KiNextTimer2DueTime;
  v30[0] = 0;
  v35 = 0LL;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v33 = &v32;
  v32 = &v32;
  LOBYTE(v34) = 0;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v10 = 5LL;
  v11 = 0LL;
  v31 = 5LL;
  if ( !a4 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      BYTE8(v35) = 1;
      v36[0] = &v35;
      *(_QWORD *)&v35 = a2;
      v36[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v36, 1, 1073872896, 3920, 1538);
    }
    v11 = 1LL;
    if ( a3 )
      v10 = 3LL;
    else
      v10 = 2LL;
    v31 = v10;
  }
  v12 = (unsigned __int64)&KiTimer2Collections[3 * v11];
  do
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( (v13 & 1) != 0 )
    {
      if ( v13 == 1 )
        goto LABEL_7;
      v14 = v13 ^ (v12 | 1);
    }
    else
    {
      v14 = *(_QWORD *)(v12 + 8);
    }
    if ( v14 )
    {
      v19 = 0LL;
      if ( v11 >= 2 )
        v19 = 24LL;
      do
      {
        v20 = (_QWORD *)(v14 - v19);
        if ( a2 < v20[6] )
          break;
        KiRemoveTimer2((__int64)(v20 - 3));
        v21 = *((_DWORD *)v20 - 6);
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)v20 - 6, v21 & 0xFFFFF0FF | 0x200, v21);
        if ( v21 != v22 )
        {
          do
          {
            v25 = v22;
            v22 = _InterlockedCompareExchange((volatile signed __int32 *)v20 - 6, v22 & 0xFFFFF0FF | 0x200, v22);
          }
          while ( v25 != v22 );
        }
        v23 = v33;
        if ( *v33 != &v32 )
          __fastfail(3u);
        v20[1] = v33;
        *v20 = &v32;
        *v23 = v20;
        v24 = *(_QWORD *)(v12 + 8);
        v33 = (_QWORD **)v20;
        if ( (v24 & 1) != 0 )
        {
          if ( v24 == 1 )
            break;
          v14 = v24 ^ (v12 | 1);
        }
        else
        {
          v14 = v24;
        }
      }
      while ( v14 );
      v10 = v31;
    }
LABEL_7:
    ++v11;
    v12 += 24LL;
  }
  while ( v11 < v10 );
  KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  v15 = v32;
  if ( v32 == &v32 )
    goto LABEL_17;
  v16 = v34;
  while ( 2 )
  {
    v17 = (unsigned __int64)(v15 - 3);
    v15 = (_QWORD *)*v15;
    KiAcquireKobjectLockSafe(v17);
    v18 = *(_BYTE *)(v17 + 1);
    if ( (v18 & 2) != 0 )
    {
      if ( (*(_BYTE *)(v17 + 129) & 2) != 0 )
        v16 = 1;
      goto LABEL_13;
    }
    v26 = 0;
    v27 = (volatile signed __int32 *)v17;
    if ( (v18 & 8) != 0 )
    {
      inserted = KiInsertTimer2(v17, 0LL, v30);
      v27 = (volatile signed __int32 *)v17;
      if ( inserted )
      {
        v29 = 0;
        v26 = 1;
        goto LABEL_52;
      }
      if ( (*(_BYTE *)(v17 + 129) & 2) != 0 )
        v16 = 1;
LABEL_13:
      KiExpireTimer2(v17, a1, a2, a5);
    }
    else
    {
      v29 = 4;
LABEL_52:
      KiUpdateTimer2Flags(v27, v26, v29);
    }
    if ( v15 != &v32 )
      continue;
    break;
  }
  if ( v16 )
    KiCheckAndRearmForceIdle();
LABEL_17:
  if ( *(_QWORD *)(a1 + 11528) )
    KiProcessThreadWaitList(a1, 1u, 0, 2u);
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140C41F68);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
