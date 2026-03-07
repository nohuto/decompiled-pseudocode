__int64 __fastcall ACPIBusIrpQueryHardwareId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  int v7; // esi
  wchar_t *v8; // rax
  size_t v9; // rbx
  NTSTRSAFE_PWSTR v10; // rdi
  const char *v11; // rax
  __int64 v12; // rdx
  const char *v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  size_t v20; // r8
  char *v21; // rdx
  __int64 v22; // rdx
  void *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  NTSTATUS v26; // eax
  bool v27; // zf
  int v28; // eax
  int dwFlags; // [rsp+20h] [rbp-49h]
  int pszFormat; // [rsp+28h] [rbp-41h]
  int v31; // [rsp+30h] [rbp-39h]
  PVOID Pool2; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-1h] BYREF
  size_t Size; // [rsp+70h] [rbp+7h] BYREF
  PVOID Src; // [rsp+78h] [rbp+Fh] BYREF
  PVOID P; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v37[7]; // [rsp+88h] [rbp+1Fh] BYREF
  size_t pcbRemaining; // [rsp+E0h] [rbp+77h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E8h] [rbp+7Fh] BYREF

  Src = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  Size = 0LL;
  v37[0] = 0LL;
  v7 = ACPIGet(a3, 0x4449485Fu, 268959830, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
  if ( v7 < 0 )
    goto LABEL_4;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, Size + 660);
  v9 = *a2;
  v10 = v8;
  pcbRemaining = v9;
  *a1 = v8;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_4;
  }
  v16 = *(_QWORD *)(a3 + 760);
  if ( v16 && (unsigned int)AMLIGetNSObjectType(v16) == 12 )
  {
    memmove(v10, Src, Size);
    if ( v9 < Size )
      goto LABEL_10;
    v7 = RtlStringCbPrintfExW(&v10[Size >> 1], v9 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_1C0063064);
LABEL_23:
    if ( v7 >= 0 )
      goto LABEL_10;
    goto LABEL_4;
  }
  v17 = *(_QWORD *)(a3 + 8);
  if ( (v17 & 0x200000000000LL) == 0 || (v17 & 0x800000000000LL) != 0 )
    goto LABEL_65;
  v18 = *(_QWORD *)(a3 + 608);
  if ( !v18 )
  {
    v28 = ACPIGet(a3, 0x4449485Fu, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&Pool2, (__int64)&v33);
    goto LABEL_70;
  }
  v19 = -1LL;
  do
    ++v19;
  while ( *(_BYTE *)(v18 + v19) );
  v33 = v19;
  Pool2 = (PVOID)ExAllocatePool2(256LL, v19, 1114661697LL);
  if ( !Pool2 )
    goto LABEL_10;
  v20 = v33;
  v21 = *(char **)(a3 + 608);
  if ( v33 >= 5 )
  {
    v20 = v33 - 5;
    v33 -= 5LL;
    v21 += 5;
  }
  memmove(Pool2, v21, v20);
  if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(Pool2, v33) && (*(_BYTE *)(a3 + 1008) & 0x1C) == 0 )
    goto LABEL_65;
  v23 = (void *)ExAllocatePool2(256LL, v22, 1114661697LL);
  v6 = v23;
  if ( !v23 )
    goto LABEL_10;
  if ( v33 == 7 )
  {
    v24 = 3LL;
  }
  else
  {
    v24 = 4LL;
    if ( v33 <= 4 )
      goto LABEL_40;
  }
  memmove(v23, (char *)Pool2 + v24, v33 - v24);
  *((_BYTE *)Pool2 + v24) = 0;
LABEL_40:
  v25 = *(_QWORD *)(a3 + 1008);
  if ( (v25 & 0x10) != 0 )
  {
    v7 = ACPIGet(a3, 0x4255535Fu, 268959764, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)v37);
    if ( v7 < 0 )
      goto LABEL_4;
    if ( (*(_BYTE *)(a3 + 1008) & 8) != 0 )
    {
      v31 = (int)Pool2;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v31 = (int)Pool2;
    v26 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S");
  }
  else
  {
    if ( (v25 & 8) != 0 )
    {
      v31 = (int)Pool2;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v31 = (int)Pool2;
    v26 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
  }
  v7 = v26;
  if ( v26 >= 0 )
  {
    if ( !ppszDestEnd || pcbRemaining < 2 )
      goto LABEL_10;
    v9 = pcbRemaining - 2;
    v10 = ppszDestEnd + 1;
    v27 = (*(_BYTE *)(a3 + 1008) & 4) == 0;
    ++ppszDestEnd;
    pcbRemaining -= 2LL;
    if ( !v27 )
    {
      v31 = (int)Pool2;
      v7 = RtlStringCbPrintfExW(
             v10,
             v9,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v31 = (int)Pool2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      v7 = RtlStringCbPrintfExW(
             ppszDestEnd,
             pcbRemaining,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( v7 < 0 )
        goto LABEL_4;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_10;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
    }
LABEL_65:
    if ( v9 > Size )
    {
      memmove(v10, Src, Size);
      if ( !v10 || v9 < Size )
        goto LABEL_23;
      v28 = RtlStringCbPrintfExW(&v10[Size >> 1], v9 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_1C0063064);
LABEL_70:
      v7 = v28;
      if ( v28 >= 0 )
        goto LABEL_10;
      goto LABEL_23;
    }
    v7 = -1073741670;
  }
LABEL_4:
  v11 = byte_1C00622D0;
  v12 = 0LL;
  v13 = byte_1C00622D0;
  if ( a3 )
  {
    v14 = *(_QWORD *)(a3 + 8);
    v12 = a3;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(a3 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a3 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x29u,
      dwFlags,
      pszFormat,
      v31,
      v7,
      v12,
      v11,
      v13);
LABEL_10:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x53706341u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
