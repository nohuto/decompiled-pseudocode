/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x140291B20
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14028A410 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402918F0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     MmStoreChargeResidentAvailableForRead @ 0x140291C04 (MmStoreChargeResidentAvailableForRead.c)
 */

__int64 __fastcall SmAcquireReleaseResAvailForRead(signed __int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v6; // rdx
  __int64 CachedResidentAvailable; // r8
  bool v8; // zf
  signed __int32 v9; // eax
  unsigned int v10; // ecx

  if ( a3 )
  {
    if ( qword_140D24178 == a1 )
    {
      _InterlockedExchange64(&qword_140D24178, 0LL);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = a2 + 48;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v6 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v6 >= 0x80000 )
              break;
            v9 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                   CachedResidentAvailable + v6,
                   CachedResidentAvailable);
            v8 = (_DWORD)CachedResidentAvailable == v9;
            LODWORD(CachedResidentAvailable) = v9;
            if ( v8 )
              return 1;
          }
          while ( v9 != -1 && v6 + v9 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v6 += (int)CachedResidentAvailable - 192;
        }
      }
      if ( v6 )
        _InterlockedExchangeAdd64(&qword_140C529C0, v6);
    }
    return 1;
  }
  else
  {
    v10 = MmStoreChargeResidentAvailableForRead(a2);
    if ( !v10 )
    {
      if ( qword_140D24178 )
        return 0;
      v10 = 1;
      if ( a2 != 1 || _InterlockedCompareExchange64(&qword_140D24178, a1, 0LL) )
        return 0;
    }
  }
  return v10;
}
