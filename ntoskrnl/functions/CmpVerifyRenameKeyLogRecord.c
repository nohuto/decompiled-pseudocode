__int64 __fastcall CmpVerifyRenameKeyLogRecord(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax
  int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // r8d
  bool v6; // cf
  unsigned int v7; // ecx

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x40 )
    return (unsigned int)-1072103376;
  v2 = *(unsigned __int16 *)(a1 + 32);
  if ( (v2 & 1) != 0 )
    return (unsigned int)-1072103376;
  v3 = *(unsigned __int16 *)(a1 + 48);
  if ( (v3 & 1) != 0 )
  {
    return (unsigned int)-1072103376;
  }
  else
  {
    v4 = v2 + 64;
    v5 = v4 + v3;
    v6 = v5 < v4;
    v7 = -1072103376;
    if ( !v6 )
      return v1 < v5 ? 0xC0190030 : 0;
  }
  return v7;
}
