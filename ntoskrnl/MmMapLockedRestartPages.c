/*
 * XREFs of MmMapLockedRestartPages @ 0x140A286F0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, int a2, int a3, __int64 a4)
{
  char *AnyMultiplexedVm; // rax
  char v7; // r9
  unsigned __int64 v8; // r10

  if ( (a3 & 0xBFFFFFFF) != 0
    || (a4 & 0xFFFFFFFFFFDFFFFFuLL) != 0
    || !MiReserveDriverPtes((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12, a4, 0) )
  {
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  return MiMapMdlCommon((__int64)a1, v8, (__int64)AnyMultiplexedVm, v7, a2);
}
