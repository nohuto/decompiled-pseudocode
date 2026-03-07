__int64 __fastcall CD3DDevice::Release(CD3DDevice *this)
{
  if ( *((_DWORD *)this + 2) == 2 )
  {
    *((_QWORD *)this + 187) = GetCurrentFrameId() + 5;
    ScheduleCompositionPass(1000LL, 0x20000LL);
  }
  return CMILRefCountBaseT<IUnknown>::InternalRelease(this);
}
