void __fastcall MiReturnMdlCharges(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  signed __int32 v9; // eax

  MiReturnCommit(a1, a2, a3);
  v5 = a2;
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( a2 + CachedResidentAvailable <= 0x100 && a2 < 0x80000 )
      {
        do
        {
          v9 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + a2,
                 CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == v9;
          LODWORD(CachedResidentAvailable) = v9;
          if ( v8 )
            goto LABEL_14;
        }
        while ( v9 != -1 && a2 + v9 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v5 = a2 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v5 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v5);
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
LABEL_14:
    _InterlockedExchangeAdd64(&qword_140C69630, -(__int64)a2);
}
