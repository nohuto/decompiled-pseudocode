__int64 __fastcall ViFlushDoubleBuffer(_QWORD *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  ULONG_PTR v6; // rbx
  __int64 MdlBufferSa; // rax
  ULONG_PTR v10; // rbp
  __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  char *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // r14d
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
    ViHalPreprocessOptions(byte_140C0DD08, "Cannot flush buffers that aren't mapped (Addr %p).", (const void *)0x16);
    VfReportIssueWithOptions(0xE6u, 0x16uLL, v10, (ULONG_PTR)a1, 0LL, byte_140C0DD08);
    return 0LL;
  }
  v12 = a1[7];
  v13 = (unsigned int)(LODWORD(v18[0]) << 12) + (v10 & 0xFFF);
  v14 = (char *)(v13 + a1[8]);
  v18[0] = v13;
  if ( (*(_BYTE *)(v12 + 10) & 5) != 0 )
    v15 = *(_QWORD *)(v12 + 24);
  else
    LODWORD(v15) = (unsigned int)MmMapLockedPages((PMDL)v12, 0);
  v16 = v15 + *(_DWORD *)(a1[7] + 40LL) - (_DWORD)v14;
  if ( (unsigned int)v6 > v16 )
  {
    ViHalPreprocessOptions(
      byte_140C0DD00,
      "FLUSH: Can only flush %x bytes to end of map register file (%x attempted)",
      0x10000000,
      1);
    VfReportIssueWithOptions(0xE6u, 0LL, 1uLL, v16, v6, byte_140C0DD00);
    v13 = v18[0];
    LODWORD(v6) = v16;
  }
  if ( !a5 )
  {
    v17 = a1[9];
    if ( v17 )
      ViCopyBackModifiedBuffer(a2, a3, v14, (char *)(v17 + v13), (unsigned int)v6);
  }
  if ( !(unsigned int)ViFreeMapRegistersToFile(a1, v10, (unsigned int)v6) )
    VfUtilDbgPrint("Flushing too many map registers\n");
  return 1LL;
}
