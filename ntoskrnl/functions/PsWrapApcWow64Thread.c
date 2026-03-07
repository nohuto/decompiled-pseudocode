NTSTATUS __stdcall PsWrapApcWow64Thread(PVOID *ApcContext, PVOID *ApcRoutine)
{
  _KPROCESS *Process; // rcx
  __int16 v3; // ax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v3 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v3 == 332 || v3 == 452 )
      *ApcRoutine = (PVOID)(-4LL * (_QWORD)*ApcRoutine);
  }
  return 0;
}
