__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // bx
  __int64 v5; // rcx

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v3
    && (!*((_QWORD *)PtiCurrentShared(v2) + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v5) + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    v3 = 0;
  }
  GetScreenRectForDpi(a1, v3);
  return a1;
}
