/*
 * XREFs of StringFromGuid @ 0x1C02752BC
 * Callers:
 *     CreateVmSharedMemorySection @ 0x1C02750B0 (CreateVmSharedMemorySection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringFromGuid(unsigned int *a1, __int64 a2)
{
  wchar_t *Pool2; // rax
  unsigned __int64 v6; // rdx

  *(_WORD *)(a2 + 2) = 78;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, 78LL, 1801932115LL);
  *(_QWORD *)(a2 + 8) = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v6 = *(unsigned __int16 *)(a2 + 2);
  *(_WORD *)a2 = 76;
  swprintf_s(
    Pool2,
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
