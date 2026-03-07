DXGPROTECTEDSESSION *__fastcall DXGPROTECTEDSESSION::DXGPROTECTEDSESSION(
        DXGPROTECTEDSESSION *this,
        struct ADAPTER_DISPLAY *a2)
{
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 17) = -1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = 66;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 144) = 0;
  *((_DWORD *)this + 37) = 1;
  *((_QWORD *)this + 19) = 0LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 17);
  return this;
}
