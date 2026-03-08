/*
 * XREFs of RtlpSameFunction @ 0x1405AF5A0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140281720 (RtlpxVirtualUnwind.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140281130 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140281490 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403BEF80 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlpSameFunction(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  _BYTE *v5; // rbp
  unsigned int *v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v5 = RtlpLookupPrimaryFunctionEntry(a1, a2, a3);
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v6 = RtlLookupFunctionEntry(a3, &v11, 0LL);
    v7 = v11;
    if ( v6 )
      goto LABEL_5;
    return 0LL;
  }
  v9 = 0LL;
  v10 = 0LL;
  v6 = RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v9);
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)&v9 + 1);
LABEL_5:
  if ( *(_DWORD *)v5 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v5;
  return (_BYTE *)v3;
}
