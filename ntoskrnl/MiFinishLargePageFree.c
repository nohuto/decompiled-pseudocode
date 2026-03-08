/*
 * XREFs of MiFinishLargePageFree @ 0x1403506BC
 * Callers:
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiFreeLargePageMemory @ 0x1403505C0 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiFinishLargePageFree(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  char v11; // al
  char v12; // r9
  char v13; // r10
  unsigned __int64 inserted; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v20; // zf
  signed __int32 v21; // eax
  _QWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v24; // [rsp+30h] [rbp-28h]

  v8 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  MiLockPageInline(a1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( a3 )
    v10 = 0LL;
  else
    v10 = 4294967293LL;
  *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), v10);
  v11 = *(_BYTE *)(a1 + 34);
  v23[0] = v9;
  v23[1] = a2;
  v24 = 0LL;
  *(_BYTE *)(a1 + 34) = v11 ^ (v11 ^ v12) & 7;
  LOBYTE(v24) = v13;
  inserted = MiInsertLargePageInNodeList((__int64)v23);
  v16 = inserted;
  if ( !inserted || a4 )
    return v16;
  MiReturnCommit(v8, inserted, v15);
  v17 = v16;
  if ( (_UNKNOWN *)v8 != &MiSystemPartition )
    goto LABEL_13;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_13;
  if ( v16 + CachedResidentAvailable > 0x100 || v16 >= 0x80000 )
  {
LABEL_11:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v17 = v16 + (int)CachedResidentAvailable - 192;
    }
    if ( !v17 )
      return v16;
LABEL_13:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 17280), v17);
    return v16;
  }
  while ( 1 )
  {
    v21 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            v16 + CachedResidentAvailable,
            CachedResidentAvailable);
    v20 = (_DWORD)CachedResidentAvailable == v21;
    LODWORD(CachedResidentAvailable) = v21;
    if ( v20 )
      return v16;
    if ( v21 == -1 || v16 + v21 > 0x100 )
      goto LABEL_11;
  }
}
