/*
 * XREFs of MiWriteAweClusterPte @ 0x14054E124
 * Callers:
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x14030E048 (MiWriteValidPteNewPage.c)
 *     MiRewritePteWithLockBit @ 0x1403B65B8 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiWriteAweClusterPte(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 i; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a4 )
  {
    result = (__int64)&retaddr;
    for ( i = a5; i; --i )
    {
      if ( a4 == 1 )
      {
        result = MiWriteValidPteNewPage(a2, a3, 1);
      }
      else
      {
        result = (unsigned int)(a4 - 2);
        if ( (unsigned int)result <= 1 )
          result = MiRewritePteWithLockBit(a1, a2, a3);
        else
          *a2 = a3;
      }
      if ( (a3 & 1) != 0 )
      {
        result = (a3 ^ (a3 + 4096)) & 0xFFFFFFFFF000LL;
        a3 ^= result;
      }
      ++a2;
    }
  }
  return result;
}
