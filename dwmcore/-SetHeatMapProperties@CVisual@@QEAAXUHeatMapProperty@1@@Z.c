void __fastcall CVisual::SetHeatMapProperties(__int64 a1, _QWORD *a2)
{
  CSparseStorage *v2; // r10
  __int64 v3; // rcx

  v2 = (CSparseStorage *)(a1 + 224);
  v3 = *a2 - `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue;
  if ( *a2 == `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue )
  {
    v3 = a2[1];
    if ( !v3 )
      v3 = *((unsigned int *)a2 + 4);
  }
  if ( v3 )
    CSparseStorage::SetData(v2, 2u, 0x14u, a2);
  else
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x40000000u;
}
