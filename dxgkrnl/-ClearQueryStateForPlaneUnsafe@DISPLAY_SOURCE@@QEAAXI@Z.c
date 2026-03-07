void __fastcall DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(DISPLAY_SOURCE *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this + v3 + 2904) = 0;
}
