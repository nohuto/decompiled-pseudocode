/*
 * XREFs of MiSetFaultPacketDirectives @ 0x1406467CC
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x14046C2C2 (MiValidVirtualizationFault.c)
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
