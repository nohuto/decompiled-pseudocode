__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  ULONG_PTR v4; // rcx

  v1 = (_QWORD *)a1[21];
  MiTerminateWsleCluster(v1 + 17);
  MiFlushTbList(a1[2]);
  v3 = v1[2];
  if ( v3 )
  {
    MiFlushGraphicsPtes(v3, ((v1[3] - v3) >> 3) + 1);
    v1[2] = 0LL;
  }
  if ( *v1 )
  {
    MiDeletePteRun(a1[3], (__int64)v1);
    *v1 = 0LL;
  }
  v4 = v1[13];
  if ( v4 )
  {
    MiDecayPfnFullyInitialized(v4);
    v1[13] = 0LL;
  }
  return 0LL;
}
