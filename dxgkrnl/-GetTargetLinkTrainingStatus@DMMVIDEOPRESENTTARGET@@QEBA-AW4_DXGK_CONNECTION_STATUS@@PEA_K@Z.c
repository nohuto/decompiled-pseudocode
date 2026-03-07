__int64 __fastcall DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a1 + 536;
  if ( a2 )
    *a2 = *(_QWORD *)(*(_QWORD *)v2 + 160LL);
  return (unsigned __int8)*(_DWORD *)(*(_QWORD *)v2 + 168LL);
}
