__int64 __fastcall CRegion::Release(volatile signed __int32 *P)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(P + 2);
  if ( !v2 && P )
  {
    *(_QWORD *)P = &CRegion::`vftable';
    CRegion::SetEmpty((CRegion *)P);
    ExFreePool((PVOID)P);
  }
  return v2;
}
