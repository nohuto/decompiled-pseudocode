QpcTimeConverter *__fastcall QpcTimeConverter::QpcTimeConverter(QpcTimeConverter *this)
{
  BOOL v2; // eax
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rdx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 1000000LL;
  v2 = QueryPerformanceFrequency(&Frequency);
  v3 = Frequency.QuadPart & -(__int64)v2;
  for ( *(_QWORD *)this = v3; v3 > 0x10C6F7A0B5EDLL; *((_QWORD *)this + 1) = v5 )
  {
    if ( *((_QWORD *)this + 1) < 0xAuLL )
      break;
    v3 /= 0xAuLL;
    v5 = *((_QWORD *)this + 1) / 0xAuLL;
    *(_QWORD *)this = v3;
  }
  return this;
}
