void __fastcall DefaultDisableMonitoring(int a1)
{
  if ( !a1 )
    HalpTimerStopProfileInterrupt();
}
