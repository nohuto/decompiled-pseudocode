bool __fastcall CBaseInput::ExecutingOnSensorHostingThread(CBaseInput *this)
{
  return *((_DWORD *)this + 351) == (unsigned int)PsGetCurrentThreadId();
}
