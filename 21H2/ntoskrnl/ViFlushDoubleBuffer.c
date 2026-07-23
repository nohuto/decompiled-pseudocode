/*
 * XREFs of ViFlushDoubleBuffer @ 0x1409CF210
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1409CC6F0 (VfFlushAdapterBuffers.c)
 *     VfPutScatterGatherList @ 0x1409CDF30 (VfPutScatterGatherList.c)
 * Callees:
 *     MmMapLockedPages @ 0x140531EA0 (MmMapLockedPages.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViCopyBackModifiedBuffer @ 0x1409CEFA0 (ViCopyBackModifiedBuffer.c)
 *     ViFindMappedRegisterInFile @ 0x1409CF1D8 (ViFindMappedRegisterInFile.c)
 *     ViFreeMapRegistersToFile @ 0x1409CF57C (ViFreeMapRegistersToFile.c)
 *     ViGetMdlBufferSa @ 0x1409CF93C (ViGetMdlBufferSa.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViFlushDoubleBuffer(_QWORD *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  ULONG_PTR v6; // rbx
  __int64 MdlBufferSa; // rax
  ULONG_PTR v10; // r14
  __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  char *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 v17; // rcx
  ULONG_PTR v18[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  LODWORD(v18[0]) = 0;
  MdlBufferSa = ViGetMdlBufferSa(a2, a3);
  v10 = MdlBufferSa;
  if ( !MdlBufferSa )
    return 0LL;
  if ( !ViFindMappedRegisterInFile((__int64)a1, MdlBufferSa, v18) )
  {
    ViHalPreprocessOptions(byte_140C12E7C, "Cannot flush buffers that aren't mapped (Addr %p).", (const void *)0x16);
    VfReportIssueWithOptions(0xE6u, 0x16uLL, v10, (ULONG_PTR)a1, 0LL, byte_140C12E7C);
    return 0LL;
  }
  v12 = a1[7];
  v13 = (unsigned int)(LODWORD(v18[0]) << 12) + (v10 & 0xFFF);
  v14 = (char *)(v13 + a1[8]);
  v18[0] = v13;
  if ( (*(_BYTE *)(v12 + 10) & 5) != 0 )
  {
    v15 = *(_QWORD *)(v12 + 24);
  }
  else
  {
    LODWORD(v15) = (unsigned int)MmMapLockedPages((PMDL)v12, 0);
    v12 = a1[7];
  }
  v16 = v15 + *(_DWORD *)(v12 + 40) - (_DWORD)v14;
  if ( (unsigned int)v6 > v16 )
  {
    ViHalPreprocessOptions(
      byte_140C12E78,
      "FLUSH: Can only flush %x bytes to end of map register file (%x attempted)",
      0x10000000,
      1);
    VfReportIssueWithOptions(0xE6u, 0LL, 1uLL, v16, v6, byte_140C12E78);
    v13 = v18[0];
    LODWORD(v6) = v16;
  }
  if ( !a5 )
  {
    v17 = a1[9];
    if ( v17 )
      ViCopyBackModifiedBuffer(a2, a3, v14, (char *)(v13 + v17), (unsigned int)v6);
  }
  if ( !(unsigned int)ViFreeMapRegistersToFile(a1, v10, (unsigned int)v6) )
    VfUtilDbgPrint("Flushing too many map registers\n");
  return 1LL;
}
