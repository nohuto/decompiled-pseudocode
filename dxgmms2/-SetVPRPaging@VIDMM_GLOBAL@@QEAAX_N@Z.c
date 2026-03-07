void __fastcall VIDMM_GLOBAL::SetVPRPaging(VIDMM_GLOBAL *this, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // bl

  v3 = a2;
  VIDMM_SEGMENT::Defragment(this, a2, a3);
  *((_BYTE *)this + 40937) = (32 * v3) | *((_BYTE *)this + 40937) & 0xDF;
}
