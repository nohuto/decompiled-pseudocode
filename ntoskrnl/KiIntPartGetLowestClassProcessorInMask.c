/*
 * XREFs of KiIntPartGetLowestClassProcessorInMask @ 0x1402A9324
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14028F130 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiIntSteerCalculateDistribution @ 0x1402A8E00 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerGetNextProcessorTarget @ 0x1402A92E4 (KiIntSteerGetNextProcessorTarget.c)
 *     KiIntSteerCalculateFallbackDistribution @ 0x140577A5C (KiIntSteerCalculateFallbackDistribution.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402A9460 (KeFindFirstSetRightGroupAffinity.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1402E9A20 (KeFindFirstSetLeftGroupAffinity.c)
 */

__int64 __fastcall KiIntPartGetLowestClassProcessorInMask(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_WORD *)a1 + 4) || KiIntPartProcessorPriority != 1 && (unsigned int)(KiIntPartProcessorPriority - 2) >= 2 )
    return KeFindFirstSetRightGroupAffinity(a1);
  v8 = 0LL;
  WORD4(v8) = 0;
  if ( KiIntPartProcessorPriority == 3 )
  {
    v3 = *(unsigned __int8 *)KiInterruptEfficiencyClassGroup;
    if ( *(_BYTE *)KiInterruptEfficiencyClassGroup )
    {
      v4 = *a1;
      do
      {
        v5 = (unsigned int)(v3 - 1);
        v3 = v5;
        v6 = v4 & *(_QWORD *)(KiInterruptEfficiencyClassGroup + 8 * v5 + 8);
        if ( v6 )
          goto LABEL_17;
      }
      while ( (_DWORD)v5 );
    }
LABEL_16:
    v6 = 0LL;
    goto LABEL_17;
  }
  v3 = 0LL;
  if ( !*(_BYTE *)KiInterruptEfficiencyClassGroup )
    goto LABEL_16;
  v7 = *a1;
  while ( 1 )
  {
    v6 = v7 & *(_QWORD *)(KiInterruptEfficiencyClassGroup + 8LL * (unsigned int)v3 + 8);
    if ( v6 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(unsigned __int8 *)KiInterruptEfficiencyClassGroup )
      goto LABEL_16;
  }
LABEL_17:
  *(_QWORD *)&v8 = v6;
  if ( !v6 )
    return KeFindFirstSetRightGroupAffinity(a1);
  result = KiIntPartProcessorPriority == 2
         ? KeFindFirstSetLeftGroupAffinity(&v8, v3)
         : KeFindFirstSetRightGroupAffinity(&v8);
  if ( (_DWORD)result == -1 )
    return KeFindFirstSetRightGroupAffinity(a1);
  return result;
}
