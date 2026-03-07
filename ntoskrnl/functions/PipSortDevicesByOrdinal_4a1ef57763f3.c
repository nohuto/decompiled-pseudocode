unsigned __int64 __fastcall PipSortDevicesByOrdinal(_DWORD *a1, _DWORD *a2)
{
  return (__PAIR64__(a1[3] > a2[3], a1[3]) - (unsigned int)a2[3]) >> 32;
}
