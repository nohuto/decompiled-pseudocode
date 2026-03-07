void __fastcall PopTraceThermalRequestActiveActivity(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 *v3; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rsi
  __int64 v6; // r14
  unsigned __int64 *Pool2; // rax
  const size_t *v8; // r15
  char active; // al
  int v10; // r10d
  int v11; // [rsp+38h] [rbp-89h] BYREF
  char v12; // [rsp+3Ch] [rbp-85h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-81h] BYREF
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-69h] BYREF
  _DWORD *v16; // [rsp+78h] [rbp-49h]
  int v17; // [rsp+80h] [rbp-41h]
  int v18; // [rsp+84h] [rbp-3Dh]
  __int64 v19; // [rsp+88h] [rbp-39h]
  _DWORD v20[2]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v21[16]; // [rsp+98h] [rbp-29h] BYREF
  int *v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+B0h] [rbp-11h]
  int v24; // [rsp+B4h] [rbp-Dh]
  unsigned __int64 *v25; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+C0h] [rbp-1h]
  int v27; // [rsp+C4h] [rbp+3h]
  __int64 *v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+D0h] [rbp+Fh]
  int v30; // [rsp+D4h] [rbp+13h]
  _DWORD v31[10]; // [rsp+D8h] [rbp+17h] BYREF

  v13 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v3 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(v2 + 48), 0x67446F50u);
  v5 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( v6 )
    {
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &v13);
      Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, v13, 1346721364LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), Pool2, &v13) >= 0 )
        {
          v8 = (unsigned __int64 *)((char *)v3 + v3[2]);
          active = PopDiagSnapActiveActivity(a1 + 40, &v11, &v12, (__int64)v31);
          if ( v11 )
          {
            if ( (active || PopThermalTelemetryVerbosity)
              && (unsigned int)dword_140C03928 > 5
              && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
            {
              v18 = 0;
              v20[1] = 0;
              v16 = v20;
              v19 = *(_QWORD *)(v6 + 136);
              v20[0] = *(unsigned __int16 *)(v6 + 128);
              v17 = 2;
              tlgCreate1Sz_wchar_t((__int64)v21, v8);
              v24 = 0;
              v27 = 0;
              v30 = 0;
              v22 = &v11;
              LODWORD(v13) = v31[0];
              v25 = &v13;
              v23 = 4;
              v28 = &v14;
              v26 = 4;
              v29 = 8;
              v11 = v10;
              v14 = 0x1000000LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C03928,
                (unsigned __int8 *)byte_14002E9C1,
                0LL,
                0LL,
                8u,
                &v15);
            }
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x50455654u);
  }
}
