unsigned __int64 __fastcall VidMmiTickCountTo100ns(__int64 a1)
{
  return (unsigned __int64)(10000000 * a1) / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
}
