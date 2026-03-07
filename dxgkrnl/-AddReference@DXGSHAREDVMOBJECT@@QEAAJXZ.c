__int64 __fastcall DXGSHAREDVMOBJECT::AddReference(DXGSHAREDVMOBJECT *this)
{
  if ( *((int *)this + 6) < 0 )
  {
    WdLogSingleEntry1(1LL, 16201LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Reference >= 0", 16201LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
