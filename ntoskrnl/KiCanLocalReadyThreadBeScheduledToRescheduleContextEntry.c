/*
 * XREFs of KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x1402C3F90
 * Callers:
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContext @ 0x1402C3E38 (KiCanLocalReadyThreadBeScheduledToRescheduleContext.c)
 * Callees:
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402ADF34 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140459048 (KiConvertDynamicHeteroPolicy.c)
 */

char __fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  char result; // al
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // r12d
  __int64 v12; // r13
  __int64 v13; // r15
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( !a4 && v4 == a3 )
    return 1;
  v9 = a1[1];
  if ( !v9 || v9 != a4 )
    return 0;
  v10 = -1LL;
  v11 = *(unsigned __int8 *)(a2 + 516);
  v12 = *(_QWORD *)(v4 + 192);
  v13 = -1LL;
  if ( (unsigned int)KeIsMultiCoreClassesEnabled() )
  {
    v23 = 0;
    v14 = KiComputeHeteroThreadQos(a2, &v23);
    v13 = *(_QWORD *)(v12 + 80);
    v15 = *(unsigned __int8 *)(v12 + 185) * (v23 + 2 * v14);
    v16 = *(_QWORD *)(v12 + 192);
    v17 = (unsigned int)(v11 + v15);
  }
  else
  {
    v18 = *(unsigned __int8 *)(a2 + 125);
    if ( v18 >= 5 )
      v18 = KiConvertDynamicHeteroPolicy(a2);
    if ( !v18 )
      goto LABEL_13;
    v19 = *(_QWORD *)(a3 + 192);
    v13 = *(_QWORD *)(v19 + 80);
    v20 = v18 * *(unsigned __int8 *)(v19 + 185);
    v16 = *(_QWORD *)(v19 + 192);
    v17 = (unsigned int)*(unsigned __int8 *)(a2 + 516) + v20;
  }
  v10 = *(_QWORD *)(v16 + 24 * v17 + 16);
LABEL_13:
  result = 0;
  if ( (v10 & *(_QWORD *)(v4 + 200)) != 0 || (v13 & *(_QWORD *)(a4 + 664) & v10) == 0 )
  {
    if ( v4 == a3 )
      return 1;
    v21 = *(_QWORD *)(a2 + 104);
    if ( !v21
      || !(*(unsigned int *)(v4 + 216) + v21)
      || !KiIsThreadConstrainedBySchedulingGroup(a2)
      || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v22)
      || KiShouldPreemptionBeDeferred(a2) )
    {
      return 1;
    }
  }
  return result;
}
