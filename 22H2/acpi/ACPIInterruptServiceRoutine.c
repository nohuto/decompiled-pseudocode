/*
 * XREFs of ACPIInterruptServiceRoutine @ 0x1C0025E90
 * Callers:
 *     <none>
 * Callees:
 *     READ_PM1_STATUS @ 0x1C0010154 (READ_PM1_STATUS.c)
 *     CLEAR_PM1_STATUS_BITS @ 0x1C0025FEC (CLEAR_PM1_STATUS_BITS.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00265D0 (ACPIGpeEnableDisableEvents.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0026904 (ACPIReadGpeStatusRegister.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ACPIInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v5; // ebx
  unsigned __int8 v6; // al
  _BOOL8 v7; // r8
  int v8; // edi
  int v9; // esi
  signed __int32 v10; // eax
  unsigned int v11; // esi
  signed __int32 v12; // edx
  unsigned int i; // r9d

  v3 = 0;
  v5 = (unsigned __int16)(READ_PM1_STATUS() & (*((_WORD *)AcpiInformation + 56) | 0x8401));
  if ( *((_WORD *)AcpiInformation + 51) )
  {
    while ( 1 )
    {
      v6 = ACPIReadGpeStatusRegister(v3);
      v4 = v3;
      LOBYTE(v4) = *((_BYTE *)GpeCurEnable + v3);
      if ( ((unsigned __int8)v4 & v6) != 0 )
        break;
      if ( ++v3 >= *((unsigned __int16 *)AcpiInformation + 51) )
        goto LABEL_4;
    }
    v5 |= 0x10000u;
  }
LABEL_4:
  if ( (AcpiOverrideAttributes & 0x200) != 0 && !v5 )
    v5 = 0x10000;
  v7 = 0LL;
  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace && *(_DWORD *)(AcpiPccLegacySubspace + 432) )
      v7 = (**(_WORD **)(AcpiPccLegacySubspace + 56) & 2) != 0;
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v4 = AcpiPccSubspaces + 648LL * i;
        if ( ((*(_BYTE *)v4 + 1) & 0xFE) == 0
          && *(_QWORD *)(v4 + 56)
          && (*(_DWORD *)(v4 + 432) && (**(_WORD **)(v4 + 56) & 2) != 0 || (**(_WORD **)(v4 + 56) & 8) != 0) )
        {
          LOBYTE(v7) = 1;
        }
      }
    }
    if ( v7 )
      v5 |= 0x20000u;
  }
  v8 = v5 & 0x11;
  if ( (v5 & 0x11) != 0 )
  {
    CLEAR_PM1_STATUS_BITS(v5 & 0x11, v4, v7);
    if ( (v5 & 1) != 0 )
      (*(void (**)(void))(PmHalDispatchTable + 8))();
    v5 &= ~v8;
  }
  if ( v5 )
  {
    v9 = v5 | 0x10000;
    if ( (v5 & ~*(_DWORD *)(a2 + 88)) != 0 )
      v9 = v5;
    if ( (v9 & 0x10000) != 0 )
      ACPIGpeEnableDisableEvents(0LL);
    CLEAR_PM1_STATUS_BITS((unsigned __int16)v9, v4, v7);
    v10 = *(_DWORD *)(a2 + 88);
    v11 = v9 | 0x80000000;
    do
    {
      v12 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), v11 | v10, v10);
    }
    while ( v12 != v10 );
    v8 |= v11 & ~v10;
    if ( v8 < 0 )
      KeInsertQueueDpc((PRKDPC)(a2 + 96), 0LL, 0LL);
  }
  return v8 != 0;
}
