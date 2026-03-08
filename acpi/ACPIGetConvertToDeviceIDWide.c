/*
 * XREFs of ACPIGetConvertToDeviceIDWide @ 0x1C0029D20
 * Callers:
 *     ACPIGetConvertToDeviceID @ 0x1C0029CB8 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetWorkerForString @ 0x1C002B860 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIAmliDoubleToNameWide @ 0x1C000B4F8 (ACPIAmliDoubleToNameWide.c)
 *     RtlStringCchPrintfA @ 0x1C000B5D8 (RtlStringCchPrintfA.c)
 *     ACPIGetProcessorIDWide @ 0x1C002ABD0 (ACPIGetProcessorIDWide.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00438EC (ACPIAnsiStringToWideHelper.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceIDWide(__int64 a1, int a2, __int64 a3, int a4, __int64 *a5, int *a6)
{
  __int64 v8; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // ebp
  __int64 v13; // r14
  __int64 v14; // rdi
  int v15; // eax
  _BYTE *v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // ebx
  char *Pool2; // rax

  if ( (a4 & 0x4000000) != 0 )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (v8 & 0x1000000000LL) != 0 )
    return ACPIGetProcessorIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)a6);
  if ( (v8 & 0x800000000000LL) == 0 )
  {
LABEL_10:
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v12 = 26;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        26LL,
                        1399874369LL);
      v14 = (__int64)Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, 0xDuLL, "ACPI\\");
        ACPIAnsiStringToWideHelper(v14, 10LL);
        ACPIAmliDoubleToNameWide((_WORD *)(v14 + 10), *(_DWORD *)(a3 + 16), 0);
        goto LABEL_26;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v15 = *(_DWORD *)(a3 + 24);
      v16 = *(_BYTE **)(a3 + 32);
      if ( !v15 )
        return 3221225485LL;
      if ( *v16 == 42 )
      {
        ++v16;
        if ( v15 == 1 )
          return 3221225485LL;
      }
      v17 = -1LL;
      do
        ++v17;
      while ( v16[v17] );
      v18 = v17 + 6;
      v12 = 2 * v18;
      v13 = 2 * v18;
      v14 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v13, 1399874369LL);
      if ( v14 )
      {
        RtlStringCchPrintfA((NTSTRSAFE_PSTR)v14, v18, "ACPI\\%s", v16);
        goto LABEL_9;
      }
    }
    return 3221225626LL;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v10) );
  v11 = v10 + 1;
  v12 = 2 * v11;
  v13 = 2 * v11;
  v14 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v13, 1399874369LL);
  if ( !v14 )
    return 3221225626LL;
  RtlStringCchPrintfA((NTSTRSAFE_PSTR)v14, v11, "%s", *(_QWORD *)(a1 + 608));
LABEL_9:
  ACPIAnsiStringToWideHelper(v14, v13);
LABEL_26:
  *a5 = v14;
  if ( a6 )
    *a6 = v12;
  return 0LL;
}
