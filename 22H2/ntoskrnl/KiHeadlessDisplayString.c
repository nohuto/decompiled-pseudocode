/*
 * XREFs of KiHeadlessDisplayString @ 0x14056A740
 * Callers:
 *     KiBugCheckDebugBreak @ 0x140569800 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x1405698D0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x14056A1D4 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403778A0 (HeadlessDispatch.c)
 */

__int64 __fastcall KiHeadlessDisplayString(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
      return HeadlessDispatch(23LL, a1, a2, 0LL, 0LL);
  }
  return result;
}
