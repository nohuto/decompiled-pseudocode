/*
 * XREFs of PoAllProcessorsDeepIdle @ 0x1402AAF54
 * Callers:
 *     PpmIdleEvaluateConstraints @ 0x14022AB68 (PpmIdleEvaluateConstraints.c)
 *     KePrepareClockTimerForIdle @ 0x1402A9B1C (KePrepareClockTimerForIdle.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 */

char PoAllProcessorsDeepIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Number; // rsi
  unsigned __int16 *v2; // rax
  unsigned int v3; // edi
  unsigned __int64 DeepIdleSet; // rcx
  unsigned __int64 Mask; // rdx
  int NextNode; // eax
  unsigned __int16 *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+50h] [rbp+8h] BYREF
  _KSCHEDULER_SUBNODE *v12; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0LL;
  v11 = 0;
  Number = CurrentPrcb->Number;
  v2 = (unsigned __int16 *)KeNodeBlock[CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]];
  v3 = *v2;
  while ( 1 )
  {
    v10 = 0;
    v8 = v2;
    v9 = *((_DWORD *)v2 + 4);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v8, &v12) )
    {
      DeepIdleSet = v12->DeepIdleSet;
      Mask = v12->Affinity.Mask;
      if ( v12 == CurrentPrcb->SchedulerSubNode )
      {
        DeepIdleSet &= ~(1LL << CurrentPrcb->GroupIndex);
        Mask &= ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
      }
      if ( DeepIdleSet != Mask )
        return 0;
    }
    NextNode = MmGetNextNode(v3, &v11);
    if ( NextNode == -1 )
      break;
    v2 = (unsigned __int16 *)KeNodeBlock[NextNode];
  }
  return 1;
}
