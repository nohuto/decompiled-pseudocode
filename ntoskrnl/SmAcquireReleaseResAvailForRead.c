/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x14045DCE4
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14045C966 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1405CA570 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B0DD0 (MmStoreChargeResidentAvailableForRead.c)
 */

_BOOL8 __fastcall SmAcquireReleaseResAvailForRead(__int64 a1, signed __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // rdx
  bool v11; // zf
  signed __int32 v12; // eax
  BOOL v13; // ecx

  if ( a4 )
  {
    if ( *(_QWORD *)(a1 + 2056) == a2 )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 2056), 0LL);
    }
    else
    {
      v7 = a3 + 48;
      v8 = **(_QWORD **)(a1 + 1936);
      if ( (_UNKNOWN *)v8 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v7 + CachedResidentAvailable <= 0x100 && v7 < 0x80000 )
          {
            do
            {
              v12 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + v7,
                      CachedResidentAvailable);
              v11 = (_DWORD)CachedResidentAvailable == v12;
              LODWORD(CachedResidentAvailable) = v12;
              if ( v11 )
                return 1;
            }
            while ( v12 != -1 && v7 + v12 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v7 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v7 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 17280), v7);
    }
    return 1;
  }
  v13 = MmStoreChargeResidentAvailableForRead(*(void ***)(a1 + 1936), a3);
  if ( !v13 )
  {
    if ( *(_QWORD *)(a1 + 2056) )
      return 0;
    v13 = 1;
    if ( a3 != 1 || _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2056), a2, 0LL) )
      return 0;
  }
  return v13;
}
