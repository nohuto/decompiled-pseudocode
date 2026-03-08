/*
 * XREFs of ACPIGetConvertToHardwareIDWide @ 0x1C002A12C
 * Callers:
 *     ACPIGetConvertToHardwareID @ 0x1C002A0C4 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetWorkerForString @ 0x1C002B860 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIAmliDoubleToName @ 0x1C000B48C (ACPIAmliDoubleToName.c)
 *     RtlStringCchPrintfA @ 0x1C000B5D8 (RtlStringCchPrintfA.c)
 *     ACPIGetProcessorIDWide @ 0x1C002ABD0 (ACPIGetProcessorIDWide.c)
 *     RtlStringCchCopyNA @ 0x1C002BADC (RtlStringCchCopyNA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00438EC (ACPIAnsiStringToWideHelper.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, unsigned int *a6)
{
  char *v6; // rdi
  char v7; // r15
  __int64 v10; // rax
  int v11; // ebx
  char *v12; // rsi
  unsigned int v13; // ebp
  __int64 v14; // rbx
  unsigned int v15; // ebx
  int v16; // esi
  char *Pool2; // rax
  int v19; // eax
  __int64 v20; // rbx
  char *v21; // rax
  unsigned int v22; // r14d
  char *v23; // rax
  char *v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0;
  v24 = 0LL;
  v25 = 0;
  if ( (a4 & 0x4000000) != 0 )
    goto LABEL_11;
  v10 = *(_QWORD *)(a1 + 8);
  if ( (v10 & 0x1000000000LL) == 0 )
  {
    if ( (v10 & 0x800000000000LL) != 0 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v14) );
      v15 = v14 - 4;
      v16 = a4 & 0x8000000;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        v15,
                        1399874369LL);
      v6 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v7 = 1;
      RtlStringCchCopyNA(Pool2, v15, (STRSAFE_PCNZCH)(*(_QWORD *)(a1 + 608) + 5LL), v15 - 1);
      goto LABEL_25;
    }
LABEL_11:
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v16 = a4 & 0x8000000;
      v15 = 8;
      v21 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      8LL,
                      1399874369LL);
      v6 = v21;
      if ( !v21 )
        return (unsigned int)-1073741670;
      v7 = 1;
      ACPIAmliDoubleToName(v21, *(_DWORD *)(a3 + 16));
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v19 = *(_DWORD *)(a3 + 24);
      v6 = *(char **)(a3 + 32);
      if ( !v19 )
        return 3221225485LL;
      if ( *v6 == 42 )
      {
        ++v6;
        if ( v19 == 1 )
          return 3221225485LL;
      }
      v20 = -1LL;
      do
        ++v20;
      while ( v6[v20] );
      v15 = v20 + 1;
      v16 = a4 & 0x8000000;
    }
LABEL_25:
    v22 = 2 * v15 + 7;
    v13 = 2 * v22;
    v23 = (char *)ExAllocatePool2((-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 2 * v22, 1399874369LL);
    v12 = v23;
    if ( !v23 )
    {
      v11 = -1073741670;
LABEL_31:
      if ( v7 == 1 )
        ExFreePoolWithTag(v6, 0);
      return (unsigned int)v11;
    }
    RtlStringCchPrintfA(v23, v22, "ACPI\\%s", v6);
    RtlStringCchPrintfA(&v12[v15 + 5], v22 - (v15 + 5), "*%s", v6);
    ACPIAnsiStringToWideHelper(v12, v13);
LABEL_28:
    *a5 = v12;
    if ( a6 )
      *a6 = v13;
    v11 = 0;
    goto LABEL_31;
  }
  v11 = ACPIGetProcessorIDWide(a1, a2, a3, a4, (__int64)&v24, (__int64)&v25);
  if ( v11 >= 0 )
  {
    v12 = v24;
    v13 = v25;
    goto LABEL_28;
  }
  return (unsigned int)v11;
}
