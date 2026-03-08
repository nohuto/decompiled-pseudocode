/*
 * XREFs of ACPIBusIrpQueryCompatibleId @ 0x1C007EE84
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080330 (ACPIBusIrpQueryId.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     RtlStringCbPrintfExW @ 0x1C0017B4C (RtlStringCbPrintfExW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C0017F78 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C00483A8 (AMLIGetNSObjectType.c)
 *     ACPIAllocateBuffer @ 0x1C0097C2C (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C0098A2C (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryCompatibleId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  size_t v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rdx
  size_t v16; // r8
  char *v17; // rdx
  __int64 v18; // rdx
  void *Pool2; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  const char *v22; // rax
  __int64 v23; // rdx
  const char *v24; // rcx
  __int64 v25; // r8
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+30h] [rbp-48h]
  size_t Size; // [rsp+60h] [rbp-18h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t pcbRemaining; // [rsp+C0h] [rbp+48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp+50h] BYREF
  PVOID P; // [rsp+D0h] [rbp+58h] BYREF
  size_t v35; // [rsp+D8h] [rbp+60h] BYREF

  v35 = 0LL;
  P = 0LL;
  Src[0] = 0LL;
  Size = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 660LL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  v11 = 0x200000000000LL;
  pcbRemaining = *a2;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    LODWORD(v7) = -1073741670;
    goto LABEL_57;
  }
  v12 = *(_QWORD *)(a3 + 760);
  if ( !v12 || (unsigned int)AMLIGetNSObjectType(v12) != 12 )
  {
    v13 = *(_QWORD *)(a3 + 8);
    if ( (v13 & v11) != 0 && (v13 & 0x800000000000LL) == 0 )
    {
      v14 = *(_QWORD *)(a3 + 608);
      if ( !v14 )
      {
        LODWORD(v7) = ACPIGet(a3, 0x4449485Fu, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v35);
        if ( (int)v7 >= 0 )
          goto LABEL_63;
        goto LABEL_55;
      }
      v15 = -1LL;
      do
        ++v15;
      while ( *(_BYTE *)(v14 + v15) );
      v35 = v15;
      P = (PVOID)ExAllocatePool2(256LL, v15, 1114661697LL);
      if ( !P )
        goto LABEL_63;
      v16 = v35;
      v17 = *(char **)(a3 + 608);
      if ( v35 >= 5 )
      {
        v16 = v35 - 5;
        v35 -= 5LL;
        v17 += 5;
      }
      memmove(P, v17, v16);
      if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(P, v35) && (*(_BYTE *)(a3 + 1008) & 0x1C) == 0 )
        goto LABEL_49;
      Pool2 = (void *)ExAllocatePool2(256LL, v18, 1114661697LL);
      v6 = Pool2;
      if ( !Pool2 )
        goto LABEL_63;
      LOBYTE(v7) = v35 != 7;
      v20 = v7 + 3;
      memset(Pool2, 0, v35);
      if ( v35 > v20 )
      {
        memmove(v6, (char *)P + v20, v35 - v20);
        *((_BYTE *)P + v20) = 0;
      }
      v21 = *(_QWORD *)(a3 + 1008);
      if ( (v21 & 0x10) != 0 )
      {
        if ( (v21 & 8) != 0 )
        {
          v29 = (int)P;
          LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
          if ( (int)v7 < 0 )
            goto LABEL_56;
          if ( !ppszDestEnd || pcbRemaining < 2 )
            goto LABEL_63;
          v9 = ppszDestEnd + 1;
          v10 = pcbRemaining - 2;
          ++ppszDestEnd;
          pcbRemaining -= 2LL;
        }
        v29 = (int)P;
        LODWORD(v7) = RtlStringCbPrintfExW(v9, v10, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
        if ( (int)v7 < 0 )
        {
LABEL_56:
          if ( (_DWORD)v7 == -1073741772 )
            goto LABEL_63;
          goto LABEL_57;
        }
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_63;
        v9 = ppszDestEnd + 1;
        v10 = pcbRemaining - 2;
        ++ppszDestEnd;
        pcbRemaining -= 2LL;
      }
    }
    if ( (*(_BYTE *)(a3 + 1008) & 4) != 0 )
    {
      v29 = (int)P;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      v9,
                      v10,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_56;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_63;
      v29 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\VEN_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_56;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_63;
      v29 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(ppszDestEnd, pcbRemaining, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S");
      if ( (int)v7 < 0 )
        goto LABEL_56;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_63;
      v29 = *(unsigned __int16 *)(a3 + 646);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
      if ( (int)v7 < 0 )
        goto LABEL_56;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_63;
      v29 = *(unsigned __int16 *)(a3 + 646);
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      LODWORD(v7) = RtlStringCbPrintfExW(
                      ppszDestEnd,
                      pcbRemaining,
                      &ppszDestEnd,
                      &pcbRemaining,
                      0,
                      L"ACPI\\CLS_%04I64X&SUBCLS_%04I64X");
      if ( (int)v7 < 0 )
        goto LABEL_56;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_63;
      v9 = ppszDestEnd + 1;
      v10 = pcbRemaining - 2;
    }
LABEL_49:
    LODWORD(v7) = ACPIGet(a3, 0x4449435Fu, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&Size);
    if ( (int)v7 < 0 && v10 == *a2 )
      goto LABEL_56;
    LODWORD(v7) = 0;
    if ( v10 < Size )
      goto LABEL_7;
    memmove(v9, Src[0], Size);
    if ( !v9 )
      goto LABEL_63;
    goto LABEL_53;
  }
  LODWORD(v7) = ACPIGet(a3, 0x4449435Fu, 268960023, 0LL, 0, 0LL, 0LL, (__int64)Src, (__int64)&Size);
  if ( (int)v7 < 0 )
    goto LABEL_56;
  if ( v10 >= Size )
  {
    memmove(v9, Src[0], Size);
LABEL_53:
    if ( v10 < Size )
      goto LABEL_63;
    LODWORD(v7) = RtlStringCbPrintfExW(&v9[Size >> 1], v10 - Size, &ppszDestEnd, &pcbRemaining, 0, &word_1C0063064);
LABEL_55:
    if ( (int)v7 >= 0 )
      goto LABEL_63;
    goto LABEL_56;
  }
LABEL_7:
  LODWORD(v7) = -1073741670;
LABEL_57:
  v22 = byte_1C00622D0;
  v23 = 0LL;
  v24 = byte_1C00622D0;
  if ( a3 )
  {
    v25 = *(_QWORD *)(a3 + 8);
    v23 = a3;
    if ( (v25 & 0x200000000000LL) != 0 )
    {
      v22 = *(const char **)(a3 + 608);
      if ( (v25 & 0x400000000000LL) != 0 )
        v24 = *(const char **)(a3 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x26u,
      dwFlags,
      pszFormat,
      v29,
      v7,
      v23,
      v22,
      v24);
LABEL_63:
  if ( Src[0] )
    ExFreePoolWithTag(Src[0], 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v7;
}
