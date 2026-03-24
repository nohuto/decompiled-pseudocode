/*
 * XREFs of MmSetHardFaultBehavior @ 0x14032AAE8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall MmSetHardFaultBehavior(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  unsigned __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  signed __int32 v10; // eax

  v4 = a2 == 0;
  v6 = 26LL;
  if ( v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_11;
    if ( (unsigned __int64)(CachedResidentAvailable + 26) <= 0x100 )
    {
      do
      {
        v10 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + 26,
                CachedResidentAvailable);
        v4 = (_DWORD)CachedResidentAvailable == v10;
        LODWORD(CachedResidentAvailable) = v10;
        if ( v4 )
          goto LABEL_8;
      }
      while ( v10 != -1 && (unsigned __int64)(v10 + 26LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v6 = (int)CachedResidentAvailable - 192 + 26LL;
    }
    if ( v6 )
LABEL_11:
      _InterlockedExchangeAdd64(&qword_140C52980, v6);
LABEL_8:
    *(_BYTE *)(a1 + 1304) &= ~4u;
    KiLeaveGuardedRegionUnsafe(a1);
    return 0LL;
  }
  if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x1AuLL, 1024LL, a4) )
  {
    --*(_WORD *)(a1 + 486);
    *(_BYTE *)(a1 + 1304) |= 4u;
    return 0LL;
  }
  return 3221225626LL;
}
