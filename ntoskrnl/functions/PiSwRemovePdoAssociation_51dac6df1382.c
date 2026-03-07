__int64 __fastcall PiSwRemovePdoAssociation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PVOID *PdoAssociation; // rax
  PVOID *v4; // rdx
  PVOID **v5; // rcx
  PVOID **v6; // r8
  PVOID **v7; // rdx

  v2 = 0;
  PdoAssociation = (PVOID *)PiSwFindPdoAssociation(a1, a2, 0);
  if ( PdoAssociation )
  {
    v4 = (PVOID *)*PdoAssociation;
    if ( *((PVOID **)*PdoAssociation + 1) != PdoAssociation
      || (v5 = (PVOID **)PdoAssociation[1], *v5 != PdoAssociation)
      || (*v5 = v4, v4[1] = v5, v6 = (PVOID **)PdoAssociation[2], v6[1] != PdoAssociation + 2)
      || (v7 = (PVOID **)PdoAssociation[3], *v7 != PdoAssociation + 2) )
    {
      __fastfail(3u);
    }
    *v7 = (PVOID *)v6;
    v6[1] = (PVOID *)v7;
    PiSwPdoAssociationFree(PdoAssociation);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
