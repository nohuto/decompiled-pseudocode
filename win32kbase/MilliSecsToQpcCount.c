unsigned __int64 __fastcall MilliSecsToQpcCount(__int64 a1)
{
  return gliQpcFreq.QuadPart * a1 / 0x3E8uLL;
}
