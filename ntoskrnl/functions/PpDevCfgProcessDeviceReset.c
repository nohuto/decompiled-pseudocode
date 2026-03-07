__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int inited; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v17; // [rsp+48h] [rbp-79h] BYREF
  int v18; // [rsp+4Ch] [rbp-75h] BYREF
  int v19; // [rsp+50h] [rbp-71h] BYREF
  int v20; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-51h] BYREF
  int v24; // [rsp+88h] [rbp-39h]
  __int64 v25; // [rsp+8Ch] [rbp-35h]
  int v26; // [rsp+94h] [rbp-2Dh]
  __int64 v27[10]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v28; // [rsp+E8h] [rbp+27h] BYREF

  memset(v27, 0, 0x48uLL);
  Handle = 0LL;
  v28 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v20 = 1;
  UnicodeString.Buffer = 0LL;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_28;
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    inited = -1073741808;
    goto LABEL_28;
  }
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v27);
  if ( inited >= 0 )
  {
    v5 = (void *)v27[2];
    v6 = *(_QWORD *)(a1 + 48);
    v23[0] = &DEVPKEY_Device_ClassGuid;
    v23[2] = &v28;
    v23[1] = 13LL;
    v25 = 0LL;
    v26 = 0;
    v24 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v6, 1u, (void *)v27[2], (__int64)v23, 1u);
    if ( inited >= 0 )
    {
      if ( v25 >= 0 )
      {
        inited = RtlStringFromGUIDEx((unsigned int *)&v28, (__int64)&UnicodeString, 1);
        if ( inited < 0 )
          goto LABEL_28;
        if ( (int)PnpOpenObjectRegKey(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)UnicodeString.Buffer,
                    2u,
                    131097,
                    0,
                    (__int64)&Handle) >= 0 )
          goto LABEL_12;
        RtlFreeUnicodeString(&UnicodeString);
      }
      v28 = 0LL;
LABEL_12:
      v7 = PiDevCfgMigrateDevice(
             a1,
             (__int64)v27,
             (unsigned __int16 *)((unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL)),
             0LL,
             &v19,
             0LL);
      v8 = v19;
      if ( v7 < 0 )
        v8 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (__int64)v27,
        (_QWORD *)((unsigned __int64)&v28 & -(__int64)(UnicodeString.Buffer != 0LL)),
        (__int64)Handle,
        0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v10 = *(_QWORD *)(v9 + 8);
      else
        v10 = 0LL;
      RegRtlDeleteTreeInternal(v5, L"Devices", v10, 0);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v12 = *(_QWORD *)(v11 + 8);
      else
        v12 = 0LL;
      RegRtlDeleteTreeInternal(v5, L"Filters", v12, 0);
      if ( v8 )
      {
        v13 = *(_QWORD *)(a1 + 48);
        v18 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v13,
                    (__int64)v5,
                    11,
                    (__int64)&v20,
                    (__int64)&v17,
                    (__int64)&v18,
                    0) < 0
          || v20 != 4
          || (v15 = v17, v18 != 4) )
        {
          v15 = 0;
        }
        v17 = v8 | v15;
        PiDevCfgSetDeviceRegProp(v14, (__int64)v27, 0xBu, 4, (__int64)&v17, 4);
      }
    }
  }
LABEL_28:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext((__int64)v27);
  return (unsigned int)inited;
}
