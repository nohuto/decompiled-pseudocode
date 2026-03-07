void __fastcall IopInitializeResourceMap(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r14d
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  unsigned int *v5; // rsi
  int v6; // ebx
  _QWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  ULONG v10; // r15d
  _DWORD *Pool2; // rax
  _DWORD *v12; // r12
  unsigned int v13; // r13d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v14; // rdi
  ULONGLONG v15; // rbx
  ULONGLONG v16; // r15
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // ebx
  bool v21; // zf
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned int v24; // [rsp+38h] [rbp-59h]
  ULONG v25; // [rsp+3Ch] [rbp-55h]
  HANDLE Handle; // [rsp+40h] [rbp-51h] BYREF
  __int64 v27; // [rsp+48h] [rbp-49h]
  UNICODE_STRING v28; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING v29; // [rsp+60h] [rbp-31h] BYREF
  _DWORD *v30; // [rsp+70h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v32[22]; // [rsp+88h] [rbp-9h] BYREF
  __int16 v33; // [rsp+9Eh] [rbp+Dh]
  char v34; // [rsp+A2h] [rbp+11h]
  char v35; // [rsp+A5h] [rbp+14h]
  __int16 v36; // [rsp+A6h] [rbp+15h]
  char v37; // [rsp+A8h] [rbp+17h]
  __int16 v38; // [rsp+ACh] [rbp+1Bh]

  Handle = 0LL;
  v27 = a1;
  v1 = a1;
  v29 = 0LL;
  DestinationString = 0LL;
  v28 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Resources");
  v2 = 0;
  v24 = 0;
  do
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        RtlInitUnicodeString(&v29, L"Reserved");
        RtlInitUnicodeString(&v28, L".Translated");
        v17 = 0;
        v18 = 0LL;
        do
        {
          if ( v18 >= 0x2C )
LABEL_33:
            _report_rangecheckfailure();
          v32[v18] = 0;
          ++v17;
          ++v18;
        }
        while ( v17 < 0x2C );
        LOBYTE(v33) = 1;
        v34 = 1;
        v5 = (unsigned int *)MmInitializeMemoryLimits(v1, v32);
        if ( !v5 )
          goto LABEL_25;
      }
      else
      {
        RtlInitUnicodeString(&v29, L"Loader Reserved");
        RtlInitUnicodeString(&v28, L".Raw");
        v3 = 0;
        v4 = 0LL;
        do
        {
          if ( v4 >= 0x2C )
            goto LABEL_33;
          v32[v4] = 0;
          ++v3;
          ++v4;
        }
        while ( v3 < 0x2C );
        v32[3] = 1;
        v36 = 257;
        v32[6] = 1;
        v37 = 1;
        v38 = 257;
        v33 = 257;
        v34 = 1;
        v35 = 1;
        v5 = (unsigned int *)MmInitializeMemoryLimits(v1, v32);
        if ( !v5 )
          return;
      }
    }
    else
    {
      RtlInitUnicodeString(&v29, L"Physical Memory");
      RtlInitUnicodeString(&v28, L".Translated");
      v5 = (unsigned int *)MmPhysicalMemoryBlock;
    }
    if ( !*v5 )
    {
      if ( v2 )
        ExFreePoolWithTag(v5, 0);
      goto LABEL_25;
    }
    v6 = 0;
    v7 = v5 + 6;
    v8 = *v5;
    do
    {
      v9 = *v7 << 12;
      if ( v9 == (unsigned __int64)(unsigned int)(16 * *(_DWORD *)v7) << 8
        || v9 == (unsigned __int64)(unsigned int)(v9 >> 16) << 16
        || v9 == (v9 & 0xFFFFFFFF00000000uLL)
        || v9 <= 0xFFFFF000 )
      {
        ++v6;
      }
      else
      {
        v19 = (v9 - 4294963201u) / 0xFFFFF000 + 1;
        v20 = v19 + v6;
        v21 = 0xFFFFFFFF00001000uLL * v19 + v9 == 0;
        v22 = v20 + 1;
        if ( v21 )
          v22 = v20;
        v6 = v22;
      }
      v7 += 2;
      --v8;
    }
    while ( v8 );
    v10 = 20 * (v6 + 1);
    v25 = v10;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v10, 0x20207050u);
    v30 = Pool2;
    v12 = Pool2;
    if ( !Pool2 )
    {
      if ( v2 )
        ExFreePoolWithTag(v5, 0);
      return;
    }
    v13 = 0;
    *Pool2 = 1;
    Pool2[4] = v6;
    v14 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(Pool2 + 5);
    if ( !*v5 )
      goto LABEL_20;
    do
    {
      v15 = *(_QWORD *)&v5[4 * v13 + 4] << 12;
      v16 = *(_QWORD *)&v5[4 * v13 + 6] << 12;
      if ( RtlCmEncodeMemIoResource(v14, 3u, v16, v15) >= 0 )
      {
        v14->ShareDisposition = 1;
LABEL_17:
        ++v14;
        goto LABEL_18;
      }
      if ( v16 > 0xFFFFF000 )
      {
        v23 = (v16 - 4294963201u) / 0xFFFFF000 + 1;
        v16 += 0xFFFFFFFF00001000uLL * v23;
        do
        {
          v14->u.Generic.Start.QuadPart = v15;
          v15 += 4294963200LL;
          *(_WORD *)&v14->Type = 259;
          v14->u.Generic.Length = -4096;
          ++v14;
          --v23;
        }
        while ( v23 );
      }
      if ( v16 )
      {
        *(_WORD *)&v14->Type = 259;
        v14->u.Generic.Start.QuadPart = v15;
        v14->u.Generic.Length = v16;
        goto LABEL_17;
      }
LABEL_18:
      ++v13;
    }
    while ( v13 < *v5 );
    v2 = v24;
    v12 = v30;
    v10 = v25;
LABEL_20:
    if ( (int)IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL) >= 0 )
    {
      IopWriteResourceList(Handle, &DestinationString, &v29, &v28, v12, v10);
      ZwClose(Handle);
    }
    ExFreePoolWithTag(v12, 0);
    if ( v2 )
      ExFreePoolWithTag(v5, 0);
    v1 = v27;
LABEL_25:
    v24 = ++v2;
  }
  while ( v2 < 3 );
}
