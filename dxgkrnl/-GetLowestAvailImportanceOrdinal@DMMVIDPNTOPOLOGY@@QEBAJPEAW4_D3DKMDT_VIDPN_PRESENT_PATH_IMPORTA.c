__int64 __fastcall DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
        DMMVIDPNTOPOLOGY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v4; // eax
  int v5; // ecx
  int v6; // edx

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = D3DKMDT_VPPI_UNINITIALIZED;
  v4 = D3DKMDT_VPPI_PRIMARY;
  v5 = *((_DWORD *)this + 49);
  v6 = 1;
  if ( (v5 & 1) == 0 )
    goto LABEL_4;
  do
  {
    ++v4;
    v6 *= 2;
  }
  while ( (v5 & v6) != 0 );
  if ( v4 > 32 )
  {
    WdLogSingleEntry2(2LL, 32LL, this);
    return 3223192404LL;
  }
  else
  {
LABEL_4:
    *a2 = v4;
    return 0LL;
  }
}
