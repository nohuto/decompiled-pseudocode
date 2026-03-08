/*
 * XREFs of ACPIInterruptServiceRoutine @ 0x1C0003D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIPccSciReceived @ 0x1C0004576 (ACPIPccSciReceived.c)
 *     CLEAR_PM1_STATUS_BITS @ 0x1C0004B96 (CLEAR_PM1_STATUS_BITS.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C002C29C (ACPIGpeEnableDisableEvents.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0038A4C (ACPIReadGpeStatusRegister.c)
 *     READ_PM1_STATUS @ 0x1C0038E70 (READ_PM1_STATUS.c)
 */

bool __fastcall ACPIInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  signed __int32 v7; // eax
  unsigned int v8; // esi
  signed __int32 v9; // edx

  v3 = 0;
  v4 = (unsigned __int16)(READ_PM1_STATUS() & (*((_WORD *)AcpiInformation + 56) | 0x8401));
  if ( *((_WORD *)AcpiInformation + 51) )
  {
    while ( ((unsigned __int8)ACPIReadGpeStatusRegister(v3) & *((_BYTE *)GpeCurEnable + v3)) == 0 )
    {
      if ( ++v3 >= *((unsigned __int16 *)AcpiInformation + 51) )
        goto LABEL_6;
    }
    v4 |= 0x10000u;
  }
LABEL_6:
  if ( (AcpiOverrideAttributes & 0x200) != 0 && !v4 )
    v4 = 0x10000;
  if ( (unsigned __int8)ACPIPccSciReceived() )
    v4 |= 0x20000u;
  v5 = v4 & 0x11;
  if ( (v4 & 0x11) != 0 )
  {
    CLEAR_PM1_STATUS_BITS(v4 & 0x11);
    if ( (v4 & 1) != 0 )
      (*(void (**)(void))(PmHalDispatchTable + 8))();
    v4 &= ~v5;
  }
  if ( v4 )
  {
    v6 = v4 | 0x10000;
    if ( (~*(_DWORD *)(a2 + 88) & v4) != 0 )
      v6 = v4;
    if ( (v6 & 0x10000) != 0 )
      ACPIGpeEnableDisableEvents(0LL);
    CLEAR_PM1_STATUS_BITS((unsigned __int16)v6);
    v7 = *(_DWORD *)(a2 + 88);
    v8 = v6 | 0x80000000;
    do
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), v8 | v7, v7);
    }
    while ( v9 != v7 );
    v5 |= v8 & ~v7;
    if ( v5 < 0 )
      KeInsertQueueDpc((PRKDPC)(a2 + 96), 0LL, 0LL);
  }
  return v5 != 0;
}
