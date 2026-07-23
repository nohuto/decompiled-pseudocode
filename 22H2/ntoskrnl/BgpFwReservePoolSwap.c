/*
 * XREFs of BgpFwReservePoolSwap @ 0x1409F11AC
 * Callers:
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x1409F35B8 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C50768 = qword_140C506E0;
      dword_140C50788 = dword_140C506DC;
      result = (unsigned int)dword_140C506D8;
      dword_140C50770 = dword_140C506D8;
      stru_140C50778 = (_RTL_BITMAP)xmmword_140C506E8;
    }
  }
  else
  {
    dword_140C506D8 = dword_140C50770;
    qword_140C506E0 = qword_140C50768;
    dword_140C506DC = dword_140C50788;
    xmmword_140C506E8 = (__int128)stru_140C50778;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
