__int64 __fastcall ACPIBusIrpQueryDeviceId(wchar_t **a1, size_t *a2, _QWORD *a3)
{
  void *v6; // r13
  int v7; // esi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // r15
  size_t v10; // rbx
  __int64 v11; // rcx
  size_t v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  void *v17; // rax
  size_t v18; // r8
  char *v19; // rdx
  __int64 v20; // rdx
  void *v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rax
  void *Pool2; // rax
  const char *v26; // rax
  __int64 v27; // rdx
  const char *v28; // rcx
  __int64 v29; // r8
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+30h] [rbp-48h]
  size_t pcbRemaining; // [rsp+60h] [rbp-18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  PVOID P; // [rsp+C8h] [rbp+50h] BYREF
  void *Src; // [rsp+D0h] [rbp+58h] BYREF
  unsigned __int64 v39; // [rsp+D8h] [rbp+60h] BYREF

  Src = 0LL;
  v6 = 0LL;
  Size = 0LL;
  v7 = 0;
  P = 0LL;
  v39 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 660LL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  ppszDestEnd[0] = v8;
  pcbRemaining = v10;
  if ( !v8 )
    goto LABEL_2;
  v11 = a3[95];
  if ( v11 && (unsigned int)AMLIGetNSObjectType(v11) == 12 )
  {
    v7 = ACPIGet((__int64)a3, 0x4449485Fu, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    if ( v7 >= 0 )
    {
      if ( v10 >= Size )
      {
        memmove(v9, Src, Size);
        v12 = Size;
        if ( v10 < Size )
          goto LABEL_48;
        goto LABEL_38;
      }
      goto LABEL_2;
    }
LABEL_40:
    v26 = byte_1C00622D0;
    v27 = 0LL;
    v28 = byte_1C00622D0;
    if ( a3 )
    {
      v29 = a3[1];
      v27 = (__int64)a3;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v26 = (const char *)a3[76];
        if ( (v29 & 0x400000000000LL) != 0 )
          v28 = (const char *)a3[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v27,
        (__int64)&WPP_RECORDER_INITIALIZED,
        0x28u,
        dwFlags,
        pszFormat,
        v33,
        v7,
        v27,
        v26,
        v28);
LABEL_46:
    if ( !v6 )
      goto LABEL_48;
    goto LABEL_47;
  }
  v13 = a3[126];
  v14 = -1LL;
  if ( (v13 & 8) == 0 || (v13 & 0x10) == 0 )
  {
LABEL_27:
    v23 = ACPIGet((__int64)a3, 0x4449485Fu, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    v7 = v23;
    if ( v23 == -1073741661 )
    {
      v24 = a3[76];
      if ( !v24 )
        goto LABEL_40;
      do
        ++v14;
      while ( *(_BYTE *)(v24 + v14) );
      Size = 2 * v14 + 2;
      Pool2 = (void *)ExAllocatePool2(256LL, Size, 1399874369LL);
      Src = Pool2;
      if ( !Pool2 )
        goto LABEL_2;
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Pool2, Size, L"%S", a3[76]);
      v7 = 0;
    }
    else if ( v23 < 0 )
    {
      goto LABEL_40;
    }
    if ( v10 >= Size )
    {
      memmove(v9, Src, Size);
      if ( !v9 || (v12 = Size, v10 < Size) )
      {
LABEL_39:
        if ( v7 >= 0 )
          goto LABEL_46;
        goto LABEL_40;
      }
LABEL_38:
      v7 = RtlStringCbPrintfExW(&v9[v12 >> 1], v10 - v12, ppszDestEnd, &pcbRemaining, 0, &word_1C0063064);
      goto LABEL_39;
    }
LABEL_2:
    v7 = -1073741670;
    goto LABEL_40;
  }
  v15 = a3[76];
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v15 + v16) );
    v39 = v16;
    v17 = (void *)ExAllocatePool2(256LL, v16, 1114661697LL);
    P = v17;
    if ( !v17 )
      goto LABEL_50;
    v18 = v39;
    v19 = (char *)a3[76];
    if ( v39 >= 5 )
    {
      v18 = v39 - 5;
      v39 -= 5LL;
      v19 += 5;
    }
    memmove(v17, v19, v18);
    if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(P, v39) )
      goto LABEL_27;
    v21 = (void *)ExAllocatePool2(256LL, v20, 1114661697LL);
    v6 = v21;
    if ( !v21 )
      goto LABEL_48;
    if ( v39 == 7 )
    {
      v22 = 3LL;
    }
    else
    {
      v22 = 4LL;
      if ( v39 <= 4 )
      {
LABEL_23:
        v33 = (int)P;
        v7 = RtlStringCbPrintfExW(v9, v10, ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
        if ( v7 < 0 )
          goto LABEL_40;
        if ( !ppszDestEnd[0] || pcbRemaining < 2 )
        {
LABEL_47:
          ExFreePoolWithTag(v6, 0x53706341u);
          goto LABEL_48;
        }
        v9 = ppszDestEnd[0] + 1;
        v10 = pcbRemaining - 2;
        goto LABEL_27;
      }
    }
    memmove(v21, (char *)P + v22, v39 - v22);
    *((_BYTE *)P + v22) = 0;
    goto LABEL_23;
  }
  v7 = ACPIGet((__int64)a3, 0x4449485Fu, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v39);
  if ( v7 < 0 )
    goto LABEL_39;
LABEL_48:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
LABEL_50:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
