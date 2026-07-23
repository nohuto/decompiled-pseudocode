/*
 * XREFs of SepAllocateAndInitializeCachedHandleEntry @ 0x1406C4604
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x1406C6414 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAllocateAndInitializeCachedHandleEntry(int *a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v5; // r8
  SIZE_T v6; // rsi
  char *PoolWithTag; // rax
  char *v8; // rbx

  *a2 = 0LL;
  v3 = *a1;
  v5 = 72LL;
  if ( v3 )
  {
    if ( v3 == 1 )
      v5 = *((unsigned __int16 *)a1 + 5) + 72LL;
  }
  else
  {
    v5 = 4LL * *(unsigned __int8 *)(*((_QWORD *)a1 + 1) + 1LL) + 80;
  }
  v6 = (v5 + 3) & 0xFFFFFFFCLL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x734C6553u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_DWORD *)PoolWithTag + 14) = 0;
  *((_QWORD *)PoolWithTag + 3) = 1LL;
  *((_DWORD *)PoolWithTag + 8) = *a1;
  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      *((_WORD *)PoolWithTag + 20) = *((_WORD *)a1 + 4);
      *((_WORD *)PoolWithTag + 21) = *((_WORD *)a1 + 5);
      *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 72;
      RtlCopyUnicodeString((PUNICODE_STRING)(PoolWithTag + 40), (PCUNICODE_STRING)(a1 + 2));
    }
  }
  else
  {
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 72;
    RtlCopySid(v6 - 72, PoolWithTag + 72, *((PSID *)a1 + 1));
  }
  *a2 = v8;
  return 0LL;
}
