struct SESSION_VIEW *__fastcall ADAPTER_DISPLAY::GetSessionViewOwner(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rcx
  _DWORD **v8; // rdi

  v4 = 0LL;
  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 37LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"VidPnSourceId < m_NumVidPnSources", 37LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = 4000 * v5;
  v8 = *(_DWORD ***)(4000 * v5 + *((_QWORD *)this + 16) + 48);
  if ( !v8 )
    return 0LL;
  if ( **v8 == (unsigned int)PsGetCurrentProcessSessionId(v7, a2, a3, a4) )
    return (struct SESSION_VIEW *)v8;
  return (struct SESSION_VIEW *)v4;
}
