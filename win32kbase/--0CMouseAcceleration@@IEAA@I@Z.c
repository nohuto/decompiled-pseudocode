CMouseAcceleration *__fastcall CMouseAcceleration::CMouseAcceleration(CMouseAcceleration *this, unsigned int a2)
{
  *((_BYTE *)this + 8) = 0;
  memset((char *)this + 16, 0, 0x50uLL);
  *((_DWORD *)this + 24) = a2;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *(_QWORD *)this = &CMouseAcceleration::`vftable';
  *((_BYTE *)this + 112) = 1;
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity((CMouseAcceleration *)((char *)this + 104), a2);
  return this;
}
