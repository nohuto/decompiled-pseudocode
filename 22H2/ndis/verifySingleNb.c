/*
 * XREFs of verifySingleNb @ 0x1C007582C
 * Callers:
 *     verifySingleRxNbl @ 0x1C0075948 (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1C0075990 (verifySingleTxNbl.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C00751B0 (datapathVerifierReportProblem.c)
 *     validateMemoryPages @ 0x1C0075738 (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1C00757C8 (verifySingleMdl.c)
 */

__int64 __fastcall verifySingleNb(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdi
  char v5; // r14
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  if ( !v2 )
  {
    datapathVerifierReportProblem(0x50uLL, BugCheckParameter3, BugCheckParameter4);
    v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  }
  v5 = 0;
  v6 = 0;
  while ( v2 )
  {
    verifySingleMdl(v2, BugCheckParameter3);
    v7 = *(_DWORD *)(v2 + 40);
    if ( v2 == *(_QWORD *)(BugCheckParameter4 + 8) )
    {
      v8 = *(_DWORD *)(BugCheckParameter4 + 16);
      v5 = 1;
      if ( v8 > v7 )
      {
        datapathVerifierReportProblem(0x52uLL, BugCheckParameter3, BugCheckParameter4);
        v8 = *(_DWORD *)(BugCheckParameter4 + 16);
      }
      if ( v6 + v8 != *(_DWORD *)(BugCheckParameter4 + 40) )
        datapathVerifierReportProblem(0x53uLL, BugCheckParameter3, BugCheckParameter4);
    }
    v9 = *(_DWORD *)(BugCheckParameter4 + 24);
    v10 = *(_DWORD *)(BugCheckParameter4 + 40);
    if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    {
      if ( v6 > v10 )
      {
        if ( v6 - v10 >= v9 )
          goto LABEL_16;
        v9 -= v6 - v10;
        v12 = 0;
      }
      else
      {
        v11 = v10 - v6;
        if ( v11 >= *(_DWORD *)(v2 + 40) )
          goto LABEL_16;
        v12 = v11;
      }
      validateMemoryPages(v2, v12, v9);
    }
LABEL_16:
    v2 = *(_QWORD *)v2;
    v6 += v7;
  }
  result = (unsigned int)(*(_DWORD *)(BugCheckParameter4 + 24) + *(_DWORD *)(BugCheckParameter4 + 40));
  if ( (unsigned int)result > v6 )
    result = datapathVerifierReportProblem(0x40uLL, BugCheckParameter3, BugCheckParameter4);
  if ( !v5 )
    return datapathVerifierReportProblem(0x51uLL, BugCheckParameter3, BugCheckParameter4);
  return result;
}
