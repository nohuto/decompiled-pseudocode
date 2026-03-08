/*
 * XREFs of HalpFindDmaControllerByRequestLine @ 0x140514DC0
 * Callers:
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpFindDmaControllerByRequestLine(unsigned int a1)
{
  __int64 result; // rax

  for ( result = HalpDmaControllers; (__int64 *)result != &HalpDmaControllers; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 36) <= a1 && *(_DWORD *)(result + 40) >= a1 )
      return result;
  }
  return 0LL;
}
