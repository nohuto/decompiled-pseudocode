/*
 * XREFs of MiFillVirtualFaultInfo @ 0x140464314
 * Callers:
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x1404643C2 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillVirtualFaultInfo(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  result = a2 & 0xFFFFFFFFFFFFFLL | *a1 & 0xFFF0000000000000uLL | 0x10000000000000LL;
  *a1 = result;
  if ( (a3 & 0x42) != 0 )
  {
    result |= 0x20000000000000uLL;
    *a1 = result;
  }
  if ( a3 >= 0 )
  {
    result |= 0x40000000000000uLL;
    *a1 = result;
  }
  if ( (a3 & 0x18) != 0 )
  {
    result |= 0x80000000000000uLL;
    *a1 = result;
  }
  return result;
}
