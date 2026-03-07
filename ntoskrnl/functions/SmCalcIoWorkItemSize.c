__int64 __fastcall SmCalcIoWorkItemSize(_DWORD *a1, __int16 a2, unsigned int a3)
{
  if ( (*a1 & 0x2000) != 0 )
    return 48LL;
  else
    return 8 * (unsigned int)(((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12) + 96;
}
