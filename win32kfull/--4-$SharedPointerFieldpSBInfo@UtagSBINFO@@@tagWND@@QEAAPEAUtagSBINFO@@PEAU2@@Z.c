__int64 __fastcall tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 14);
  if ( a2 )
    *(_QWORD *)(v2 + 144) = a2 + *(a1 - 13) - v2;
  else
    *(_QWORD *)(v2 + 144) = 0LL;
  *a1 = a2;
  return a2;
}
