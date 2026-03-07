__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  const void *v5; // r13
  __int64 v6; // r8
  int v7; // eax
  PIRP v8; // rax
  __int64 v9; // rbx
  unsigned int *Information; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  unsigned int *v13; // r12
  unsigned int *v14; // r15
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+88h] [rbp-78h]
  const wchar_t *v24; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+C8h] [rbp-38h]
  __int128 v32; // [rsp+D8h] [rbp-28h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  _QWORD v34[20]; // [rsp+F0h] [rbp-10h] BYREF

  v19 = a1;
  v3 = a1;
  memset(v34, 0, sizeof(v34));
  v4 = *(_QWORD *)(v3 + 64);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( *(_BYTE *)(v4 + 2698) )
    return 0LL;
  v5 = (const void *)(v4 + 544);
  if ( RtlCompareMemory((const void *)(v4 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v4 + 2695) )
  {
LABEL_21:
    *a2 = 1;
    return 0LL;
  }
  LOBYTE(v6) = 1;
  *a2 = 0;
  v7 = DpiAcquirePostDisplayInfoFromBgfx(v34, 0LL, v6);
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
LABEL_17:
    if ( RtlCompareMemory(v5, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v18) = 0;
    v22 = 0LL;
    v24 = L"DisableAutoAcpiPostDeivce";
    v23 = 288;
    v25 = &v18;
    v26 = 67108868;
    v27 = &v18;
    v28 = 4;
    v29 = 0LL;
    v30 = 0;
    v31 = 0LL;
    v33 = 0LL;
    v32 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v22, 0LL, 0LL);
    if ( (_DWORD)v18 )
      return 0LL;
    WdLogSingleEntry1(3LL, v3);
    goto LABEL_21;
  }
  v18 = v34[2] + (unsigned int)(LODWORD(v34[1]) * HIDWORD(v34[0]));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v4 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v8 )
  {
    v9 = -1073741670LL;
    v16 = 6LL;
    goto LABEL_25;
  }
  v8->IoStatus.Status = -1073741637;
  v8->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
  LODWORD(v9) = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 152), v8);
  if ( (_DWORD)v9 == 259 )
  {
    v17 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v9 = v17;
    if ( !v17 )
    {
      LODWORD(v9) = IoStatusBlock.Status;
      goto LABEL_7;
    }
    v16 = 2LL;
LABEL_25:
    WdLogSingleEntry1(v16, v9);
    return (unsigned int)v9;
  }
LABEL_7:
  if ( (int)v9 >= 0 )
  {
    Information = (unsigned int *)IoStatusBlock.Information;
    if ( !IoStatusBlock.Information )
      return 0LL;
    v11 = 0;
    while ( v11 < *Information )
    {
      v12 = 0;
      v13 = &Information[8 * v11 + 3 + v11];
      if ( v13[1] )
      {
        do
        {
          v14 = &v13[5 * v12];
          if ( ((*((_BYTE *)v14 + 8) - 3) & 0xFB) == 0
            && *(_QWORD *)(v14 + 3) <= v34[2]
            && *(_QWORD *)(v14 + 3) + DpiDecodeResourceDescriptorLength(v14 + 2) >= v18 )
          {
            *a2 = 1;
            goto LABEL_16;
          }
          ++v12;
        }
        while ( v12 < v13[1] );
        ++v11;
      }
      else
      {
        ++v11;
      }
    }
LABEL_16:
    ExFreePoolWithTag(Information, 0);
    v3 = v19;
    goto LABEL_17;
  }
  if ( (_DWORD)v9 == -1073741637 )
    return 0LL;
  WdLogSingleEntry2(2LL, *(_QWORD *)(v4 + 152), (int)v9);
  return (unsigned int)v9;
}
