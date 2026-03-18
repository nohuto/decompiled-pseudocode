/*
 * XREFs of PspApplyWorkingSetLimits @ 0x1409AFE9C
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsJobPostCallback @ 0x1406E56E0 (PspSetJobLimitsJobPostCallback.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x1403C7500 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  PVOID *v8; // rbx
  PVOID *result; // rax
  __int64 v10; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  _OWORD v13[3]; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  memset(v13, 0, sizeof(v13));
  while ( 1 )
  {
    v5 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || (v6 = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(*(_QWORD *)PspWorkingSetChangeHead + 8LL) != PspWorkingSetChangeHead)
      || (PspWorkingSetChangeHead = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(v6 + 8) = &PspWorkingSetChangeHead,
          v7 = p_P,
          *p_P != &P) )
    {
LABEL_14:
      __fastfail(3u);
    }
    *(_QWORD *)(v5 + 8) = p_P;
    *(_QWORD *)v5 = &P;
    *v7 = v5;
    p_P = (PVOID *)v5;
    KiStackAttachProcess(*(_KPROCESS **)(v5 + 16), 0LL, (__int64)v13, a4);
    MmAdjustWorkingSetSize(*(_QWORD *)(v5 + 24), *(_QWORD *)(v5 + 32), 0, 1);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v5 + 16), 1);
    KiUnstackDetachProcess((__int64)v13, 0LL);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF5E70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140CF5E70);
  KeAbPostRelease((ULONG_PTR)&qword_140CF5E70);
  while ( 1 )
  {
    v8 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_14;
    v10 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_14;
    P = *(PVOID *)P;
    *(_QWORD *)(v10 + 8) = &P;
    ObfDereferenceObjectWithTag(v8[2], 0x624A7350u);
    ExFreePoolWithTag(v8, 0x72437350u);
  }
}
