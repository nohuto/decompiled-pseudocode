bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // eax
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 1896);
  if ( *(_DWORD *)(a1 + 1892) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 112);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1900);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 108);
    if ( v2 == -1 )
    {
      v3 = *(unsigned __int8 *)(a1 + 1890);
      if ( !(_BYTE)v3 || v3 >= *(unsigned __int8 *)(a1 + 1889) - 1 || (v2 = *(_DWORD *)(a1 + 1912), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1904);
    }
  }
  *(_DWORD *)(a1 + 1896) = v2;
  return v1 != v2;
}
