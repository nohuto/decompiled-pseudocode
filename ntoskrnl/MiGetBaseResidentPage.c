/*
 * XREFs of MiGetBaseResidentPage @ 0x140350A30
 * Callers:
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14035094C (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x1403B68D8 (MiActivePageClaimCandidate.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetBaseResidentPage(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rsi
  unsigned int v3; // r14d
  ULONG_PTR v4; // rdi
  int i; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  v1 = a1;
  v12 = 0LL;
  v13 = 0LL;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v3 = 0;
  v4 = v2;
  for ( i = 2; ; --i )
  {
    v6 = v3;
    v7 = MiLargePageSizes[i] - 1;
    if ( (v7 & v4) != 0 )
    {
      v4 &= ~v7;
      v1 = 48 * v4 - 0x220000000000LL;
      if ( ++v3 > 3 )
        KeBugCheckEx(0x1Au, 0x9700uLL, v2, v4, 0LL);
      *((_QWORD *)&v12 + v6) = v1;
      MiLockNestedPageAtDpcInline(48 * v4 - 0x220000000000LL);
    }
    if ( (*(_BYTE *)(v1 + 36) & 3) != 0 )
      break;
    if ( !i )
      KeBugCheckEx(0x1Au, 0x9701uLL, v2, v4, 0LL);
  }
  v8 = 0;
  v9 = (__int64 *)&v12;
  do
  {
    v10 = *v9;
    if ( !*v9 )
      break;
    if ( v10 != v1 )
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v8;
    ++v9;
  }
  while ( v8 < 3 );
  return v1;
}
