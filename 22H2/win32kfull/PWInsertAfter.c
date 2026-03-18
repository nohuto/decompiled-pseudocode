/*
 * XREFs of PWInsertAfter @ 0x1C00F3840
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0025DF0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall PWInsertAfter(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 <= 1 || a1 == -2LL || a1 == -1LL )
    return a1;
  result = HMValidateHandleNoSecure(a1, 1);
  if ( !result || *(char *)(*(_QWORD *)(result + 40) + 19LL) < 0 || !*(_QWORD *)(result + 104) )
    return 0LL;
  return result;
}
