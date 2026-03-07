void __fastcall Win32ProbeForRead(char *a1, __int64 a2, int a3)
{
  char *v3; // rdx

  if ( a2 )
  {
    if ( ((a3 - 1) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = &a1[a2];
    if ( (unsigned __int64)v3 > MmUserProbeAddress || v3 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
}
