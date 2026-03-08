/*
 * XREFs of CcUpdateDynamicRegistrySettings @ 0x1403BF3E0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     CcQueryRegKeyValue @ 0x1403BF928 (CcQueryRegKeyValue.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CcUpdateDynamicRegistrySettings(__int64 a1)
{
  bool v1; // r14
  unsigned int v2; // r13d
  unsigned int v3; // r15d
  unsigned int v4; // edi
  int v5; // r12d
  int v6; // eax
  PVOID v7; // rsi
  const char *v8; // rbx
  const char *v9; // r10
  const char *v10; // r9
  const char *v11; // r8
  const char *v12; // rdx
  const char *v13; // rcx
  const char *v14; // rax
  const char *v15; // r8
  const char *v16; // rcx
  const char *v17; // rdx
  const char *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // ecx
  const char *v22; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+40h] [rbp-C8h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  char v27; // [rsp+88h] [rbp-80h] BYREF
  char v28; // [rsp+89h] [rbp-7Fh]
  char v29; // [rsp+8Ah] [rbp-7Eh]
  char v30; // [rsp+8Bh] [rbp-7Dh]
  char v31; // [rsp+8Ch] [rbp-7Ch]
  char v32; // [rsp+8Dh] [rbp-7Bh]
  char v33; // [rsp+8Eh] [rbp-7Ah]
  char v34; // [rsp+8Fh] [rbp-79h]
  char v35; // [rsp+90h] [rbp-78h]
  char v36; // [rsp+91h] [rbp-77h]
  int v37; // [rsp+94h] [rbp-74h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v39[2]; // [rsp+A0h] [rbp-68h] BYREF
  const wchar_t *v40; // [rsp+A8h] [rbp-60h]
  char v41; // [rsp+B0h] [rbp-58h]
  char v42; // [rsp+B1h] [rbp-57h]
  int v43; // [rsp+B4h] [rbp-54h]
  int v44; // [rsp+B8h] [rbp-50h]
  int v45; // [rsp+BCh] [rbp-4Ch]
  unsigned int v46; // [rsp+C0h] [rbp-48h]
  int v47; // [rsp+C4h] [rbp-44h]
  _DWORD v48[2]; // [rsp+C8h] [rbp-40h] BYREF
  const WCHAR *v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D8h] [rbp-30h]
  unsigned int v51; // [rsp+DCh] [rbp-2Ch]
  unsigned int v52; // [rsp+E0h] [rbp-28h]
  char v53; // [rsp+E8h] [rbp-20h] BYREF

  v37 = 156;
  v48[1] = 0;
  v39[1] = 0;
  P = &v53;
  v27 = 0;
  v1 = 0;
  v2 = 0;
  v50 = 0;
  v41 = 0;
  v3 = 0;
  v28 = 0;
  v4 = 0;
  v43 = 0;
  v5 = 0;
  v29 = 0;
  v44 = 0;
  v30 = 0;
  v45 = 0;
  v31 = 0;
  v51 = 0;
  v32 = 0;
  v52 = 0;
  v42 = 0;
  v46 = 0;
  v33 = 0;
  v47 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  DbgPrintEx(0x7Fu, 2u, "CcUpdateDynamicRegistrySettings: Updating Dynamic Registry Keys under: \"%wZ\"\n", a1 + 56);
  v48[0] = 11141288;
  v49 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v39[0] = 2359330;
  v40 = L"TopBottomDPTEqual";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    v1 = v2 < 3;
  }
  v39[0] = 4063292;
  v40 = L"LazyWriterPercentageOfNumProcs";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v41 = 1;
    v50 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 1966108;
  v40 = L"LargeWriteSize";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v28 = 1;
    v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 3670070;
  v40 = L"SoftThrottleLargeWriteAtPct";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v29 = 1;
    v43 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 2883626;
  v40 = L"SoftThrottleDelayInMs";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v30 = 1;
    v44 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 2359330;
  v40 = L"MaxLazyWritePages";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v31 = 1;
    v45 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 4325440;
  v40 = L"PeriodicTelemetrySampleFrequency";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v32 = 1;
    v51 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 4194366;
  v40 = L"PeriodicTelemetryEventFrequency";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v42 = 1;
    v52 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 4325440;
  v40 = L"PeriodicTelemetryReportFrequency";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v33 = 1;
    v46 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 2883626;
  v40 = L"DisableCacheTelemetry";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v34 = 1;
    v47 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 2752552;
  v40 = L"EnableAsyncLazywrite";
  if ( (int)CcQueryRegKeyValue(v48, v39, &v37, &P, &v27) >= 0 )
  {
    v35 = 1;
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v39[0] = 3407922;
  v40 = L"EnableAsyncLazywriteMulti";
  v6 = CcQueryRegKeyValue(v48, v39, &v37, &P, &v27);
  v7 = P;
  if ( v6 >= 0 )
  {
    v20 = *((unsigned int *)P + 2);
    v36 = 1;
    v5 = *(_DWORD *)((char *)P + v20);
  }
  v8 = "valid";
  v9 = "valid";
  v10 = "valid";
  if ( !v31 )
    v9 = "not found";
  v11 = "valid";
  v12 = "valid";
  v13 = "valid";
  if ( !v30 )
    v10 = "not found";
  if ( !v29 )
    v11 = "not found";
  if ( !v28 )
    v12 = "not found";
  v14 = "valid";
  if ( !v41 )
    v13 = "not found";
  if ( !v1 )
    v14 = "not found";
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings(1/2): \n"
    "\tTopBottom                      : 0x%04lx(%s)\n"
    "\tLazyWriterPct                  : 0x%04lx(%s) (unsupported)\n"
    "\tLargeWriteSize                 : 0x%04lx(%s)\n"
    "\tSoftThrottleAt                 : 0x%04lx(%s)\n"
    "\tSoftThrottleDelay              : 0x%04lx(%s)\n"
    "\tMaxLazyWritePages              : 0x%04lx(%s)\n",
    v2,
    v14,
    v50,
    v13,
    v3,
    v12,
    v43,
    v11,
    v44,
    v10,
    v45,
    v9);
  v15 = "valid";
  v16 = "valid";
  v17 = "valid";
  if ( !v36 )
    v15 = "not found";
  v18 = "valid";
  if ( !v35 )
    v16 = "not found";
  LODWORD(v26) = v5;
  if ( !v34 )
    v17 = "not found";
  LODWORD(v25) = v4;
  if ( !v33 )
    v18 = "not found";
  LODWORD(v24) = v47;
  if ( !v32 )
    v8 = "not found";
  LODWORD(v23) = v46;
  v22 = v8;
  v19 = v51;
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings(2/2): \n"
    "\tPeriodicTelmetrySampleFrequency: 0x%04lx(%s)\n"
    "\tPeriodicTelmetryReportFrequency: 0x%04lx(%s)\n"
    "\tDisableCacheTelemetry          : 0x%04lx(%s)\n"
    "\tEnableAsyncLazywrite           : 0x%04lx(%s)\n"
    "\tEnableAsyncLazywriteMulti      : 0x%04lx(%s)\n",
    v51,
    v22,
    v23,
    v18,
    v24,
    v17,
    v25,
    v16,
    v26,
    v15);
  if ( v27 )
    ExFreePoolWithTag(v7, 0x78666343u);
  if ( v1 )
    CcAzure_TopBottomDPTEqual = v2;
  if ( v28 )
  {
    if ( !v3 || (CcAzure_LargeWriteSize = v3 << 10, v3 << 10 <= v3) )
      CcAzure_LargeWriteSize = 0;
  }
  if ( v29 )
  {
    v21 = 0;
    if ( (unsigned int)(v43 - 1) <= 0x63 )
      v21 = v43;
    CcAzure_SoftThrottleLargeWriteAtPct = v21;
  }
  if ( v30 && v44 )
    CcSoftThrottleDelay = v44;
  if ( v31 && (unsigned int)(v45 - 1) <= 0x7FFF )
    CcMaxLazyWritePages = v45;
  if ( v32 && (_DWORD)v19 )
    DueTime.QuadPart = -10000000 * v19;
  if ( v42 && v52 )
    unk_140C5F4E8 = 10000000LL * v52;
  if ( v33 && v46 )
    qword_140C5F4F0 = 10000000LL * v46;
  if ( v34 )
    byte_140C5F501 = v47 != 0;
  if ( v35 )
  {
    if ( v4 > 1 )
    {
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcUpdateDynamicRegistrySettings: Ignoring invalid EnableAsyncLazywrite(0x%04lx), no change to current value (0x%04lx)\n",
        v4,
        (unsigned __int8)CcEnableAsyncLazywrite);
    }
    else
    {
      CcEnableAsyncLazywrite = v4 != 0;
      if ( v4 && !CcEnablePerVolumeLazyWriter )
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcUpdateDynamicRegistrySettings: Setting EnableAsyncLazywrite requires per-Volume Lazywriter is to be enabled!\n");
    }
  }
  if ( v36 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        if ( CcEnablePerVolumeLazyWriter && CcEnableAsyncLazywrite )
          CcEnableAsyncLazywriteMulti = 1;
        else
          DbgPrintEx(
            0x7Fu,
            2u,
            "CcUpdateDynamicRegistrySettings: Setting EnableAsyncLazywriteMulti requires per-Volume Lazywriter and (simpl"
            "e) Async Lazywriter to be enabled!\n");
      }
      else
      {
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcUpdateDynamicRegistrySettings: Ignoring invalid EnableAsyncLazywriteMulti(0x%04lx), no change to current value (0x%04lx)\n",
          v5,
          (unsigned __int8)CcEnableAsyncLazywriteMulti);
      }
    }
    else
    {
      CcEnableAsyncLazywriteMulti = 0;
    }
  }
}
