__int64 __fastcall OemSpecifiedViewDist(_QWORD *a1)
{
  __int64 v1; // rcx
  EVENT_DESCRIPTOR *v2; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[27];
  v4 = 0;
  if ( (int)DpiReadPnpRegistryValue(v1, L"ViewDistanceOverride", (char *)&v4, 4u, 2u) < 0 )
    return 0LL;
  v2 = (EVENT_DESCRIPTOR *)&ViewDistanceArray;
  while ( v4 != *(_DWORD *)&v2->Id )
  {
    v2 = (EVENT_DESCRIPTOR *)((char *)v2 + 4);
    if ( v2 == &EventVSyncDPC )
      return 0LL;
  }
  return v4;
}
