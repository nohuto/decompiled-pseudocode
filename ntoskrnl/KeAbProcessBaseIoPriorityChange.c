/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x140357A24
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140356E2C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     IoApplyPriorityInfoThread @ 0x1403575F0 (IoApplyPriorityInfoThread.c)
 *     PsSetIoPriorityThread @ 0x1403579A4 (PsSetIoPriorityThread.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140357A54 (KeAbProcessBaseIoPriorityChangeInternal.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = (unsigned int)a2;
  if ( a3 < 2 )
  {
    v4 = 0LL;
    if ( (int)result < 2 )
      return result;
  }
  else
  {
    if ( a2 >= 2 )
      return result;
    v4 = 1LL;
  }
  return KeAbProcessBaseIoPriorityChangeInternal(a1, v4);
}
