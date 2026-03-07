bool __fastcall PoCpuIdledSinceLastCallImprecise(int a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = KiProcessorBlock[a1];
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 33632);
    v4 = *a2;
    *a2 = v3;
    if ( (v3 & 1) == 0 )
      return (unsigned __int64)(v3 - v4) >= 2;
  }
  else
  {
    *a2 = 0LL;
  }
  return 1;
}
