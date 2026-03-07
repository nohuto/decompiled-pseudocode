__int64 __fastcall VIDMM_SEGMENT::DriverId(VIDMM_SEGMENT *this)
{
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    return 0LL;
  else
    return (unsigned int)(*((_DWORD *)this + 4) + 1);
}
