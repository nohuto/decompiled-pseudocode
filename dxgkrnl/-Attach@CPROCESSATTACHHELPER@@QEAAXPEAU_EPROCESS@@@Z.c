void __fastcall CPROCESSATTACHHELPER::Attach(PRKAPC_STATE ApcState, PRKPROCESS PROCESS)
{
  if ( (PRKPROCESS)PsGetCurrentProcess() != PROCESS )
  {
    KeStackAttachProcess(PROCESS, ApcState);
    LOBYTE(ApcState[1].ApcListHead[0].Flink) = 1;
  }
}
