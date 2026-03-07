__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtection(DXGADAPTER **this, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  DXGADAPTER **i; // rcx
  DXGADAPTER *v7; // rcx

  v4 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 5875LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5875LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = 0;
  for ( i = (DXGADAPTER **)this[10]; i != this + 10 && i; i = (DXGADAPTER **)*i )
  {
    if ( *((_DWORD *)i + 13) == a2 && *((_DWORD *)i + 14) > v5 )
      v5 = *((_DWORD *)i + 14);
  }
  v7 = this[2];
  if ( v5 )
    return (unsigned int)DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
                           v7,
                           a2,
                           D3DKMDT_VPPMT_MACROVISION_APSTRIGGER,
                           v5);
  else
    DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(v7, a2, D3DKMDT_VPPMT_NOPROTECTION, 0);
  return v4;
}
