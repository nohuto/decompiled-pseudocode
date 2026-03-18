/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0073504
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0074C78 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0170B80 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(struct tagGRAPHICS_DEVICE *a1, __int16 a2, unsigned int *a3, unsigned int *a4)
{
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v9; // rbx
  unsigned int v10; // eax
  int v12; // eax
  const WCHAR *v13; // rax
  WCHAR *v14; // r14
  NTSTATUS v15; // ebx
  _DWORD v16[4]; // [rsp+30h] [rbp-A9h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-99h] BYREF
  __int64 v18; // [rsp+78h] [rbp-61h]
  int v19; // [rsp+80h] [rbp-59h]
  const wchar_t *v20; // [rsp+88h] [rbp-51h]
  unsigned int *v21; // [rsp+90h] [rbp-49h]
  int v22; // [rsp+98h] [rbp-41h]
  _DWORD *v23; // [rsp+A0h] [rbp-39h]
  int v24; // [rsp+A8h] [rbp-31h]
  __int64 v25; // [rsp+B0h] [rbp-29h]
  int v26; // [rsp+B8h] [rbp-21h]
  __int128 v27; // [rsp+C0h] [rbp-19h]
  __int128 v28; // [rsp+D0h] [rbp-9h]
  __int64 v29; // [rsp+E0h] [rbp+7h]

  v16[0] = 0;
  WdLogSingleEntry1(5LL, a1);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.DefaultType = 67108868;
  v22 = 67108868;
  QueryTable.Flags = 288;
  QueryTable.DefaultData = v16;
  v20 = L"Attach.ToDesktop";
  v23 = v16;
  QueryTable.DefaultLength = 4;
  v19 = 288;
  v24 = 4;
  *a4 = 0;
  v29 = 0LL;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = a3;
  v18 = 0LL;
  v21 = a4;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 1,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 0LL);
  v9 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    ZwClose(v9);
  }
  else
  {
    v13 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
    v14 = (WCHAR *)v13;
    if ( v13 )
    {
      v15 = RtlQueryRegistryValues(0x40000000u, v13, &QueryTable, 0LL, 0LL);
      ZwClose(v14);
      if ( v15 < 0 )
      {
        WdLogSingleEntry0(5LL);
        *a4 = 0;
        *a3 = 0;
      }
    }
    else
    {
      WdLogSingleEntry0(5LL);
    }
  }
  v10 = *((_DWORD *)a1 + 40);
  if ( a2 )
  {
    if ( a2 == -1 )
    {
      v12 = (v10 >> 25) & 1;
    }
    else
    {
      if ( (v10 & 0x2000000) != 0 )
        goto LABEL_5;
      v12 = *((_DWORD *)a1 + 65);
    }
    *a4 = v12;
    goto LABEL_6;
  }
  if ( (v10 & 0x6000000) != 0 )
LABEL_5:
    *a4 = 0;
LABEL_6:
  WdLogSingleEntry2(5LL, *a3, *a4);
  return 1LL;
}
