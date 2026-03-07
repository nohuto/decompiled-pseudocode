void __fastcall DestroyProcessInfoEditionRundown(__int64 a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 920) )
    {
      TraceLoggingProcessUsageOnTerminationEvent((struct tagPROCESSINFO *const)a1);
      *(_DWORD *)(a1 + 920) = 0;
    }
  }
}
