__int64 __fastcall Win32WatchdogLiveKernelDumpCaptureInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // rdx

  v5 = (_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  v6 = 0LL;
  if ( v5[727] )
  {
    v6 = 1LL;
  }
  else if ( v5[728] )
  {
    v6 = 2LL;
  }
  else if ( v5[730] )
  {
    v6 = 4LL;
  }
  else if ( v5[729] )
  {
    v6 = 3LL;
  }
  *(_QWORD *)(a1 + 8) = v6;
  return 0LL;
}
