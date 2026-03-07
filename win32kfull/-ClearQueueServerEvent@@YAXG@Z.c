void __fastcall ClearQueueServerEvent(unsigned __int16 a1)
{
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), a1);
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
}
