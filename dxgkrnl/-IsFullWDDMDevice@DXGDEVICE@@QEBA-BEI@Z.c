bool __fastcall DXGDEVICE::IsFullWDDMDevice(DXGDEVICE *this)
{
  return *((_QWORD *)this + 235) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
}
