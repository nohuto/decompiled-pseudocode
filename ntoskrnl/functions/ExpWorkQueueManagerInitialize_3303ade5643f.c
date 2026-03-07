int __fastcall ExpWorkQueueManagerInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 Mask; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  memset((void *)(a1 + 16), 0, 0x108uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  KeInitializeEvent((PRKEVENT)(a1 + 16), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 40), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 104), SynchronizationEvent, 0);
  KeInitializeTimer2(a1 + 128, (__int64)ExpWorkQueueManagerReaperTimer, a1, 8LL);
  KeQueryNodeActiveAffinity(**(_WORD **)(a1 + 8), &Affinity, 0LL);
  Mask = Affinity.Mask;
  v7 = (Affinity.Mask >> 1) & 0x5555555555555555LL;
  *(_WORD *)(a1 + 276) = 0;
  v8 = (0x101010101010101LL
      * ((((Mask - v7) & 0x3333333333333333LL)
        + (((Mask - v7) >> 2) & 0x3333333333333333LL)
        + ((((Mask - v7) & 0x3333333333333333LL) + (((Mask - v7) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (_BYTE)v8 )
  {
    LODWORD(v8) = KeSelectIdealProcessor((__int64)&Affinity, (_WORD *)(a1 + 276), 0LL, 0);
    *(_WORD *)(a1 + 276) = v8;
  }
  return v8;
}
