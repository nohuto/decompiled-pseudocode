bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_QWORD *)this + 2) )
    return *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) == PsGetCurrentProcess(this, a2, a3, a4);
  else
    return *((_DWORD *)this + 350) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
}
