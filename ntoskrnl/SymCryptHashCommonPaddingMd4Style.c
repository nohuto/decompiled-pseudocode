/*
 * XREFs of SymCryptHashCommonPaddingMd4Style @ 0x1403FD438
 * Callers:
 *     SymCryptMd5Result @ 0x1403F7F80 (SymCryptMd5Result.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     _guard_dispatch_icall_nop @ 0x140411B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SymCryptHashCommonPaddingMd4Style(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *a2;
  *((_BYTE *)a2 + v3 + 32) = 0x80;
  v5 = v3 + 1;
  if ( v5 > 0x38 )
  {
    SymCryptWipe((__int64)a2 + v5 + 32, 64 - v5);
    (*(void (__fastcall **)(char *, unsigned int *, __int64, __int64 *))(a1 + 24))(
      (char *)a2 + *(unsigned int *)(a1 + 44),
      a2 + 8,
      64LL,
      &v7);
    v5 = 0LL;
  }
  SymCryptWipe((__int64)a2 + v5 + 32, 64 - v5);
  *((_QWORD *)a2 + 11) = 8LL * *((_QWORD *)a2 + 2);
  return (*(__int64 (__fastcall **)(char *, unsigned int *, __int64, __int64 *))(a1 + 24))(
           (char *)a2 + *(unsigned int *)(a1 + 44),
           a2 + 8,
           64LL,
           &v7);
}
