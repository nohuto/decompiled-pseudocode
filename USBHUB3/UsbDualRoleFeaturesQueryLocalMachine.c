/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C00436CC
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002AE70 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0042CD0 (WPP_RECORDER_SF_Sd.c)
 *     GetPersistedKeyPath @ 0x1C0042E20 (GetPersistedKeyPath.c)
 *     ReadManifestAssignedValue @ 0x1C0042FCC (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C00430C8 (CheckUSBFnIncludeDefaultCfg.c)
 *     CheckUSBFnConfiguration @ 0x1C004329C (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C004353C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C0043A3C (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C0043C88 (MyRegQueryUlong.c)
 */

void __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  int PersistedKeyPath; // eax
  __int64 v3; // rcx
  PVOID v4; // r14
  int v5; // esi
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  int Ulong; // eax
  __int64 v10; // rcx
  wchar_t *v11; // rsi
  unsigned __int16 v12; // r9
  unsigned __int8 v13; // dl
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // r14d
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // r9
  int v19; // [rsp+20h] [rbp-20h]
  __int64 v20; // [rsp+28h] [rbp-18h]
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+28h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF
  PVOID v25; // [rsp+90h] [rbp+50h] BYREF

  Handle = 0LL;
  P = 0LL;
  PersistedKeyPath = GetPersistedKeyPath(&P);
  v4 = P;
  v5 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v6 = 13;
    goto LABEL_4;
  }
  PersistedKeyPath = MyRegOpenKeyForRead(v3, P, &Handle);
  v5 = PersistedKeyPath;
  if ( PersistedKeyPath >= 0 )
  {
    PersistedKeyPath = MyRegQueryUlong(Handle);
    v5 = PersistedKeyPath;
    if ( PersistedKeyPath >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *a1;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          1u,
          0x10u,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          v22);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 15;
      v7 = 4;
      goto LABEL_5;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 14;
LABEL_4:
    v7 = 2;
LABEL_5:
    v21 = PersistedKeyPath;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      v6,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v21);
  }
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 < 0 )
  {
    ReadManifestAssignedValue(a1);
    *a1 &= 0xFFFFFFF1;
    if ( CheckUSBFnIncludeDefaultCfg(v8) )
      CheckUSBFnConfiguration(a1, L"Default");
    if ( (int)ReadUSBFnFeaturesFromCurrentConfiguration(a1, 0) < 0 )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1, 1);
  }
  P = 0LL;
  v25 = 0LL;
  LODWORD(Handle) = 0;
  Ulong = GetPersistedKeyPath(&v25);
  v11 = (wchar_t *)v25;
  if ( Ulong < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    v12 = 33;
    v13 = 2;
    goto LABEL_26;
  }
  if ( (int)MyRegOpenKeyForRead(v10, v25, &P) >= 0 )
  {
    Ulong = MyRegQueryUlong(P);
    if ( Ulong >= 0 )
    {
      v16 = (int)Handle;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v15, 0x24u, v19, v11);
      *a1 = *a1 & 0x7FFFFFFF | (v16 != 0 ? 0x80000000 : 0);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 35;
      v13 = 3;
LABEL_26:
      LODWORD(v20) = Ulong;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        1u,
        v12,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v20);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v14, 0x22u, v19, v11);
  }
LABEL_36:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( P )
    ZwClose(P);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = *a1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x25u,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v20);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v17 = 38;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_48;
    v17 = 39;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v17,
    (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids);
LABEL_48:
  if ( (*(_BYTE *)a1 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v18 = 40;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v18 = 41;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v18,
    (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids);
}
