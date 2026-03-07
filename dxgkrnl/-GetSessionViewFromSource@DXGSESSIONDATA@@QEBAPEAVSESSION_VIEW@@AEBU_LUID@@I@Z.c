struct SESSION_VIEW *__fastcall DXGSESSIONDATA::GetSessionViewFromSource(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v6; // r11
  struct DISPLAY_SOURCE *DisplaySource; // rax
  _QWORD *v8; // rbx

  v3 = a3;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid && (DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v3)) != 0LL )
  {
    v8 = (_QWORD *)*((_QWORD *)DisplaySource + 6);
    if ( v8 )
    {
      if ( *v8 != v6 )
      {
        WdLogSingleEntry1(1LL, 4189LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pSessionView == NULL) || (&pSessionView->GetOwnedSession() == this)",
          4189LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    return (struct SESSION_VIEW *)v8;
  }
  else
  {
    WdLogSingleEntry4(3LL, v3, a2->HighPart, a2->LowPart, v6);
    return 0LL;
  }
}
