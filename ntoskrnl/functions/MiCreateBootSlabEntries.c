__int64 __fastcall MiCreateBootSlabEntries(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v8; // r13
  RTL_BITMAP *Pool; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  _DWORD *v12; // r10
  int v13; // eax
  __int64 v14; // r14
  __int64 *v16; // r11
  int v17; // ebx
  __int64 v18; // rbp
  __int64 updated; // rax
  int v20; // r9d
  unsigned __int64 v21; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v23; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v25; // zf
  signed __int32 v26; // eax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a3 )
    return 0LL;
  v8 = 48 * a2 - 0x21FFFFFFFFF0LL;
  while ( 1 )
  {
    Pool = (RTL_BITMAP *)MiAllocatePool(64, 0x90uLL, 0x6553694Du);
    v10 = (unsigned __int64)Pool;
    if ( !Pool )
      return 3221225626LL;
    Pool[2].Buffer = (unsigned int *)a1;
    Pool[3].SizeOfBitMap = 512;
    Pool[3].Buffer = &Pool[4].SizeOfBitMap;
    *(_QWORD *)&Pool[2].SizeOfBitMap = v6 + 511;
    Pool[1].Buffer = (unsigned int *)v6;
    RtlSetAllBits(Pool + 3);
    v12 = (_DWORD *)(v10 + 140);
    if ( v4 )
      *v12 |= 3u;
    v13 = dword_140C6F02C;
    if ( _bittest(&v13, *(_DWORD *)(a1 + 80)) )
      *v12 |= 2u;
    v14 = 0LL;
    if ( *(_DWORD *)(a1 + 80) <= 3u )
    {
      v16 = (__int64 *)v8;
      v17 = 512;
      v8 += 24576LL;
      do
      {
        v18 = v14;
        if ( !*(v16 - 1) )
        {
          updated = MiUpdatePageFileHighInPte(*v16, (*v12 & 2) != 0 ? 7LL : 3LL);
          *v16 = updated;
          ++v14;
          --qword_140C69630;
          if ( v20 )
            v14 = v18;
        }
        v16 += 6;
        --v17;
      }
      while ( v17 );
    }
    if ( (*v12 & 1) != 0 )
      qword_140C6F690 += 512LL;
    if ( (*v12 & 2) != 0 )
      goto LABEL_12;
    v21 = 512 - v14;
    if ( v14 != 512 )
    {
      MiReturnCommit((__int64)MiSystemPartition, 512 - v14, v11);
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = 512 - v14;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_32;
      if ( v21 + CachedResidentAvailable <= 0x100 && v21 < 0x80000 )
      {
        do
        {
          v26 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v21,
                  CachedResidentAvailable);
          v25 = (_DWORD)CachedResidentAvailable == v26;
          LODWORD(CachedResidentAvailable) = v26;
          if ( v25 )
            goto LABEL_33;
        }
        while ( v26 != -1 && v21 + v26 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v23 = v21 + (int)CachedResidentAvailable - 192;
      }
      if ( v23 )
LABEL_32:
        _InterlockedExchangeAdd64(&qword_140C6F440, v23);
LABEL_33:
      qword_140C69628 -= v21;
    }
    qword_140C6F698 += v14;
LABEL_12:
    if ( _bittest64((const signed __int64 *)qword_140C6EFF0, v6 >> 9) )
      KeBugCheckEx(0x1Au, 0x3030311uLL, *(_QWORD *)(v10 + 24), *(int *)(a1 + 80), 0LL);
    _bittestandset64((signed __int64 *)qword_140C6EFF0, v6 >> 9);
    MiUpdateLargePageBitMap((__int64)MiSystemPartition, v6, 0x200uLL, 1, 0);
    MiInsertSlabEntry((__int64)MiSystemPartition, a1, v10, 0);
    v4 = a4;
    v6 += 512LL;
    v5 -= 512LL;
    if ( !v5 )
      return 0LL;
  }
}
