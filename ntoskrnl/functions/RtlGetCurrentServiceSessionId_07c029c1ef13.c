__int64 RtlGetCurrentServiceSessionId()
{
  __int64 CurrentServerSilo; // rax
  unsigned int **v1; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v1 = *(unsigned int ***)(CurrentServerSilo + 1488);
  else
    v1 = (unsigned int **)&PspHostSiloGlobals;
  return *v1[165];
}
