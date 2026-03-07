unsigned __int64 __fastcall VIDMM_SEGMENT::GetActiveVprEnd(VIDMM_SEGMENT *this)
{
  if ( *((_DWORD *)this + 103) == 1 )
    return *((_QWORD *)this + 53);
  else
    return *((_QWORD *)this + 48) + *((_QWORD *)this + 49);
}
