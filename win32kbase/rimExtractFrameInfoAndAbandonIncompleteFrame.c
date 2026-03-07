__int64 __fastcall rimExtractFrameInfoAndAbandonIncompleteFrame(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _WORD *a10)
{
  unsigned int v10; // r11d

  v10 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 472) + 360LL) & 2) != 0 )
  {
    return (unsigned int)rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
                           a1,
                           a2,
                           a3,
                           a4,
                           (__int64)a5,
                           (__int64)a6,
                           (__int64)a7,
                           (__int64)a8,
                           (__int64)a9,
                           (__int64)a10);
  }
  else
  {
    *a5 = 1;
    *a6 = 1;
    *a7 = 1;
    *a8 = 1;
    *a9 = 0;
    *a10 = 0;
  }
  return v10;
}
