_BOOL8 __fastcall KiTpIsSupportedKernelTracepointLocation(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // ecx
  char v7; // dl
  bool v8; // zf

  v4 = RtlImageNtHeader(a1);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress(v4, a1, (int)a2 - (int)a1);
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 36) & 0x22000000) != 0x20000000 )
    return 0LL;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 1414090313 || v6 == 1396790859 )
    return 0LL;
  if ( v6 == 1162297680 && *(_DWORD *)(v5 + 4) )
  {
    v7 = *(_BYTE *)(v5 + 4);
    if ( v7 == 119 )
    {
      v8 = *(_BYTE *)(v5 + 5) == 120;
      goto LABEL_13;
    }
    if ( v7 == 86 && *(_BYTE *)(v5 + 5) == 82 )
    {
      v8 = *(_BYTE *)(v5 + 6) == 70;
LABEL_13:
      if ( v8 )
        return 0LL;
    }
  }
  return a1 != PsHalImageBase
      && (a1 != PsNtosImageBase
       || v6 != 1128354388 && v6 != 1347769157 && !(unsigned int)KiTpIsExcludedKernelTracepointLocation(a2));
}
