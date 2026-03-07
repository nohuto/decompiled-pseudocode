void __stdcall EngProbeForRead(PVOID Address, SIZE_T Length, ULONG Alignment)
{
  char *v3; // rdx

  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = (char *)Address + Length;
    if ( (unsigned __int64)v3 > MmUserProbeAddress || v3 < Address )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
}
