__int64 __fastcall RtlGetActiveConsoleId(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v4; // rax

  if ( !PsIsCurrentThreadInServerSilo(a1, a2) )
    return MEMORY[0xFFFFF780000002D8];
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v4 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v4 = &PspHostSiloGlobals;
  return *(unsigned int *)(v4[165] + 4LL);
}
