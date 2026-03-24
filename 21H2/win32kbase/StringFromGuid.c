/*
 * XREFs of StringFromGuid @ 0x1C0200BF4
 * Callers:
 *     CreateVmSharedMemorySection @ 0x1C02009D8 (CreateVmSharedMemorySection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringFromGuid(unsigned int *a1, __int64 a2)
{
  wchar_t *PoolWithTag; // rax
  unsigned __int64 v6; // rdx

  *(_WORD *)(a2 + 2) = 78;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x4EuLL, 0x6B674D53u);
  *(_QWORD *)(a2 + 8) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v6 = *(unsigned __int16 *)(a2 + 2);
  *(_WORD *)a2 = 76;
  swprintf_s(
    PoolWithTag,
    v6 >> 1,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *a1,
    *((unsigned __int16 *)a1 + 2),
    *((unsigned __int16 *)a1 + 3),
    *((unsigned __int8 *)a1 + 8),
    *((unsigned __int8 *)a1 + 9),
    *((unsigned __int8 *)a1 + 10),
    *((unsigned __int8 *)a1 + 11),
    *((unsigned __int8 *)a1 + 12),
    *((unsigned __int8 *)a1 + 13),
    *((unsigned __int8 *)a1 + 14),
    *((unsigned __int8 *)a1 + 15));
  return 0LL;
}
