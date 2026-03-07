__int64 ReferenceDwmProcess()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    ObReferenceObjectByPointer(
      *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
      0x1FFFFFu,
      (POBJECT_TYPE)PsProcessType,
      0);
  return v0;
}
