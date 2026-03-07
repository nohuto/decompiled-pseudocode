__int64 __fastcall AcpiTranslatePepDeviceControlResourcesInternal(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rdi
  char v7; // si
  int v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int *v14; // r14
  __int64 v16; // [rsp+20h] [rbp-40h]
  _DWORD *v17; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+88h] [rbp+28h] BYREF

  v6 = 0LL;
  v7 = a2;
  P = 0LL;
  v17 = 0LL;
  if ( !a2 || !a3 )
  {
    v9 = -1073741808;
    goto LABEL_23;
  }
  v9 = PnpBiosResourcesToNtResources(a1, a2, 4LL, &P);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        21,
        30,
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        v7,
        v9);
    }
    goto LABEL_23;
  }
  if ( P )
  {
    v9 = AcpiValidatePepDeviceControlResources();
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqqD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v10,
          0x15u,
          0x1Fu,
          v16,
          "AcpiTranslatePepDeviceControlResourcesInternal");
      goto LABEL_23;
    }
    v9 = PnpIoResourceListToCmResourceList(P, &v17);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v11, 21, 32);
      v6 = v17;
      goto LABEL_23;
    }
    v6 = v17;
  }
  v12 = 40;
  if ( v6 )
  {
    v13 = v6[4];
    if ( v13 > 1 )
      v12 = 20 * (v13 + 1);
  }
  v14 = a6;
  if ( *a6 >= v12 )
  {
    memmove(a5, v6, v12);
    v9 = 0;
  }
  else
  {
    v9 = -1073741789;
  }
  *v14 = v12;
LABEL_23:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v9;
}
