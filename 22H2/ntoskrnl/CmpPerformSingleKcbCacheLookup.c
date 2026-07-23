/*
 * XREFs of CmpPerformSingleKcbCacheLookup @ 0x1406405D0
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140649B30 (CmpPerformCompleteKcbCacheLookup.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AB0 (NLS_UPCASE.c)
 *     ExpReleaseFastMutexContended @ 0x140271D9C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     CmpFreeKeyControlBlock @ 0x14066D340 (CmpFreeKeyControlBlock.c)
 *     CmpCompareUnicodeString @ 0x1406EB710 (CmpCompareUnicodeString.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 */

_WORD *__fastcall CmpPerformSingleKcbCacheLookup(
        volatile signed __int64 *BugCheckParameter2,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR *a6,
        char *a7,
        _WORD *a8)
{
  unsigned int v8; // r13d
  ULONG_PTR v10; // rsi
  __int16 v11; // cx
  char v12; // dl
  signed __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rax
  int v18; // edi
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  ULONG_PTR v24; // rcx
  _WORD *result; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  unsigned __int8 *v28; // rsi
  unsigned __int16 v29; // r10
  unsigned __int16 *v30; // rdi
  unsigned __int16 v31; // r9
  unsigned __int16 v32; // ax
  int v33; // r11d
  int v34; // edx
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  unsigned int v37; // r9d
  ULONG_PTR v38; // rcx
  __int64 v39; // rdi
  unsigned __int8 CurrentIrql; // si
  char v41; // al
  __int64 v42; // rcx
  _BYTE *v43; // rdx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rdi
  signed __int32 v46; // eax
  bool v47; // di
  unsigned __int8 v48; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v51; // eax
  bool v52; // zf
  signed __int32 v53[8]; // [rsp+0h] [rbp-88h] BYREF
  char v54; // [rsp+30h] [rbp-58h]
  __int16 v55; // [rsp+32h] [rbp-56h]
  unsigned int v56; // [rsp+34h] [rbp-54h]
  int v57; // [rsp+38h] [rbp-50h]
  __int128 v58; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int64 *v59; // [rsp+90h] [rbp+8h]

  v59 = BugCheckParameter2;
  v8 = a3;
  v10 = (ULONG_PTR)BugCheckParameter2;
  v11 = 0;
  v12 = 0;
  v55 = 0;
  v54 = 0;
  v13 = _InterlockedIncrement64((volatile signed __int64 *)v10);
  if ( !v13 )
    KeBugCheckEx(0x51u, 0x24uLL, v10, 0LL, 0LL);
  if ( v13 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  v14 = *(_DWORD *)(v10 + 16);
  if ( a3 < a4 )
  {
LABEL_4:
    if ( v8 >= 8 )
      v15 = *(_QWORD *)(a5 + 160) + 16 * (v8 - 8 + 6LL);
    else
      v15 = a5 + 16 * (v8 + 2LL);
    if ( v8 >= 8 )
      v16 = *(_DWORD *)(*(_QWORD *)(a5 + 160) + 4LL * (v8 - 8));
    else
      v16 = *(_DWORD *)(a5 + 4LL * v8);
    v14 = v16 + 37 * v14;
    v57 = v14 ^ (v14 >> 9);
    v17 = *(_QWORD *)(a2 + 1640);
    v56 = 101027 * v57;
    v18 = v56 ^ (v56 >> 9);
    ExAcquirePushLockSharedEx(v17 + 24LL * (v18 & (unsigned int)(*(_DWORD *)(a2 + 1648) - 1)), 0LL);
    _m_prefetchw((const void *)(a2 + 4272));
    v19 = *(_DWORD *)(a2 + 4272);
    if ( !v19 )
LABEL_90:
      KeBugCheckEx(0x51u, 0x17uLL, a2, 9uLL, v14);
    while ( 1 )
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4272), v19 + 1, v19);
      if ( v20 == v19 )
        break;
      if ( !v19 )
        goto LABEL_90;
    }
    v21 = *(_QWORD *)(a2 + 1640);
    v22 = v18 & (unsigned int)(*(_DWORD *)(a2 + 1648) - 1);
    v58 = 0LL;
    v23 = *(_QWORD *)(v21 + 24 * v22 + 16);
    if ( !v23 )
    {
LABEL_13:
      v24 = *(_QWORD *)(a2 + 1640)
          + 24
          * ((unsigned int)(*(_DWORD *)(a2 + 1648) - 1) & ((unsigned int)(101027 * v57) ^ ((unsigned __int64)(unsigned int)(101027 * v57) >> 9)));
      *(_QWORD *)(v24 + 8) = 0LL;
      ExReleasePushLockEx(v24, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)a2);
      v10 = (ULONG_PTR)v59;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)v23 == v14 )
      {
        v26 = v23 - 16;
        if ( *(_QWORD *)(v23 + 56) == v10 )
        {
          v27 = *(_QWORD *)(v26 + 80);
          v28 = (unsigned __int8 *)(v27 + 26);
          if ( (*(_DWORD *)v27 & 1) != 0 )
          {
            v29 = *(_WORD *)v15 >> 1;
            v30 = *(unsigned __int16 **)(v15 + 8);
            v31 = *(_WORD *)(v27 + 24);
            if ( v29 )
            {
              while ( v31 )
              {
                v32 = *v30++;
                v33 = *v28++;
                if ( v32 != (_WORD)v33 )
                {
                  if ( v32 >= 0x61u )
                  {
                    if ( v32 > 0x7Au )
                      v32 = NLS_UPCASE(v32);
                    else
                      v32 -= 32;
                  }
                  v34 = v32 - v33;
                  if ( v32 != v33 )
                    goto LABEL_29;
                }
                --v31;
                if ( !--v29 )
                  break;
              }
            }
            v34 = v29 - v31;
LABEL_29:
            if ( !v34 )
            {
LABEL_30:
              if ( v23 == 16 )
                goto LABEL_13;
              v35 = *(_QWORD *)v26;
              if ( *(_QWORD *)v26 )
              {
                while ( v35 != -1 )
                {
                  v36 = v35;
                  v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v26, v35 + 1, v35);
                  if ( v36 == v35 )
                    goto LABEL_34;
                  if ( !v35 )
                    goto LABEL_43;
                }
LABEL_88:
                KeBugCheckEx(0x51u, 0x24uLL, v23 - 16, 0LL, 0LL);
              }
LABEL_43:
              ExAcquirePushLockSharedEx(v26 + 48, 0LL);
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 56));
              if ( (*(_DWORD *)(v26 + 8) & 0x80000) != 0 )
                KeBugCheckEx(0x51u, 0x20uLL, v23 - 16, 0LL, 0LL);
              if ( !_InterlockedIncrement64((volatile signed __int64 *)v26) )
                goto LABEL_88;
              if ( (*(_BYTE *)(v26 + 64) & 2) != 0 )
              {
                v39 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
                  ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v39);
                if ( v39 )
                  *(_BYTE *)(v39 + 26) |= 1u;
                *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
                *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
                v41 = *(_BYTE *)(v26 + 64);
                if ( (v41 & 2) != 0 )
                {
                  v42 = v26 + 224;
                  if ( (v41 & 4) != 0 )
                  {
                    **(_BYTE **)v42 = 1;
                    *(_BYTE *)(v26 + 64) &= ~4u;
                  }
                  else
                  {
                    v43 = *(_BYTE **)v42;
                    v44 = *(_QWORD **)(v26 + 232);
                    if ( *(_QWORD *)(*(_QWORD *)v42 + 8LL) != v42 || *v44 != v42 )
                      __fastfail(3u);
                    --CmpDelayedCloseElements;
                    *v44 = v43;
                    *((_QWORD *)v43 + 1) = v44;
                    --qword_140D2EF88;
                  }
                  *(_QWORD *)(v26 + 232) = v26 + 224;
                  *(_QWORD *)v42 = v42;
                  _InterlockedOr(v53, 0);
                  *(_BYTE *)(v26 + 64) &= ~2u;
                }
                v45 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
                *(&CmpDelayedCloseTableLock + 1) = 0LL;
                v46 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
                if ( v46 )
                  ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v46);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v48 = KeGetCurrentIrql();
                    if ( v48 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v48 >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
                      v52 = (v51 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v51;
                      if ( v52 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                }
                __writecr8(v45);
                KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
              }
              v47 = (*(_DWORD *)(v26 + 8) & 0x80000) != 0;
              if ( *(struct _KTHREAD **)(v26 + 56) == KeGetCurrentThread() )
                *(_QWORD *)(v26 + 56) = 0LL;
              else
                _InterlockedDecrement((volatile signed __int32 *)(v26 + 56));
              ExReleasePushLockEx(v26 + 48, 0LL);
              if ( v47 && (*(_DWORD *)(v26 + 8) & 0x80000) != 0 )
                CmpFreeKeyControlBlock(v23 - 16);
LABEL_34:
              v37 = a4;
              if ( v8 == a4 - 1 )
              {
                v54 = 1;
              }
              else
              {
                v38 = *(_QWORD *)(a2 + 1640)
                    + 24 * ((unsigned int)(*(_DWORD *)(a2 + 1648) - 1) & (v56 ^ ((unsigned __int64)v56 >> 9)));
                *(_QWORD *)(v38 + 8) = 0LL;
                ExReleasePushLockEx(v38, 0LL);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 4272), 0xFFFFFFFF) == 1 )
                  CmpDeleteHive((PVOID)a2);
                v37 = a4;
              }
              if ( _InterlockedExchangeAdd64(v59, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
              ++v55;
              v10 = v23 - 16;
              v59 = (volatile signed __int64 *)(v23 - 16);
              if ( (*(_DWORD *)(v26 + 184) & 0x100000) != 0 || (++v8, v8 >= v37) )
              {
LABEL_16:
                v12 = v54;
                v11 = v55;
                break;
              }
              goto LABEL_4;
            }
          }
          else
          {
            LOWORD(v58) = *(_WORD *)(v27 + 24);
            WORD1(v58) = v58;
            *((_QWORD *)&v58 + 1) = v27 + 26;
            if ( !(unsigned int)CmpCompareUnicodeString(v15, &v58, 2LL) )
              goto LABEL_30;
          }
          v10 = (ULONG_PTR)v59;
        }
      }
      v23 = *(_QWORD *)(v23 + 8);
      if ( !v23 )
        goto LABEL_13;
    }
  }
  *a6 = v10;
  *a7 = v12;
  result = a8;
  *a8 = v11;
  return result;
}
