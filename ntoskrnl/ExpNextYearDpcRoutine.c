/*
 * XREFs of ExpNextYearDpcRoutine @ 0x140603D00
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall ExpNextYearDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx

  v4 = &PspHostSiloGlobals;
  if ( DeferredContext )
    v4 = (_QWORD *)DeferredContext[186];
  v5 = v4[157];
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 928)) == 1 )
  {
    if ( DeferredContext )
      ObfReferenceObjectWithTag(DeferredContext, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 896), DelayedWorkQueue);
  }
}
