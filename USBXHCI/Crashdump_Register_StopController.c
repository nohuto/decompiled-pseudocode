/*
 * XREFs of Crashdump_Register_StopController @ 0x1C004E020
 * Callers:
 *     Crashdump_Cleanup @ 0x1C004BE10 (Crashdump_Cleanup.c)
 *     Crashdump_Register_BiosHandoff @ 0x1C004D6FC (Crashdump_Register_BiosHandoff.c)
 *     Crashdump_Register_ResetController @ 0x1C004DAA0 (Crashdump_Register_ResetController.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Register_StopController(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v2; // edi
  int v3; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(*(_QWORD *)a1 + 32LL);
  *v1 &= ~1u;
  v2 = 0;
  _InterlockedOr(v5, 0);
  v3 = 0;
  while ( (v1[1] & 1) == 0 )
  {
    KeStallExecutionProcessor(0xC8u);
    if ( (unsigned int)++v3 >= 0x50 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC failed to stop in %u ms\n", 200 * v3 / 0x3E8u);
      return (unsigned int)-1073741630;
    }
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: xHC successfully stopped in %u ms\n", 200 * v3 / 0x3E8u);
  return v2;
}
