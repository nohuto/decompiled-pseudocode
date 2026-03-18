/*
 * XREFs of HvlEnableVsmCalls @ 0x140B76E3C
 * Callers:
 *     KiInitializeBootStructures @ 0x140A8BDF0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14038C800 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x140678A90 (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x140B943D4 (VslBindNtIum.c)
 */

__int64 __fastcall HvlEnableVsmCalls(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 0x100) != 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
    {
      HvlpGetVtlCallVa();
      return VslBindNtIum();
    }
  }
  return result;
}
