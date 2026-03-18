/*
 * XREFs of RtlpSameFunction @ 0x1405EE570
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140296FC0 (RtlpxVirtualUnwind.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140296DC0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403A6AE0 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlpSameFunction(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v4; // rdi
  unsigned int *v5; // rax
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = RtlpLookupPrimaryFunctionEntry(a1, a2, a3);
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v5 = RtlLookupFunctionEntry(a3, &v10, 0LL);
    if ( !v5 )
      return 0LL;
    v6 = v10;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v5 = RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v8);
    if ( !v5 )
      return 0LL;
    v6 = *((_QWORD *)&v8 + 1);
  }
  if ( *(_DWORD *)v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v5, v6, a3) )
    return v4;
  return 0LL;
}
