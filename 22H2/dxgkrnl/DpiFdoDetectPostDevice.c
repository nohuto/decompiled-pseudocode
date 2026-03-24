/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1C0179F40
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0175240 (DpiFdoSetAdapterPowerState.c)
 *     DpiAddDevice @ 0x1C018BAE0 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C017A1A8 (DpiDecodeResourceDescriptorLength.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C017A1CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  char v5; // r13
  void *v6; // r15
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  PIRP v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned int *Information; // rbx
  unsigned int v20; // esi
  __int64 v21; // r14
  unsigned int *v22; // r12
  unsigned int *v23; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  void *Source1; // [rsp+50h] [rbp-B0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  const wchar_t *v40; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+C0h] [rbp-40h]
  __int128 v47; // [rsp+C8h] [rbp-38h]
  __int128 v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  _QWORD v50[20]; // [rsp+F0h] [rbp-10h] BYREF

  v34 = a1;
  v3 = a1;
  memset(v50, 0, sizeof(v50));
  v4 = *(_QWORD *)(v3 + 64);
  IoStatusBlock = 0LL;
  v5 = 0;
  v6 = (void *)(v4 + 544);
  Source1 = (void *)(v4 + 544);
  if ( RtlCompareMemory((const void *)(v4 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v4 + 2695) )
  {
LABEL_21:
    *a2 = 1;
    return 0LL;
  }
  LOBYTE(v7) = 1;
  *a2 = 0;
  v8 = DpiAcquirePostDisplayInfoFromBgfx(v50, 0LL, v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 24) = v11;
    WdLogEvent5_WdError(v25);
LABEL_17:
    if ( RtlCompareMemory(v6, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v33) = 0;
    v38 = 0LL;
    v40 = L"DisableAutoAcpiPostDeivce";
    v39 = 288;
    v41 = &v33;
    v42 = 67108868;
    v43 = &v33;
    v44 = 4;
    v45 = 0LL;
    v46 = 0;
    v47 = 0LL;
    v49 = 0LL;
    v48 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v38, 0LL, 0LL);
    if ( (_DWORD)v33 )
      return 0LL;
    v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v3;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_21;
  }
  v33 = v50[2] + (unsigned int)(LODWORD(v50[1]) * HIDWORD(v50[0]));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v4 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v12 )
  {
    v12->IoStatus.Status = -1073741637;
    v12->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
    LODWORD(v18) = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 152), v12);
    if ( (_DWORD)v18 == 259 )
    {
      v28 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v18 = v28;
      if ( v28 )
      {
        v27 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v27 + 24) = v18;
LABEL_25:
        WdLogEvent5_WdError(v27);
        return (unsigned int)v18;
      }
      LODWORD(v18) = IoStatusBlock.Status;
    }
    if ( (int)v18 >= 0 )
    {
      Information = (unsigned int *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        return 0LL;
      v20 = 0;
      do
      {
        if ( v20 >= *Information )
          break;
        v21 = 0LL;
        v22 = &Information[8 * v20 + 3 + v20];
        if ( v22[1] )
        {
          while ( 1 )
          {
            v23 = &v22[5 * v21];
            if ( ((*((_BYTE *)v23 + 8) - 3) & 0xFB) == 0
              && *(_QWORD *)(v23 + 3) <= v50[2]
              && *(_QWORD *)(v23 + 3) + DpiDecodeResourceDescriptorLength(v23 + 2) >= v33 )
            {
              break;
            }
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= v22[1] )
              goto LABEL_15;
          }
          *a2 = 1;
          v5 = 1;
        }
LABEL_15:
        ++v20;
      }
      while ( !v5 );
      ExFreePoolWithTag(Information, 0);
      v3 = v34;
      v6 = Source1;
      goto LABEL_17;
    }
    if ( (_DWORD)v18 == -1073741637 )
      return 0LL;
    v27 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(v4 + 152);
    *(_QWORD *)(v27 + 32) = (int)v18;
    goto LABEL_25;
  }
  v26 = WdLogNewEntry5_WdLowResource(v13, 0LL, v14, v15);
  LODWORD(v18) = -1073741670;
  *(_QWORD *)(v26 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v26);
  return (unsigned int)v18;
}
