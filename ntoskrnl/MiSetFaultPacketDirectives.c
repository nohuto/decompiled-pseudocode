/*
 * XREFs of MiSetFaultPacketDirectives @ 0x1406441A8
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x1404643C2 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetFaultPacketDirectives(__int64 a1, int a2)
{
  if ( a2 == -1073741801 )
  {
    *(_DWORD *)(a1 + 80) |= 2u;
  }
  else if ( a2 == -1073740748 )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
  }
}
