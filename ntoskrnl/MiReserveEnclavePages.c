/*
 * XREFs of MiReserveEnclavePages @ 0x140646394
 * Callers:
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140289900 (MiSetPfnBlink.c)
 *     MiAllocateEnclavePages @ 0x1406447E4 (MiAllocateEnclavePages.c)
 */

__int64 __fastcall MiReserveEnclavePages(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *EnclavePages; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx

  EnclavePages = (_QWORD *)MiAllocateEnclavePages(
                             a2,
                             *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor]
                                                             + 192)
                                                 + 138LL),
                             1,
                             a3);
  if ( !EnclavePages )
    return 3221225495LL;
  *(_QWORD *)(a1 + 104) += a3;
  do
  {
    v7 = EnclavePages[3] & 0xFFFFFFFFFFLL;
    if ( v7 == 0x3FFFFFFFFFLL )
      v8 = 0LL;
    else
      v8 = 48 * v7 - 0x220000000000LL;
    *EnclavePages = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = EnclavePages;
    MiSetPfnBlink((__int64)EnclavePages, 0LL, 0);
    EnclavePages = (_QWORD *)v8;
  }
  while ( v8 );
  return 0LL;
}
