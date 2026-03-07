__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // bx

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3) >> 8) & 0x1FF;
  if ( v3
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v3;
}
