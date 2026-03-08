/*
 * XREFs of EtwpInitLoggerContext @ 0x140761AA8
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     KeQuerySystemTimePrecise @ 0x1402384E0 (KeQuerySystemTimePrecise.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     KeInitializeMutex @ 0x1402D97E0 (KeInitializeMutex.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     EtwpInitializeCompression @ 0x1403AF1D8 (EtwpInitializeCompression.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2, int a3)
{
  int v3; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  _QWORD *Pool2; // rax
  __int64 v9; // rbx
  char *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  int UsedProcessorCount; // edi
  unsigned int v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  unsigned int MaximumProcessorCount; // eax
  void *v20; // rax
  char *v21; // rdi

  v3 = *(unsigned __int16 *)a1;
  v6 = 0;
  v7 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    if ( a3 < 0 )
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
    else
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v6 = 8 * MaximumProcessorCount;
    if ( MaximumProcessorCount <= 0x20 )
      v6 = 0;
    if ( (a2 & 0x400) != 0 )
      v7 = 8 * MaximumProcessorCount;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(72LL, v6 + v3 + 1346 + 2 * v7, 1282896965LL);
  v9 = (__int64)Pool2;
  if ( !Pool2 )
    return 0LL;
  v10 = (char *)(Pool2 + 168);
  if ( v6 )
  {
    Pool2[132] = v10;
    v10 += v6;
  }
  if ( v7 )
  {
    Pool2[162] = v10;
    v21 = &v10[v7];
    Pool2[163] = v21;
    v10 = &v21[v7];
  }
  memmove(v10, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v9 + 136), (PCWSTR)v10);
  *(_DWORD *)(v9 + 12) = a2;
  *(_DWORD *)(v9 + 300) = (a2 & 0x1000000) != 0 ? 1 : 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v9 + 12) = a2 & 0x7FFFFFFF;
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)(v9 + 816), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v20 = (void *)(v9 + 272);
  }
  else
  {
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_12;
    v20 = &EtwpGlobalSequence;
  }
  *(_QWORD *)(v9 + 264) = v20;
LABEL_12:
  *(_QWORD *)(v9 + 1312) = -1LL;
  *(_DWORD *)(v9 + 320) = 1;
  v11 = *(_QWORD *)(*(_QWORD *)qword_140C67048 + 17040LL) << 12 >> 20;
  if ( (unsigned int)v11 <= 0x200 )
  {
    *(_DWORD *)(v9 + 4) = 0x2000;
  }
  else
  {
    v12 = 0x10000;
    if ( (unsigned int)v11 <= 0x400 )
      v12 = 0x4000;
    *(_DWORD *)(v9 + 4) = v12;
  }
  UsedProcessorCount = EtwpQueryUsedProcessorCount(v9);
  *(_DWORD *)(v9 + 224) = 2 * UsedProcessorCount;
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_17;
  if ( EtwpInitializeCompression(v9) < 0 )
  {
    ExFreePoolWithTag((PVOID)v9, 0);
    return 0LL;
  }
  if ( (a2 & 0x400) != 0 )
    *(_DWORD *)(v9 + 224) += 4;
LABEL_17:
  *(_DWORD *)(v9 + 236) = *(_DWORD *)(v9 + 224) + 22;
  KeQuerySystemTimePrecise((_QWORD *)(v9 + 792));
  KeInitializeMutex((PRKMUTEX)(v9 + 632), 0);
  *(_QWORD *)(v9 + 688) = 0LL;
  *(_QWORD *)(v9 + 336) = v9 + 328;
  *(_QWORD *)(v9 + 328) = v9 + 328;
  *(_QWORD *)(v9 + 48) = v9 + 56;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_QWORD *)(v9 + 64) = v9 + 72;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 88) = v9 + 80;
  *(_QWORD *)(v9 + 80) = v9 + 80;
  *(_QWORD *)(v9 + 104) = v9 + 96;
  *(_QWORD *)(v9 + 96) = v9 + 96;
  *(_QWORD *)(v9 + 1048) = v9 + 1040;
  *(_QWORD *)(v9 + 1040) = v9 + 1040;
  *(_WORD *)(v9 + 1064) = 0;
  *(_QWORD *)(v9 + 1072) = 0LL;
  *(_QWORD *)(v9 + 696) = 0LL;
  *(_QWORD *)(v9 + 912) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(v9 + 944));
  InitializeSListHead((PSLIST_HEADER)(v9 + 928));
  v14 = 4 * UsedProcessorCount;
  v15 = 16 * UsedProcessorCount;
  v16 = v14;
  if ( v14 < 0x10 )
    v16 = 16;
  *(_DWORD *)(v9 + 964) = v16;
  v17 = v15;
  if ( v15 < 0x10 )
    v17 = 16;
  *(_DWORD *)(v9 + 968) = v17;
  KeInitializeDpc((PRKDPC)(v9 + 848), (PKDEFERRED_ROUTINE)EtwpStackWalkDpc, 0LL);
  *(_BYTE *)(v9 + 849) = 2;
  KeInitializeEvent((PRKEVENT)(v9 + 456), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(v9 + 480), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(v9 + 504), SynchronizationTimer);
  KeInitializeDpc((PRKDPC)(v9 + 568), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v9);
  return v9;
}
