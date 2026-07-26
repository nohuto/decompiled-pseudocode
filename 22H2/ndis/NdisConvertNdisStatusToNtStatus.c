/*
 * XREFs of NdisConvertNdisStatusToNtStatus @ 0x1C0019180
 * Callers:
 *     NdisWdfRegisterMiniportDriver @ 0x1C0062D50 (NdisWdfRegisterMiniportDriver.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0109648 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010C10C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012D504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0146184 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014679C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNdisStatusToNtStatus(int a1)
{
  __int64 result; // rax

  if ( a1 > 0 && a1 != 259 && a1 != 1076035585 )
    return 3221225473LL;
  result = 3221225507LL;
  if ( a1 != -1073676266 )
    return (unsigned int)a1;
  return result;
}
