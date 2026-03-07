void FsRtlInitializeTunnels()
{
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  if ( (_BYTE)dword_140D1D1EC )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 2) = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  FsRtlGetTunnelParameterValue(&ValueName, (BOOLEAN **)((char *)&NlsMbCodePageTag + 2));
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxAge);
  if ( !TunnelMaxAge )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 2) = 0;
  TunnelMaxAge *= 10000000;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 2) > 0xFFFFu )
  {
    Depth = 256;
  }
  else
  {
    Depth = WORD1(NlsMbCodePageTag) >> 4;
    if ( !(WORD1(NlsMbCodePageTag) >> 4) )
    {
      if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 2) )
        goto LABEL_9;
      Depth = WORD1(NlsMbCodePageTag) + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
LABEL_9:
  ExInitializePagedLookasideList(&TunnelLookasideList, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}
