/*
 * XREFs of RaidCompleteMiniportRequestCallback @ 0x1C0044E04
 * Callers:
 *     StorPurgeEventQueue @ 0x1C00348E4 (StorPurgeEventQueue.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 *     DbgGetAddressLongFromXrb @ 0x1C002A354 (DbgGetAddressLongFromXrb.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D640 (RaidAdapterPoFxIdleComponent.c)
 */

char __fastcall RaidCompleteMiniportRequestCallback(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, _QWORD, __int64))
{
  char result; // al
  unsigned int AddressLongFromXrb; // eax
  __int64 v11; // r8

  result = *(_BYTE *)(a4 - 32) & 0x1C;
  if ( result == 12 )
  {
    if ( (qword_1C0069310 & 0x40) != 0 )
    {
      AddressLongFromXrb = DbgGetAddressLongFromXrb(a4 - 48);
      DbgLogRequest(
        *(_QWORD *)(a4 + 168),
        13,
        *(_QWORD *)(a4 + 112),
        AddressLongFromXrb,
        *(_QWORD *)(a4 + 120),
        v11,
        0LL);
    }
    if ( (*(_BYTE *)(a4 - 31) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponent(*(_QWORD *)(a4 + 168), *(unsigned int *)(a4 + 700), 0LL);
      *(_BYTE *)(a4 - 31) &= ~1u;
    }
    a5(a1, a3, a4);
    *(_BYTE *)(*(_QWORD *)(a4 + 120) + 3LL) = a2;
    return (*(__int64 (__fastcall **)(__int64))(a4 + 608))(a4 - 48);
  }
  return result;
}
