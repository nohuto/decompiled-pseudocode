/*
 * XREFs of KiHeadlessDisplayString @ 0x1405682A0
 * Callers:
 *     KiBugCheckDebugBreak @ 0x140567360 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x140567430 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140567D34 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x140372650 (HeadlessDispatch.c)
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
