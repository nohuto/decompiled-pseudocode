DXGVMBUSCHANNEL *__fastcall DXGVMBUSCHANNEL::DXGVMBUSCHANNEL(DXGVMBUSCHANNEL *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &DXGVMBUSCHANNEL::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 27) = 82;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 66;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 40) = 66;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 82;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 8);
  return this;
}
