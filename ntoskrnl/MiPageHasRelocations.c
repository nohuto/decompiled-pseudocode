__int64 __fastcall MiPageHasRelocations(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  char v4; // r11
  unsigned int v5; // r10d
  __int64 *v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // rcx
  const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v9; // rcx

  v3 = *a1;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( (a3 & 1) == 0 || a2 >= *((_DWORD *)a1 + 14) )
    return 0LL;
  v7 = a2;
  while ( !*(_QWORD *)(v3 + 8LL * v7) )
  {
    v8 = v6[11];
    if ( v8 )
    {
      if ( *(_QWORD *)(v8 + 8LL * v7 + 56) )
        break;
    }
    v9 = (const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *)v6[12];
    if ( v9 )
    {
      if ( RtlDoesRequireFunctionOverrideFixups(v9, v7) )
        break;
    }
    if ( (v4 & 2) != 0 && (unsigned int)PdcCreateWatchdogAroundClientCall() )
      break;
    if ( ++v7 != v5 )
      return 0LL;
  }
  return 1LL;
}
