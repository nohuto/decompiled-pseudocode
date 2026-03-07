__int64 __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (xmmword_140C39D98 & 1) != 0 && DWORD1(xmmword_140C39D98) == a2 )
  {
    LODWORD(xmmword_140C39D98) = xmmword_140C39D98 & 1 | ((xmmword_140C39D98 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C39D70, CriticalWorkQueue);
  }
  return KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
}
