/*
 * XREFs of MiGetExportSectionExtents @ 0x14035E1BC
 * Callers:
 *     MmDecodeExportSection @ 0x14035D424 (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14035D5C0 (MmEncodeExportSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 */

__int64 __fastcall MiGetExportSectionExtents(_QWORD *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // r8
  int v4; // edx
  __int64 result; // rax

  v2 = RtlImageNtHeader(PsNtosImageBase);
  v3 = (_DWORD *)(*(unsigned __int16 *)(v2 + 20) + v2 + 24);
  v4 = *(unsigned __int16 *)(v2 + 6);
  if ( *(_WORD *)(v2 + 6) )
  {
    while ( *v3 != 1633969454 || v3[1] != 24948 )
    {
      v3 += 10;
      if ( !--v4 )
        goto LABEL_4;
    }
    result = (unsigned int)v3[2];
    *a1 = PsNtosImageBase + (unsigned int)v3[3];
  }
  else
  {
LABEL_4:
    *a1 = 0LL;
    return 0LL;
  }
  return result;
}
