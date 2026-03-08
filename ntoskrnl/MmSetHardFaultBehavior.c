/*
 * XREFs of MmSetHardFaultBehavior @ 0x140356964
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 */

__int64 __fastcall MmSetHardFaultBehavior(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int64 v4; // rdx
  __int64 v5; // r10
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  signed __int32 v9; // eax

  v2 = a2 == 0;
  v4 = 26LL;
  v5 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
  if ( v2 )
  {
    if ( (_UNKNOWN *)v5 != &MiSystemPartition )
      goto LABEL_21;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_21;
    if ( (unsigned __int64)(CachedResidentAvailable + 26) <= 0x100 )
    {
      do
      {
        v9 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               CachedResidentAvailable + 26,
               CachedResidentAvailable);
        v2 = (_DWORD)CachedResidentAvailable == v9;
        LODWORD(CachedResidentAvailable) = v9;
        if ( v2 )
          goto LABEL_9;
      }
      while ( v9 != -1 && (unsigned __int64)(v9 + 26LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v4 = (int)CachedResidentAvailable - 192 + 26LL;
    }
    if ( v4 )
LABEL_21:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 17280), v4);
LABEL_9:
    *(_BYTE *)(a1 + 1384) &= ~4u;
    v2 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
    if ( v2 && *(_QWORD *)(a1 + 152) != a1 + 152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( (unsigned int)MiChargeResident((void *)v5, 0x1AuLL, 1024LL) )
  {
    --*(_WORD *)(a1 + 486);
    *(_BYTE *)(a1 + 1384) |= 4u;
    return 0LL;
  }
  return 3221225626LL;
}
