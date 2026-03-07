char __fastcall TryProbeForRead(char *a1, int a2)
{
  char *v2; // rdx

  if ( a2 )
  {
    v2 = &a1[a2];
    if ( (unsigned __int64)v2 > MmUserProbeAddress || v2 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  return 1;
}
