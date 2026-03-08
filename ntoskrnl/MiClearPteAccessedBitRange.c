/*
 * XREFs of MiClearPteAccessedBitRange @ 0x1403BFD84
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall MiClearPteAccessedBitRange(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  signed __int64 v8; // rax
  int v9; // eax
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v10, 0, 0xB8uLL);
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a1 + 88);
    v7 = (__int64)(a3 << 25) >> 16;
    if ( v6 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v6 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( a3 <= v6 )
    {
      do
      {
        v8 = MI_READ_PTE_LOCK_FREE(a3);
        if ( (v8 & 0x21) != 0x21 )
          break;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        _InterlockedCompareExchange64((volatile signed __int64 *)a3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8);
        ++a2;
        a3 += 8LL;
      }
      while ( a3 <= v6 );
      if ( a2 )
      {
        v9 = MiTbFlushType(*(_QWORD *)(a1 + 24));
        WORD2(v10[0]) = 0;
        v10[2] = 0LL;
        v10[3] = 0LL;
        LODWORD(v10[0]) = v9;
        LODWORD(v10[1]) = 20;
        MiInsertTbFlushEntry((__int64)v10, v7, a2, 0);
        MiFlushTbList((int *)v10);
      }
    }
  }
}
