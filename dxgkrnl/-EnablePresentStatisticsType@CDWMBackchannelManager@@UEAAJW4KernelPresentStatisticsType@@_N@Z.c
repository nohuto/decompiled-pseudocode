__int64 __fastcall CDWMBackchannelManager::EnablePresentStatisticsType(__int64 a1, int a2, char a3)
{
  unsigned int v3; // r10d
  int v4; // edx
  int v5; // edx
  char v6; // al
  char v7; // r8

  v3 = 0;
  v4 = a2 - 1;
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 40) = a3 | *(_BYTE *)(a1 + 40) & 0xFE;
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *(_BYTE *)(a1 + 40) & 0xFD;
    v7 = 2 * a3;
    goto LABEL_7;
  }
  if ( v5 == 1 )
  {
    v6 = *(_BYTE *)(a1 + 40) & 0xFB;
    v7 = 4 * a3;
LABEL_7:
    *(_BYTE *)(a1 + 40) = v7 | v6;
    return v3;
  }
  return (unsigned int)-1073741811;
}
