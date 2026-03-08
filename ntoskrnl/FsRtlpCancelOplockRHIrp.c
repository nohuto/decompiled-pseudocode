/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x1402F57D0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x14023EEF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1402F57B0 (FsRtlpOplockRHIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x14023AB60 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x14023F940 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402F5A44 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  char v6; // r14
  __int64 *v7; // rsi
  __int64 *i; // rbx
  char v9; // [rsp+40h] [rbp-128h] BYREF
  char v10; // [rsp+41h] [rbp-127h] BYREF
  char v11; // [rsp+42h] [rbp-126h]
  char v12; // [rsp+43h] [rbp-125h] BYREF
  int v13; // [rsp+44h] [rbp-124h] BYREF
  int v14; // [rsp+48h] [rbp-120h] BYREF
  __int64 v15; // [rsp+50h] [rbp-118h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-110h]
  __int64 v17; // [rsp+60h] [rbp-108h]
  __int64 v18; // [rsp+68h] [rbp-100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+70h] [rbp-F8h] BYREF
  char *v20; // [rsp+90h] [rbp-D8h]
  __int64 v21; // [rsp+98h] [rbp-D0h]
  char *v22; // [rsp+A0h] [rbp-C8h]
  __int64 v23; // [rsp+A8h] [rbp-C0h]
  __int64 *v24; // [rsp+B0h] [rbp-B8h]
  __int64 v25; // [rsp+B8h] [rbp-B0h]
  int *v26; // [rsp+C0h] [rbp-A8h]
  __int64 v27; // [rsp+C8h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+D0h] [rbp-98h] BYREF
  char *v29; // [rsp+F0h] [rbp-78h]
  __int64 v30; // [rsp+F8h] [rbp-70h]
  __int64 *v31; // [rsp+100h] [rbp-68h]
  __int64 v32; // [rsp+108h] [rbp-60h]
  int *v33; // [rsp+110h] [rbp-58h]
  __int64 v34; // [rsp+118h] [rbp-50h]

  v5 = *(_QWORD *)(a1 + 56);
  v17 = v5;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v12 = a3;
    v29 = &v12;
    v30 = 1LL;
    v18 = v5;
    v31 = &v18;
    v32 = 8LL;
    v14 = *(_DWORD *)(v5 + 144);
    v33 = &v14;
    v34 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03770, (unsigned __int8 *)word_140029B1A, 0LL, 0LL, 5u, &v28);
  }
  v6 = 0;
  v11 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v7 = (__int64 *)(v5 + 56);
  for ( i = *(__int64 **)(v5 + 56); ; i = (__int64 *)*i )
  {
    v16 = i;
    if ( i == v7 )
      break;
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68) )
      {
        i = (__int64 *)i[1];
        v16 = i;
        FsRtlpRemoveAndCompleteRHIrp(*i, v5, -1073741536, 0, 0, 0, 0);
        v6 = 1;
        v11 = 1;
      }
    }
  }
  if ( v6 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (__int64 *)*v7 == v7 )
      FsRtlpComputeShareableOplockState((_QWORD *)v5);
  }
  if ( !a2 )
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v9 = a3;
    v20 = &v9;
    v21 = 1LL;
    v10 = v6;
    v22 = &v10;
    v23 = 1LL;
    v15 = v5;
    v24 = &v15;
    v25 = 8LL;
    v13 = *(_DWORD *)(v5 + 144);
    v26 = &v13;
    v27 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03770,
      (unsigned __int8 *)&qword_140029AB0,
      0LL,
      0LL,
      6u,
      &v19);
  }
}
