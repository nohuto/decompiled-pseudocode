/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x140840C00
 * Callers:
 *     SmQueryStoreInformation @ 0x140840788 (SmQueryStoreInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x14029622C (SmpGetProcessPartition.c)
 *     SmKmStoreReferenceEx @ 0x140356558 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140397D08 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsReferencePartitionByHandle @ 0x14070591C (PsReferencePartitionByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(void *Src, size_t Size, _DWORD *a3, KPROCESSOR_MODE a4)
{
  size_t v5; // r14
  __int64 v7; // rcx
  __int64 ProcessPartition; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int i; // edi
  NTSTATUS v14; // ebx
  int StoreStats; // ebx
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r13
  _QWORD *v22; // [rsp+38h] [rbp-690h] BYREF
  __int128 Srca; // [rsp+40h] [rbp-688h] BYREF
  __int128 v24; // [rsp+50h] [rbp-678h]
  __int128 v25; // [rsp+60h] [rbp-668h]
  unsigned __int64 v26; // [rsp+70h] [rbp-658h]
  _DWORD *v27; // [rsp+78h] [rbp-650h]
  _DWORD v28[384]; // [rsp+80h] [rbp-648h] BYREF

  v27 = a3;
  v5 = (unsigned int)Size;
  memset(v28, 0, sizeof(v28));
  v22 = 0LL;
  Srca = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( (((_DWORD)v5 - 40) & 0xFFFFFFF7) != 0 )
    goto LABEL_30;
  if ( a4 )
  {
    if ( v5 - 1 > 0xFFE )
    {
      ProbeForWrite(Src, (unsigned int)v5, 8u);
    }
    else
    {
      if ( ((unsigned __int8)Src & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v7 = (__int64)Src;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + v5 - 1) = *(_BYTE *)(v7 + v5 - 1);
    }
  }
  memmove(&Srca, Src, v5);
  if ( (unsigned int)(unsigned __int8)Srca - 3 > 1 )
    goto LABEL_28;
  if ( (_DWORD)v5 != 48 && (unsigned __int8)Srca == 4 || (unsigned __int8)Srca == 3 && (_DWORD)v5 != 40 )
  {
LABEL_30:
    v14 = -1073741306;
    goto LABEL_21;
  }
  if ( (Srca & 0xFFFFFF00) != 0 )
  {
LABEL_28:
    v14 = -1073741811;
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v25 + 1) )
  {
    v14 = PsReferencePartitionByHandle(*((void **)&v25 + 1), 1u, a4, 0x52516D53u, (PVOID *)&v22);
    if ( v14 < 0 )
      goto LABEL_21;
    ProcessPartition = v22[3];
    if ( !ProcessPartition )
      goto LABEL_37;
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(ProcessPartition + 1992);
  ExAcquirePushLockExclusiveEx(ProcessPartition + 1992, 0LL);
  v11 = *(_QWORD *)(ProcessPartition + 2008);
  if ( !v11 )
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 1992));
    KeAbPostRelease(ProcessPartition + 1992);
    KeLeaveCriticalRegion();
LABEL_37:
    v14 = -1073741399;
    goto LABEL_21;
  }
  DWORD1(Srca) = *(_DWORD *)(v11 + 1088);
  *((_QWORD *)&Srca + 1) = *(_QWORD *)(v11 + 1816) << 12;
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 1992));
  KeAbPostRelease(ProcessPartition + 1992);
  KeLeaveCriticalRegion();
  v20 = 0LL;
  v21 = 0LL;
  v24 = 0uLL;
  for ( i = 0; i < 0x400; ++i )
  {
    v12 = SmKmStoreReferenceEx(ProcessPartition, i);
    v26 = v12;
    if ( v12 )
    {
      StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v12);
      v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(ProcessPartition, *(_DWORD *)(v26 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v17 + 1);
      if ( StoreStats >= 0 )
      {
        v18 = &v28[11];
        v19 = 8LL;
        do
        {
          v20 += v28[3] * (unsigned __int64)*v18;
          *((_QWORD *)&v24 + 1) = v20;
          v18 += 2;
          --v19;
        }
        while ( v19 );
        v21 += (unsigned __int64)v28[8] << 12;
        *(_QWORD *)&v24 = v21;
        *(_QWORD *)&v25 = ((unsigned __int64)v28[9] << 12) + v25;
      }
    }
  }
  v14 = 0;
  memmove(Src, &Srca, v5);
  *v27 = v5;
LABEL_21:
  if ( v22 )
    PsDereferencePartition((__int64)v22);
  return (unsigned int)v14;
}
