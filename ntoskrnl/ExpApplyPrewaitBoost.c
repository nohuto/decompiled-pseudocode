/*
 * XREFs of ExpApplyPrewaitBoost @ 0x14027F3C0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402213C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14025B1B0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C3440 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14027F460 (PsGetBaseIoPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyPrewaitBoost(__int64 a1, __int64 a2)
{
  int BaseIoPriorityThread; // eax
  int v3; // r8d
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // r9d
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx

  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), a2, 0LL);
  if ( (BaseIoPriorityThread < 2 && (struct _KTHREAD *)v5 == KeGetCurrentThread() && *(_DWORD *)(v5 + 1440) != v3
     || BaseIoPriorityThread > 1)
    && (*(_BYTE *)(v4 + 26) & 4) == 0 )
  {
    v3 = 4;
  }
  v6 = *(unsigned __int16 *)(v4 + 26);
  result = (unsigned int)*(char *)(v5 + 195);
  v8 = v3 | 2;
  if ( (v6 & 2) != 0 )
    v8 = v3;
  v9 = v8 | 0xFF00;
  if ( (int)result <= (int)(v6 >> 8) )
    v9 = v8;
  if ( (_DWORD)v9 )
    return ExpApplyPriorityBoost(v4, v9, v5);
  return result;
}
