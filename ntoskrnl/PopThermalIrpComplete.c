__int64 __fastcall PopThermalIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 264), DelayedWorkQueue);
  return 3221225494LL;
}
