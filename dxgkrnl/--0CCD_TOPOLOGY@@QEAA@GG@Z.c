CCD_TOPOLOGY *__fastcall CCD_TOPOLOGY::CCD_TOPOLOGY(CCD_TOPOLOGY *this, unsigned __int16 a2, __int16 a3)
{
  __int64 v6; // rax

  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 72) = 1;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 1;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  CCD_TOPOLOGY::Reserve(this, a2);
  if ( a3 )
  {
    v6 = *((_QWORD *)this + 8);
    if ( v6 )
      *(_WORD *)(v6 + 20) = a3;
  }
  return this;
}
