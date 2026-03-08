/*
 * XREFs of FsRtlpWaitOnIrp @ 0x140201018
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x14023BD20 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1402F3B90 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14053C500 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x14093B518 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201B90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     FsRtlpCancelWaitingIrp @ 0x14053BE94 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x1407D9430 (FsRtlCancellableWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpWaitOnIrp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64),
        void *a6,
        char a7,
        __int64 a8,
        __int64 a9,
        void (__fastcall *a10)(__int128 *),
        char *a11)
{
  char *v14; // rbx
  char v15; // r13
  char *v16; // rax
  __int64 Pool2; // rsi
  __int64 v18; // rax
  char v19; // cl
  char *v20; // rbx
  __int64 v21; // rax
  _QWORD **v22; // r12
  __int64 *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ebx
  char v26; // r15
  char v27; // r13
  NTSTATUS v28; // eax
  _QWORD *i; // rax
  char *v30; // r9
  char *v31; // r9
  char v33; // [rsp+31h] [rbp-1E7h] BYREF
  char v34; // [rsp+32h] [rbp-1E6h] BYREF
  char v35; // [rsp+33h] [rbp-1E5h] BYREF
  int v36; // [rsp+34h] [rbp-1E4h]
  unsigned int v37; // [rsp+38h] [rbp-1E0h] BYREF
  int v38; // [rsp+3Ch] [rbp-1DCh] BYREF
  unsigned int v39; // [rsp+40h] [rbp-1D8h] BYREF
  char *v40; // [rsp+48h] [rbp-1D0h]
  PVOID Object; // [rsp+50h] [rbp-1C8h]
  int v42; // [rsp+58h] [rbp-1C0h] BYREF
  void (__fastcall *v43)(__int128 *); // [rsp+60h] [rbp-1B8h]
  _QWORD v44[2]; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v45; // [rsp+78h] [rbp-1A0h] BYREF
  __int128 v46; // [rsp+80h] [rbp-198h] BYREF
  __int64 v47; // [rsp+90h] [rbp-188h]
  __int64 v48; // [rsp+98h] [rbp-180h]
  __int64 v49; // [rsp+A0h] [rbp-178h]
  __int64 v50; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-160h]
  __int64 v53; // [rsp+C0h] [rbp-158h]
  char v54[32]; // [rsp+D0h] [rbp-148h] BYREF
  unsigned int *v55; // [rsp+F0h] [rbp-128h]
  __int64 v56; // [rsp+F8h] [rbp-120h]
  char *v57; // [rsp+100h] [rbp-118h]
  __int64 v58; // [rsp+108h] [rbp-110h]
  _QWORD *v59; // [rsp+110h] [rbp-108h]
  __int64 v60; // [rsp+118h] [rbp-100h]
  int *v61; // [rsp+120h] [rbp-F8h]
  __int64 v62; // [rsp+128h] [rbp-F0h]
  char v63[32]; // [rsp+130h] [rbp-E8h] BYREF
  unsigned int *v64; // [rsp+150h] [rbp-C8h]
  __int64 v65; // [rsp+158h] [rbp-C0h]
  char *v66; // [rsp+160h] [rbp-B8h]
  __int64 v67; // [rsp+168h] [rbp-B0h]
  __int64 *v68; // [rsp+170h] [rbp-A8h]
  __int64 v69; // [rsp+178h] [rbp-A0h]
  char v70[32]; // [rsp+180h] [rbp-98h] BYREF
  __int64 *v71; // [rsp+1A0h] [rbp-78h]
  __int64 v72; // [rsp+1A8h] [rbp-70h]
  __int64 *v73; // [rsp+1B0h] [rbp-68h]
  __int64 v74; // [rsp+1B8h] [rbp-60h]
  int *v75; // [rsp+1C0h] [rbp-58h]
  __int64 v76; // [rsp+1C8h] [rbp-50h]

  v49 = a3;
  v44[1] = a1;
  Object = a6;
  v53 = a9;
  v43 = a10;
  v14 = a11;
  v36 = -1073741670;
  v35 = 0;
  if ( (unsigned int)dword_140C03770 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140C03770, 0LL) )
  {
    v50 = a2;
    v71 = &v50;
    v72 = 8LL;
    v51 = a1;
    v73 = &v51;
    v74 = 8LL;
    v42 = *(_DWORD *)(a1 + 144);
    v75 = &v42;
    v76 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &word_140029E9E, 0LL, 0LL, 5, v70);
  }
  v15 = 1;
  v16 = &v35;
  if ( v14 )
    v16 = v14;
  v40 = v16;
  *v16 = 0;
  Pool2 = ExAllocatePool2(288LL, 64LL, 1869763398LL);
  v52 = Pool2;
  if ( a2 )
  {
    v18 = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a2 + 56);
    if ( *(_BYTE *)v18 != 13 || (v19 = 1, *(_DWORD *)(v18 + 24) != 589844) )
      v19 = 0;
    *(_BYTE *)(Pool2 + 53) = v19;
    *(_QWORD *)(Pool2 + 56) = *(_QWORD *)(v18 + 48);
  }
  *(_BYTE *)(Pool2 + 52) = a7;
  v20 = (char *)Object;
  if ( a4 )
  {
    *(_QWORD *)(Pool2 + 24) = a4;
    v21 = v49;
    *(_QWORD *)(Pool2 + 32) = v49;
  }
  else
  {
    *(_QWORD *)(Pool2 + 24) = FsRtlpOplockWaitCompleteRoutine;
    *(_QWORD *)(Pool2 + 32) = v20;
    *(_WORD *)v20 = 0;
    v20[2] = 6;
    *((_DWORD *)v20 + 1) = 0;
    *((_QWORD *)v20 + 2) = v20 + 8;
    *((_QWORD *)v20 + 1) = v20 + 8;
    v21 = v49;
  }
  if ( a5 )
    a5(v21, a2);
  v22 = (_QWORD **)(a1 + 88);
  v23 = *(__int64 **)(a1 + 96);
  if ( *v23 != a1 + 88 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v22;
  *(_QWORD *)(Pool2 + 8) = v23;
  *v23 = Pool2;
  *(_QWORD *)(a1 + 96) = Pool2;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 48) = 0;
    *(_BYTE *)(a2 + 69) = KeAcquireQueuedSpinLock(7uLL);
    *(_QWORD *)(a2 + 56) = a1;
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( a4 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        v25 = 259;
      }
      else
      {
        v25 = -1073741536;
      }
      v36 = v25;
      LOBYTE(v24) = 1;
      FsRtlpCancelWaitingIrp(a2, v24);
      goto LABEL_53;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    Pool2 = v52;
    v15 = 1;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v25 = 259;
    v36 = 259;
  }
  else
  {
    if ( !a8 || (v26 = 1, !v43) )
      v26 = 0;
    v27 = 0;
    v46 = 0LL;
    v47 = 0LL;
    LODWORD(v48) = 0;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    while ( 1 )
    {
      v28 = FsRtlCancellableWaitForSingleObject(
              v20,
              (PLARGE_INTEGER)((unsigned __int64)&a8 & -(__int64)(v26 != 0)),
              (PIRP)a2);
      v25 = v28;
      v36 = v28;
      if ( !v26 || v28 != 258 )
        break;
      v26 = 0;
      *(_QWORD *)&v46 = 0LL;
      *((_QWORD *)&v46 + 1) = v53;
      v47 = a2;
      v48 = 258LL;
      v43(&v46);
      v27 = 1;
      v20 = (char *)Object;
    }
    if ( v27 )
    {
      LODWORD(v46) = 1;
      LODWORD(v48) = v28;
      v43(&v46);
    }
    if ( v25 == -1073741749 || v25 == -1073741536 )
    {
      if ( a2 )
      {
        IoCancelIrp((PIRP)a2);
      }
      else
      {
        ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 152));
        for ( i = *v22; i != v22; i = (_QWORD *)*i )
        {
          if ( (_QWORD *)Pool2 == i )
          {
            FsRtlpRemoveAndCompleteWaitingIrp(i);
            break;
          }
        }
        ExReleaseFastMutex(*(PFAST_MUTEX *)(a1 + 152));
      }
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      *v40 = 0;
    }
    else
    {
      if ( a2 )
      {
        v25 = *(_DWORD *)(a2 + 48);
        v36 = v25;
      }
      *v40 = 1;
    }
    v15 = 0;
  }
LABEL_53:
  if ( v15 )
  {
    if ( (unsigned int)dword_140C03770 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140C03770, 0LL) )
    {
      v37 = v25;
      v55 = &v37;
      v56 = 4LL;
      v33 = *v30;
      v57 = &v33;
      v58 = 1LL;
      v44[0] = a1;
      v59 = v44;
      v60 = 8LL;
      v38 = *(_DWORD *)(a1 + 144);
      v61 = &v38;
      v62 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_140029D4B, 0LL, 0LL, 6, v54);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  }
  else if ( (unsigned int)dword_140C03770 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140C03770, 0LL) )
  {
    v39 = v25;
    v64 = &v39;
    v65 = 4LL;
    v34 = *v31;
    v66 = &v34;
    v67 = 1LL;
    v45 = a1;
    v68 = &v45;
    v69 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, byte_140029CF9, 0LL, 0LL, 5, v63);
  }
  return v25;
}
