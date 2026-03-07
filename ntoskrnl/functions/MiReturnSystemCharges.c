unsigned __int64 __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  unsigned __int64 v9; // rdx

  v3 = a2;
  if ( a3 != 2 )
  {
    v4 = -(__int64)a2;
    if ( a3 == 1 )
    {
      v9 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 32), v4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), v4);
    }
    else if ( a3 == 4 )
    {
      _InterlockedExchangeAdd64(&qword_140C69658, v4);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_140C69640, v4);
    }
  }
  result = (unsigned __int64)&MiSystemPartition;
  if ( (_UNKNOWN *)a1 != &MiSystemPartition )
    goto LABEL_12;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_12;
  result = v3 + CachedResidentAvailable;
  if ( v3 + CachedResidentAvailable > 0x100 || v3 >= 0x80000 )
  {
LABEL_11:
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v3 += (int)result;
      }
    }
LABEL_12:
    if ( v3 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v3);
    return result;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + v3,
                             CachedResidentAvailable);
    v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v8 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = v3 + (int)result;
      if ( v3 + CachedResidentAvailable <= 0x100 )
        continue;
    }
    goto LABEL_11;
  }
}
