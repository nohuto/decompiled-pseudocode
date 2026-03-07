char __fastcall RtlGetNtProductType(_DWORD *a1, __int64 a2)
{
  char v3; // bl
  __int64 CurrentServerSilo; // rax
  _QWORD *v6; // rax

  v3 = 0;
  if ( PsIsCurrentThreadInServerSilo((__int64)a1, a2) )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo )
      v6 = *(_QWORD **)(CurrentServerSilo + 1488);
    else
      v6 = &PspHostSiloGlobals;
    *a1 = *(_DWORD *)(v6[165] + 16LL);
  }
  else if ( MEMORY[0xFFFFF78000000268] )
  {
    *a1 = MEMORY[0xFFFFF78000000264];
  }
  else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v3;
  }
  return 1;
}
