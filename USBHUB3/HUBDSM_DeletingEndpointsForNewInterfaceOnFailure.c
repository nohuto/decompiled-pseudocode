__int64 __fastcall HUBDSM_DeletingEndpointsForNewInterfaceOnFailure(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 80);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)(v3 + 8) != v2 + 8 || (v4 = *(_QWORD **)(v2 + 16), *v4 != v2 + 8) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_DWORD *)(*(_QWORD *)(v1 + 48) + 8LL) -= *(_DWORD *)(v2 + 24);
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(v1);
    *(_QWORD *)(v1 + 80) = 0LL;
  }
  return 4077LL;
}
