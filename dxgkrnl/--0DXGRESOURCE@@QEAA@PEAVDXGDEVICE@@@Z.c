DXGRESOURCE *__fastcall DXGRESOURCE::DXGRESOURCE(DXGRESOURCE *this, struct DXGDEVICE *a2)
{
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 29) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 30) = 66;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 9);
  return this;
}
