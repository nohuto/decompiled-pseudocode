CDrawListEntryBuilder *__fastcall CDrawListEntryBuilder::CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  CDrawListEntryBuilder *result; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_QWORD *)this + 12) = (char *)this + 112;
  *((_QWORD *)this + 13) = (char *)this + 144;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = (char *)this + 192;
  *((_QWORD *)this + 21) = (char *)this + 192;
  *((_QWORD *)this + 22) = (char *)this + 2112;
  *((_QWORD *)this + 264) = (char *)this + 2144;
  *((_QWORD *)this + 265) = (char *)this + 2144;
  *((_QWORD *)this + 266) = (char *)this + 4064;
  *((_DWORD *)this + 1016) = 0;
  *((_QWORD *)this + 509) = (char *)this + 4096;
  *((_QWORD *)this + 510) = (char *)this + 4096;
  *((_QWORD *)this + 511) = (char *)this + 4444;
  result = this;
  *((_DWORD *)this + 1112) = 0;
  *((_QWORD *)this + 558) = 0LL;
  *((_DWORD *)this + 1118) = 0;
  *((_WORD *)this + 2238) = 0;
  return result;
}
