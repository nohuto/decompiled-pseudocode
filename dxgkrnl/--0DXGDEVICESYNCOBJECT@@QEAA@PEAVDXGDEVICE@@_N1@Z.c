DXGDEVICESYNCOBJECT *__fastcall DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(
        DXGDEVICESYNCOBJECT *this,
        struct DXGDEVICE *a2,
        char a3,
        char a4)
{
  char v5; // cl

  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  v5 = *((_BYTE *)this + 92) & 0xFC;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 92) = (4 * a4) | ((2 * a3) | v5) & 0xFB;
  if ( a3 )
    DXGDEVICE::AddDeviceSyncObjectToList(*((DXGDEVICE **)this + 2), this);
  return this;
}
