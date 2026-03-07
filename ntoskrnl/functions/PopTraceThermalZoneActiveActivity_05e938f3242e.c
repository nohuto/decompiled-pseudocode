void *__fastcall PopTraceThermalZoneActiveActivity(__int64 a1)
{
  __int64 v2; // rcx
  void *result; // rax
  void *v4; // rbx
  __int64 v5; // rsi
  char active; // al
  const size_t *v7; // r9
  int v8; // r10d
  int v9; // r11d
  unsigned __int8 v10[4]; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v12; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-69h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp-49h]
  int v15; // [rsp+70h] [rbp-41h]
  int v16; // [rsp+74h] [rbp-3Dh]
  __int64 v17; // [rsp+78h] [rbp-39h]
  _DWORD v18[2]; // [rsp+80h] [rbp-31h] BYREF
  _BYTE v19[16]; // [rsp+88h] [rbp-29h] BYREF
  int *v20; // [rsp+98h] [rbp-19h]
  int v21; // [rsp+A0h] [rbp-11h]
  int v22; // [rsp+A4h] [rbp-Dh]
  unsigned __int8 *v23; // [rsp+A8h] [rbp-9h]
  int v24; // [rsp+B0h] [rbp-1h]
  int v25; // [rsp+B4h] [rbp+3h]
  _BYTE *v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+C0h] [rbp+Fh]
  int v28; // [rsp+C4h] [rbp+13h]
  __int64 *v29; // [rsp+C8h] [rbp+17h]
  int v30; // [rsp+D0h] [rbp+1Fh]
  int v31; // [rsp+D4h] [rbp+23h]
  _BYTE v32[40]; // [rsp+D8h] [rbp+27h] BYREF

  v11 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v10[0] = 0;
  result = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x67446F50u);
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)(*((_QWORD *)result + 39) + 40LL);
    if ( v5 )
    {
      active = PopDiagSnapActiveActivity(a1 + 504, &v11, v10, (__int64)v32);
      if ( v11 )
      {
        if ( (active || PopThermalTelemetryVerbosity) && (unsigned int)dword_140C03928 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
          {
            v16 = 0;
            v18[1] = 0;
            v14 = v18;
            v17 = *(_QWORD *)(v5 + 136);
            v18[0] = *(unsigned __int16 *)(v5 + 128);
            v15 = 2;
            tlgCreate1Sz_wchar_t((__int64)v19, v7);
            v22 = 0;
            v25 = 0;
            v28 = 0;
            v31 = 0;
            v20 = &v11;
            *(_WORD *)v10 = v10[0];
            v27 = 4 * v10[0];
            v23 = v10;
            v29 = &v12;
            v26 = v32;
            v11 = v8;
            v21 = 4;
            v24 = v9;
            v12 = 0x1000000LL;
            v30 = 8;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C03928,
              (unsigned __int8 *)byte_14002EABB,
              0LL,
              0LL,
              9u,
              &v13);
          }
        }
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  }
  return result;
}
