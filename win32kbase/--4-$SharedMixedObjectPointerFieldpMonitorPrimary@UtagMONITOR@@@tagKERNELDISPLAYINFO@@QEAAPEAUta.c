__int64 __fastcall tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 12);
  if ( a2 )
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(v2 + 8) = 0LL;
  *a1 = a2;
  return a2;
}
