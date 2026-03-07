bool __fastcall DXGPROTECTEDSESSION::Close(DXGPROTECTEDSESSION *this, unsigned int a2)
{
  DXGPROCESS *Current; // rax

  if ( a2 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    DXGPROCESS::FreeHandleSafe(Current, a2);
  }
  if ( !*((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1172LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 1172LL, 0LL, 0LL, 0LL, 0LL);
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) == 0;
}
