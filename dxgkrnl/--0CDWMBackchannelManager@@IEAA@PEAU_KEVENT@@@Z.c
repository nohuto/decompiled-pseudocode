CDWMBackchannelManager *__fastcall CDWMBackchannelManager::CDWMBackchannelManager(
        CDWMBackchannelManager *this,
        struct _KEVENT *a2)
{
  CDWMBackchannelManager *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CBackchannelManager::`vftable';
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_DWORD *)this + 7) = -1;
  ObfReferenceObject(a2);
  *((_BYTE *)this + 40) &= 0xF8u;
  *(_QWORD *)this = &CDWMBackchannelManager::`vftable';
  result = this;
  *((_DWORD *)this + 7) = 1024;
  return result;
}
