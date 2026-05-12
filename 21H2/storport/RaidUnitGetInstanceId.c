/*
 * XREFs of RaidUnitGetInstanceId @ 0x1C001B1DC
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C0074B64 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x1C001B260 (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall RaidUnitGetInstanceId(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rax
  wchar_t *v5; // rbx
  NTSTATUS result; // eax

  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x28uLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( Pool )
    result = RtlStringCchPrintfW(
               Pool,
               0x14uLL,
               L"%02x%02x%02x",
               *(unsigned __int8 *)(a1 + 96),
               *(unsigned __int8 *)(a1 + 97),
               *(unsigned __int8 *)(a1 + 98));
  else
    result = -1073741801;
  *a2 = v5;
  return result;
}
