__int64 __fastcall MiCreateUltraThreadContextHelper(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  signed __int32 v4; // r11d
  bool v8; // zf
  signed __int32 v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 UltraPage; // rax
  _QWORD *v14; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v17; // eax

  v4 = dword_140C681AC;
  if ( dword_140C681AC == dword_140C681A8 )
    return 0LL;
  while ( 1 )
  {
    v9 = _InterlockedCompareExchange(&dword_140C681AC, v4 + 1, v4);
    v8 = v4 == v9;
    v4 = v9;
    if ( v8 )
      break;
    if ( v9 == dword_140C681A8 )
      return 0LL;
  }
  *(_QWORD *)a1 = 0LL;
  v10 = a2;
  *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( !a2 )
    goto LABEL_12;
  if ( a2 > 2uLL )
    v10 = 2LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, (unsigned int)v10, 0LL, 0LL) < 0 )
  {
    _InterlockedDecrement(&dword_140C681AC);
    return 0LL;
  }
  if ( byte_140C65769 )
    MiReplenishUltraPageTables((unsigned int)(*(_DWORD *)(a3 + 12) >> byte_140C6570D));
  v11 = 0LL;
  if ( !v10 )
  {
LABEL_12:
    *(_BYTE *)(a1 + 24) = 1;
    return 1LL;
  }
  while ( 1 )
  {
    UltraPage = MiGetUltraPage(a3, a4);
    if ( UltraPage == -1 )
      break;
    *(_QWORD *)(a1 + 8 * v11 + 8) = UltraPage;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10 )
      goto LABEL_12;
  }
  _InterlockedDecrement(&dword_140C681AC);
  if ( (_DWORD)v11 )
  {
    v14 = (_QWORD *)(a1 + 8 * v11 + 8);
    do
    {
      MiReleaseFreshPage(48LL * *--v14 - 0x220000000000LL);
      *v14 = -1LL;
      LODWORD(v11) = v11 - 1;
    }
    while ( (_DWORD)v11 );
  }
  MiReturnCommit(&MiSystemPartition, v10);
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_28;
  if ( v10 + CachedResidentAvailable <= 0x100 && v10 < 0x80000 )
  {
    do
    {
      v17 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              CachedResidentAvailable + v10,
              CachedResidentAvailable);
      v8 = (_DWORD)CachedResidentAvailable == v17;
      LODWORD(CachedResidentAvailable) = v17;
      if ( v8 )
        return 0LL;
    }
    while ( v17 != -1 && v10 + v17 <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v10 += (int)CachedResidentAvailable - 192;
  }
  if ( v10 )
LABEL_28:
    _InterlockedExchangeAdd64(&qword_140C6F440, v10);
  return 0LL;
}
