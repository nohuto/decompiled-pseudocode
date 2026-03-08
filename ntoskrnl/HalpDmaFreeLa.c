/*
 * XREFs of HalpDmaFreeLa @ 0x1404FDD64
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140511F70 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x140512DB0 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404FE8AC (HalpDmaReturnEmergencyLogicalAddressResources.c)
 */

__int64 __fastcall HalpDmaFreeLa(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int128 *v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v6 = *(_OWORD *)(a1 + 256);
  (*(void (__fastcall **)(__int64 *))(HalpDmaIommuInterfaceFcnTable + 152))(a2);
  if ( v3 == *(_QWORD *)(a1 + 560) )
    return HalpDmaReturnEmergencyLogicalAddressResources(a1);
  result = 0LL;
  v5 = &v6;
  while ( !*(_QWORD *)v5 || v3 != *(_QWORD *)(*(_QWORD *)v5 + 24LL) )
  {
    result = (unsigned int)(result + 1);
    v5 = (__int128 *)((char *)v5 + 8);
    if ( (unsigned int)result >= 2 )
      return (*(__int64 (__fastcall **)(__int64, __int128 *))(HalpDmaIommuInterfaceFcnTable + 136))(v3, v5);
  }
  return result;
}
