/*
 * XREFs of ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1405C8A1C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1405C93E8 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MmStoreProbeAndLockPages @ 0x14065ACBC (MmStoreProbeAndLockPages.c)
 */

__int64 __fastcall SmKmProbeAndLockAddress(unsigned __int64 a1, __int64 a2, struct _MDL *a3)
{
  __int64 result; // rax

  a3->ByteCount = a2;
  a3->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  a3->Next = 0LL;
  a3->Size = 8 * ((((a1 & 0xFFF) + a2 + 4095) >> 12) + 6);
  a3->MdlFlags = 0;
  a3->ByteOffset = a1 & 0xFFF;
  result = MmStoreProbeAndLockPages((ULONG_PTR)a3);
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result == -1073741801 )
    return 3221225901LL;
  return result;
}
