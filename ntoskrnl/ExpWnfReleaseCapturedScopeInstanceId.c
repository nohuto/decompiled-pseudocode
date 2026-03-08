/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x14071A2DC
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140719DF0 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x14077DEB0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SeReleaseSid @ 0x140710A34 (SeReleaseSid.c)
 */

void __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( *a2 )
          ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else if ( *a2 )
    {
      SeReleaseSid(*a2, a3, 0);
    }
  }
  else if ( *a2 )
  {
    ObfDereferenceObject(*a2);
  }
}
