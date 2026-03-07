__int64 __fastcall SmmMapIommu(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
    return SmmIommuMapLogicalRange(v3, a2, a3, a2);
  else
    return SmmIommuMapIdentityRange(v3);
}
