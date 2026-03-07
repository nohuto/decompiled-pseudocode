__int64 __fastcall ACPIGetProcessorIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  size_t v6; // rbx
  void *v8; // rdi
  char *v9; // rsi
  char *v10; // r13
  size_t v11; // rdx
  char *v12; // rax
  unsigned int v13; // ebx
  char *v14; // r15
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // r15d
  size_t v23; // rax
  void *Pool2; // rax
  ULONG i; // ecx
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // r12
  char *v29; // r14
  __int64 v30; // rdx
  size_t v31; // rdx
  char *v32; // rcx
  size_t v33; // rdx
  char *v34; // rcx
  char v36[4]; // [rsp+48h] [rbp-29h] BYREF
  ULONG ReturnLength; // [rsp+4Ch] [rbp-25h] BYREF
  size_t pcchRemaining; // [rsp+50h] [rbp-21h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+58h] [rbp-19h] BYREF
  char *v40; // [rsp+60h] [rbp-11h]
  __int64 v41; // [rsp+68h] [rbp-9h]
  char **v42; // [rsp+70h] [rbp-1h]
  _DWORD *v43; // [rsp+78h] [rbp+7h]
  char v44[8]; // [rsp+80h] [rbp+Fh] BYREF

  v6 = (unsigned __int16)AcpiProcessorString;
  v42 = a5;
  v8 = 0LL;
  v9 = 0LL;
  v43 = a6;
  v10 = 0LL;
  v11 = (unsigned __int16)AcpiProcessorString;
  strcpy(v44, "ACPI\\");
  *(_WORD *)v36 = 42;
  ReturnLength = 0;
  LODWORD(ppszDestEnd) = a4 & 0x40;
  v40 = 0LL;
  pcchRemaining = (unsigned __int16)AcpiProcessorString;
  if ( (a4 & 0x40) == 0 )
  {
    v23 = (unsigned __int16)AcpiProcessorString;
    v22 = a4 & 0x20;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_33;
    if ( ZwQuerySystemInformation(SystemProcessorBrandString, 0LL, 0, &ReturnLength) == -1073741820 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, ReturnLength, 1399874369LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        if ( ZwQuerySystemInformation(SystemProcessorBrandString, Pool2, ReturnLength, &ReturnLength) < 0 )
        {
          ExFreePoolWithTag(v8, 0x53706341u);
          v8 = 0LL;
        }
        else
        {
          for ( i = 0; i < ReturnLength; ++i )
          {
            v26 = *((_BYTE *)v8 + i);
            if ( !v26 )
              break;
            if ( (unsigned __int8)(v26 - 32) > 0x5Fu || v26 == 44 )
              *((_BYTE *)v8 + i) = 32;
          }
        }
      }
    }
    v27 = -1LL;
    do
      ++v27;
    while ( v44[v27] );
    v11 = v6 + (unsigned int)v27;
    pcchRemaining = v11;
    v6 = v11;
    v23 = v11;
    if ( !v8 )
    {
LABEL_33:
      v28 = 2 * v11;
      v41 = 2 * v23;
      v29 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      2 * v11,
                      1399874369LL);
      if ( !v29 )
      {
        v13 = -1073741670;
        goto LABEL_45;
      }
      if ( v22 )
      {
        if ( v8 )
          RtlStringCchPrintfA(v29, v6, "%s%s - %s", v44, *((const char **)&AcpiProcessorString + 1), (const char *)v8);
        else
          RtlStringCchPrintfA(v29, v6, "%s%s", v44, *((const char **)&AcpiProcessorString + 1));
        v30 = v41;
      }
      else
      {
        if ( !(_DWORD)ppszDestEnd )
          goto LABEL_43;
        ppszDestEnd = v29;
        RtlStringCchPrintfExA(v29, v6, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v44, v9);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v36, v9);
        v31 = pcchRemaining - 1;
        v32 = ppszDestEnd + 1;
        *(v40 - 1) = 0;
        RtlStringCchPrintfExA(v32, v31, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v44, v9);
        RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v36, v9);
        v33 = pcchRemaining - 1;
        v34 = ppszDestEnd + 1;
        *(v10 - 1) = 0;
        RtlStringCchPrintfExA(v34, v33, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v44, v9);
        RtlStringCchPrintfA(ppszDestEnd + 1, pcchRemaining - 1, "%s%s", v36, v9);
        v30 = v28;
      }
      ACPIAnsiStringToWideHelper(v29, v30);
LABEL_43:
      v13 = 0;
      *v42 = v29;
      if ( v43 )
        *v43 = v28;
LABEL_45:
      if ( !v9 )
        goto LABEL_47;
      goto LABEL_46;
    }
    v6 = v11 + ReturnLength + 3;
LABEL_32:
    v23 = v6;
    pcchRemaining = v6;
    v11 = v6;
    goto LABEL_33;
  }
  v12 = (char *)ExAllocatePool2(64LL, (unsigned __int16)AcpiProcessorString, 1399874369LL);
  v9 = v12;
  if ( !v12 )
    return (unsigned int)-1073741670;
  RtlStringCchCopyNA(v12, v6, *((STRSAFE_PCNZCH *)&AcpiProcessorString + 1), (unsigned __int16)AcpiProcessorString);
  v14 = strstr(v9, "Model");
  v40 = v14;
  v15 = strstr(v9, "Family");
  v10 = v15;
  if ( v14 && v15 )
  {
    v16 = -1LL;
    v17 = -1LL;
    do
      ++v17;
    while ( v14[v17] );
    v18 = -1LL;
    do
      ++v18;
    while ( v10[v18] );
    v19 = 6 * v6 - (unsigned int)(2 * v17) - (unsigned int)(2 * v18);
    v20 = -1LL;
    do
      ++v20;
    while ( v36[v20] );
    v21 = (unsigned int)(3 * v20) + v19;
    do
      ++v16;
    while ( v44[v16] );
    v6 = v21 + (unsigned int)(3 * v16) + 1LL;
    v22 = a4 & 0x20;
    goto LABEL_32;
  }
  v13 = -1073741823;
LABEL_46:
  ExFreePoolWithTag(v9, 0x53706341u);
LABEL_47:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x53706341u);
  return v13;
}
