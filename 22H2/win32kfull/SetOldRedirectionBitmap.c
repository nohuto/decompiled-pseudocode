/*
 * XREFs of SetOldRedirectionBitmap @ 0x1C001406C
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1C00C87AC (DeleteOldRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall SetOldRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax

  v3 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
  {
    *(_QWORD *)(Prop + 8) = a2;
    return 1;
  }
  return v3;
}
