/*
 * XREFs of MiCaptureImageExceptionValues @ 0x14072D5FC
 * Callers:
 *     MiConstructLoaderEntry @ 0x14072CE24 (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     RtlMarkExceptionHandlingPages @ 0x1406ECFC0 (RtlMarkExceptionHandlingPages.c)
 */

void __fastcall MiCaptureImageExceptionValues(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rax
  RTL_BITMAP *v4; // rdi
  _DWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned int v9; // r9d
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 48);
  v3 = RtlImageNtHeader(v1);
  v4 = *(RTL_BITMAP **)(a1 + 272);
  v5 = (_DWORD *)v3;
  v6 = *(_DWORD *)(a1 + 64) >> 12;
  v4->SizeOfBitMap = v6;
  v4->Buffer = &v4[1].SizeOfBitMap;
  RtlClearAllBits(v4);
  if ( v5[33] > 3u )
  {
    v7 = *(_DWORD *)(a1 + 152);
    v8 = v1 + (unsigned int)v5[40];
    *(_QWORD *)(a1 + 16) = v8;
    v9 = v5[41];
    *(_DWORD *)(a1 + 24) = v9;
    if ( (int)RtlMarkExceptionHandlingPages(v1, v7, v8, v9, v4) < 0 )
    {
      LODWORD(BitMapHeader) = v6;
      DbgPrintEx(
        0x66u,
        0,
        "Image %wZ has unrecognized unwind information causing a charge of %u pages\n",
        a1 + 88,
        BitMapHeader);
      RtlSetAllBits(v4);
    }
  }
}
