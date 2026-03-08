/*
 * XREFs of MiMarkLargePagePte @ 0x140B5E0C0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 */

__int64 __fastcall MiMarkLargePagePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v4;
  if ( (v4 & 1) != 0 && (v4 & 0x80u) != 0LL )
  {
    v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFFLL;
    if ( v6 <= qword_140C65820 && ((*(_QWORD *)(48 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v7 = 512LL;
      if ( a3 > 1 )
      {
        v8 = (unsigned int)(a3 - 1);
        do
        {
          v7 <<= 9;
          --v8;
        }
        while ( v8 );
      }
      MiUpdateLargePageBitMap((__int64)MiSystemPartition, v6, v7, 1, 0);
    }
  }
  return 0LL;
}
