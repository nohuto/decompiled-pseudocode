/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14027F460
 * Callers:
 *     IopSetIrpPriorityHintFromFileObject @ 0x14027F340 (IopSetIrpPriorityHintFromFileObject.c)
 *     ExpApplyPrewaitBoost @ 0x14027F3C0 (ExpApplyPrewaitBoost.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140356B60 (ExpBoostIoAfterAcquire.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ecx

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1068);
    if ( (int)result >= v3 )
      return (unsigned int)v3;
  }
  return result;
}
