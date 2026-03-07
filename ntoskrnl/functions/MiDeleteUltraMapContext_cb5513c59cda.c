void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 *v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v11; // zf
  signed __int32 v12; // eax
  int v13; // ebx
  int PfnChannel; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    v4 = a2 > 2 ? 1LL : MiLargePageSizes[a2];
    MiGetUltraMapping((unsigned __int64 *)a1, a2, v4, 2);
    _InterlockedDecrement(&dword_140C681AC);
    v6 = (__int64 *)(a1 + 8);
    v7 = 0LL;
    do
    {
      v8 = *v6;
      if ( *v6 != -1 )
      {
        if ( byte_140C65769 )
        {
          v13 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * v8) >> 4)) + 2);
          PfnChannel = MiGetPfnChannel(48 * v8 - 0x220000000000LL);
          MiManageUltraSpacePageTable(
            48 * v8 - 0x220000000000LL,
            (PfnChannel << byte_140C6570E) | (v13 << byte_140C6570D) | (unsigned int)v8 & dword_140C65778,
            1LL);
        }
        else
        {
          MiReleaseFreshPage(48 * v8 - 0x220000000000LL);
          ++v7;
        }
        *v6 = -1LL;
      }
      ++v6;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v7 )
    {
      MiReturnCommit((__int64)&MiSystemPartition, v7, v5);
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_27;
      if ( v7 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( v7 >= 0x80000 )
            break;
          v12 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v7,
                  CachedResidentAvailable);
          v11 = (_DWORD)CachedResidentAvailable == v12;
          LODWORD(CachedResidentAvailable) = v12;
          if ( v11 )
            return;
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
      if ( v7 )
LABEL_27:
        _InterlockedExchangeAdd64(&qword_140C6F440, v7);
    }
  }
}
