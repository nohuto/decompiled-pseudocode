__int64 __fastcall SymCryptFdefModElementGetValue(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // esi
  int v12; // eax

  v7 = a1[1];
  xHalTimerWatchdogStop();
  v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_1400064D8
                                                                       + (*a1 & (unsigned int)g_SymCryptModFnsMask)))(
          a1,
          a2,
          a6,
          a7);
  return SymCryptFdefRawGetValue(v12, v7, a3, a4, a5);
}
