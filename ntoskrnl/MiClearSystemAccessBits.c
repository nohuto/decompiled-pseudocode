/*
 * XREFs of MiClearSystemAccessBits @ 0x14038BBC4
 * Callers:
 *     MiPfnRangeIsZero @ 0x14038B144 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall MiClearSystemAccessBits(unsigned __int64 a1, __int64 a2, int a3)
{
  signed __int64 v6; // rax
  _QWORD v7[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, 0xB8uLL);
  v7[3] = 0LL;
  for ( LODWORD(v7[1]) = 20; a2; --a2 )
  {
    v6 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v6 & 0x20) != 0 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 & 0xFFFFFFFFFFFFFFDFuLL, v6);
      if ( a3 )
        MiInsertLargeTbFlushEntry((__int64)v7, a3, a1);
      else
        MiInsertTbFlushEntry((__int64)v7, (__int64)(a1 << 25) >> 16, 1LL, 0);
    }
    a1 += 8LL;
  }
  MiFlushTbList((int *)v7);
}
