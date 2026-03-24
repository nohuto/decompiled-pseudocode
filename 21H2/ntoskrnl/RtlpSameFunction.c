/*
 * XREFs of RtlpSameFunction @ 0x140586540
 * Callers:
 *     RtlpxVirtualUnwind @ 0x14021E170 (RtlpxVirtualUnwind.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14021DF60 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x140276100 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403CF920 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlpSameFunction(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v4; // rdi
  __int64 v5; // r9
  unsigned int *v6; // rax
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = RtlpLookupPrimaryFunctionEntry(a1, a2, a3);
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v6 = RtlLookupFunctionEntry(a3, &v11, 0LL, v5);
    v7 = v11;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v6 = RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v9);
    if ( !v6 )
      return 0LL;
    v7 = *((_QWORD *)&v9 + 1);
  }
  if ( v6 && *(_DWORD *)v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v4;
  return 0LL;
}
