/*
 * XREFs of MiReferenceCloneProto @ 0x14034A39C
 * Callers:
 *     MiIncrementCombinedPte @ 0x14034A354 (MiIncrementCombinedPte.c)
 *     MiReferenceExistingCloneProto @ 0x140662DCC (MiReferenceExistingCloneProto.c)
 * Callees:
 *     MiChargeCrossPartitionSharedPage @ 0x14034A438 (MiChargeCrossPartitionSharedPage.c)
 *     MiLockCloneBlockAtDpc @ 0x14034A49C (MiLockCloneBlockAtDpc.c)
 */

__int64 __fastcall MiReferenceCloneProto(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  unsigned int v6; // edi

  v6 = a4 & 1;
  MiLockCloneBlockAtDpc(a3);
  if ( *(_QWORD *)(a3 + 24)
    && (unsigned int)MiChargeCrossPartitionSharedPage(
                       a2,
                       *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)),
                       a3,
                       v6) )
  {
    ++*(_QWORD *)(a3 + 24);
    if ( v6 )
    {
      if ( (*(_QWORD *)(a3 + 16) & 0x2000000000000000LL) != 0 )
      {
        ++*a5;
      }
      else
      {
        ++a5[1];
        *(_QWORD *)(a3 + 16) |= 0x2000000000000000uLL;
        _InterlockedIncrement64((volatile signed __int64 *)(a2 + 17848));
      }
      *(_QWORD *)(a3 + 16) ^= (*(_QWORD *)(a3 + 16) ^ (*(_QWORD *)(a3 + 16) + 1LL)) & 0x7FFFFFFFFFFFFFLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    return 1LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
}
