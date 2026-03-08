/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x14093D100 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x140294F20 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140295600 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1407041D4 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1407760A0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x140870BA0 (FsRtlNotifyUninitializeSync.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  const void **v10; // r13
  _QWORD **v11; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  unsigned __int8 (__fastcall *v16)(_QWORD, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v17)(_QWORD); // rax
  _WORD *v18; // r10
  __int16 v19; // r8
  unsigned int v20; // r12d
  _QWORD *v21; // rdx
  unsigned int *v22; // r9
  _QWORD *v23; // rcx
  int v24; // eax
  int v25; // r14d
  unsigned int v26; // r14d
  unsigned int v27; // ecx
  _DWORD *v28; // rbx
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 Pool2; // rax
  unsigned int *v34; // r12
  __int64 v35; // rax
  char *v36; // rbx
  char *v37; // rbx
  __int16 v38; // ax
  unsigned int v39; // [rsp+34h] [rbp-C4h]
  unsigned int *v40; // [rsp+50h] [rbp-A8h]
  unsigned int v41; // [rsp+5Ch] [rbp-9Ch]
  PNOTIFY_SYNC NotifySync[2]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int *v43; // [rsp+70h] [rbp-88h]
  _QWORD *v44; // [rsp+78h] [rbp-80h]
  _QWORD *v45; // [rsp+80h] [rbp-78h]
  _QWORD *v46; // [rsp+88h] [rbp-70h]
  _QWORD *v47; // [rsp+98h] [rbp-60h]
  _DWORD *v48; // [rsp+A0h] [rbp-58h]
  _WORD *v49; // [rsp+A8h] [rbp-50h]
  _QWORD *v50; // [rsp+B0h] [rbp-48h]

  v10 = a4;
  v11 = (_QWORD **)a2;
  if ( (_QWORD *)*a2 == a2 || a10 && *(_DWORD *)a10 < 0x58u )
    return;
  if ( !*a1 )
  {
    NotifySync[0] = 0LL;
    FsRtlNotifyInitializeSync(NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync[0], 0LL) )
      FsRtlNotifyUninitializeSync(NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  v14 = *v11;
  while ( 1 )
  {
    v45 = v14;
    v44 = v14;
    if ( v14 == v11 )
      break;
    v15 = v14 - 4;
    NotifySync[1] = (PNOTIFY_SYNC)(v14 - 4);
    v50 = v14 - 4;
    if ( (*((_DWORD *)v14 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (v15[9] & 1) != 0
       && ((v16 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, _QWORD))v15[2]) == 0LL || v16(v15[1], a7, v15[3]))) )
    {
      v17 = (unsigned __int8 (__fastcall *)(_QWORD))v15[8];
      if ( !v17 || !a8 || v17(v15[1]) )
      {
        v18 = v15 + 9;
        v49 = v15 + 9;
        v19 = *((_WORD *)v15 + 36);
        if ( (v19 & 2) == 0 )
        {
          v20 = *((_DWORD *)v15 + 24);
          if ( v20 )
          {
            v21 = 0LL;
            v47 = 0LL;
            v22 = (unsigned int *)v15 + 25;
            v40 = (unsigned int *)v15 + 25;
            if ( *((_DWORD *)v15 + 25) )
            {
              v20 = *((_DWORD *)v15 + 25);
            }
            else
            {
              v23 = (_QWORD *)v15[6];
              if ( v23 != v15 + 6 )
              {
                v21 = v23 - 21;
                v47 = v23 - 21;
                v20 = *(_DWORD *)(v23[2] + 8LL);
              }
            }
            v48 = (_DWORD *)v15 + 29;
            v24 = *((_DWORD *)v15 + 29);
            if ( v24 == 3 )
            {
              v25 = 84;
            }
            else
            {
              v25 = 12;
              if ( v24 == 2 )
                v25 = 84;
            }
            v26 = *(unsigned __int16 *)a3 + v25;
            if ( v10 )
              v26 += *(unsigned __int16 *)v10 + 2;
            v43 = (unsigned int *)(v15 + 13);
            v27 = (*((_DWORD *)v15 + 26) + 3) & 0xFFFFFFFC;
            v39 = v27;
            if ( v26 > v20 || (v41 = v27 + v26, v27 + v26 > v20) )
            {
              *v18 = v19 | 2;
              v29 = v15 + 11;
            }
            else
            {
              v28 = 0LL;
              v29 = v15 + 11;
              v46 = v15 + 11;
              v30 = v15[11];
              if ( v30 )
              {
                *(_DWORD *)(v30 + *((unsigned int *)v15 + 27)) = v27 - *((_DWORD *)v15 + 27);
                *((_DWORD *)v15 + 27) = v27;
                v28 = (_DWORD *)(*v29 + v27);
              }
              else
              {
                if ( !v21 )
                  goto LABEL_32;
                v31 = v21[3];
                if ( v31 )
                {
                  v28 = (_DWORD *)v21[3];
                  *v29 = v31;
                }
                else
                {
                  v32 = v21[1];
                  if ( !v32 )
                    goto LABEL_32;
                  if ( (*(_BYTE *)(v32 + 10) & 5) != 0 )
                  {
                    v28 = *(_DWORD **)(v32 + 24);
                  }
                  else
                  {
                    v28 = MmMapLockedPagesSpecifyCache((PMDL)v32, 0, MmCached, 0LL, 0, 0x40000010u);
                    v27 = v39;
                    v22 = (unsigned int *)v15 + 25;
                  }
                  *v29 = (__int64)v28;
                }
                *v22 = v20;
              }
LABEL_32:
              if ( !*v29 )
              {
                PsChargePoolQuota((PEPROCESS)v15[15], PagedPool, v20);
                Pool2 = ExAllocatePool2(290LL, v20, 1316115270LL);
                *v29 = Pool2;
                v15[10] = Pool2;
                *v40 = v20;
                v28 = (_DWORD *)*v29;
                v27 = v39;
              }
              if ( v28 )
              {
                v34 = v43;
                v35 = *v43;
                if ( v27 > (unsigned int)v35 )
                  memset((void *)(*v29 + v35), 0, v27 - (unsigned int)v35);
                *v28 = 0;
                v28[1] = a6;
                if ( *v48 == 3 )
                {
                  *((_QWORD *)v28 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v28 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v28 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v28 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v28 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v28 + 6) = *(_QWORD *)(a10 + 48);
                  v28[14] = *(_DWORD *)(a10 + 56);
                  v28[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v28 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v28 + 9) = *(_QWORD *)(a10 + 72);
                  *((_WORD *)v28 + 40) = v26 - 84;
                  *((_BYTE *)v28 + 82) = *(_BYTE *)(a10 + 80);
                  *((_BYTE *)v28 + 83) = 0;
                  v36 = (char *)(v28 + 21);
                  v34 = v43;
                }
                else if ( *v48 == 2 )
                {
                  *((_QWORD *)v28 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v28 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v28 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v28 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v28 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v28 + 6) = *(_QWORD *)(a10 + 48);
                  v28[14] = *(_DWORD *)(a10 + 56);
                  v28[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v28 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v28 + 9) = *(_QWORD *)(a10 + 72);
                  v28[20] = v26 - 84;
                  v36 = (char *)(v28 + 21);
                }
                else
                {
                  v28[2] = v26 - 12;
                  v36 = (char *)(v28 + 3);
                }
                memmove(v36, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v37 = &v36[*(unsigned __int16 *)a3];
                  *(_WORD *)v37 = 58;
                  memmove(v37 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *v34 = v41;
              }
              v14 = v44;
              v22 = (unsigned int *)v15 + 25;
              v18 = v49;
            }
            if ( (*(_BYTE *)v18 & 2) != 0 && *v29 )
            {
              if ( v15[10] )
              {
                PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v15[15], *v22);
                ExFreePoolWithTag((PVOID)v15[10], 0);
              }
              *v29 = 0LL;
              v15[10] = 0LL;
              *((_DWORD *)v15 + 27) = 0;
              *v43 = 0;
              *v40 = 0;
            }
            v10 = a4;
          }
        }
        v38 = *((_WORD *)v50 + 36);
        if ( a6 == 4 )
        {
          *((_WORD *)v50 + 36) = v38 | 8;
        }
        else
        {
          *((_WORD *)v50 + 36) = v38 & 0xFFF7;
          if ( (_QWORD *)v15[6] != v15 + 6 )
            FsRtlNotifyCompleteIrpList(v15, 0LL);
        }
      }
    }
    v14 = (_QWORD *)*v14;
    v11 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
