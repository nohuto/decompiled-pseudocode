/*
 * XREFs of HvlEnableVsmCalls @ 0x140B7294C
 * Callers:
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14037FC60 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x140676440 (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x140B901B4 (VslBindNtIum.c)
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
