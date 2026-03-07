void __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2, __int64 a3)
{
  char v3; // bl
  __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v8; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v10; // zf
  signed __int32 v11; // eax
  unsigned __int64 v12; // rax

  v3 = a3;
  if ( qword_140C6F658 )
  {
    v6 = a1[4] - a1[1];
    MiReturnCommit((__int64)&MiSystemPartition, v6, a3);
    if ( a2 == 2 )
    {
      MiReturnSystemCharges(&MiSystemPartition, v6, (v3 & 4) != 0 ? 15 : 5);
      return;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *a1;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( v8 + CachedResidentAvailable <= 0x100 && v8 < 0x80000 )
      {
        do
        {
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v8,
                  CachedResidentAvailable);
          v10 = (_DWORD)CachedResidentAvailable == v11;
          LODWORD(CachedResidentAvailable) = v11;
          if ( v10 )
            goto LABEL_7;
        }
        while ( v11 != -1 && v8 + v11 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v8 += (int)CachedResidentAvailable - 192;
      }
    }
    if ( v8 )
      _InterlockedExchangeAdd64(&qword_140C6F440, v8);
LABEL_7:
    v12 = -(__int64)a1[4];
    if ( a2 )
      _InterlockedExchangeAdd64(&qword_140C69620, v12);
    else
      _InterlockedExchangeAdd64(&qword_140C69618, v12);
  }
}
