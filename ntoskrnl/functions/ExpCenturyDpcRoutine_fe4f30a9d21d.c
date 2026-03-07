void __fastcall ExpCenturyDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  _DWORD v10[80]; // [rsp+0h] [rbp-158h] BYREF
  _DWORD *v11; // [rsp+140h] [rbp-18h]

  v11 = v10;
  memset(&v10[32], 0, 0x62uLL);
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v10[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v10[54] + 2) = SystemArgument1;
    *(_QWORD *)((char *)&v10[52] + 2) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v10[34] + 2) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine9((unsigned int *)DeferredContext);
  }
  v8 = &PspHostSiloGlobals;
  if ( DeferredContext )
    v8 = (_QWORD *)*((_QWORD *)DeferredContext + 186);
  v9 = v8[157];
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( DeferredContext )
      ObfReferenceObjectWithTag(DeferredContext, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 736), DelayedWorkQueue);
  }
}
