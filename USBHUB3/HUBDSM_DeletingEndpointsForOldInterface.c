__int64 __fastcall HUBDSM_DeletingEndpointsForOldInterface(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 72) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 72) = 0LL;
  }
  return 4077LL;
}
