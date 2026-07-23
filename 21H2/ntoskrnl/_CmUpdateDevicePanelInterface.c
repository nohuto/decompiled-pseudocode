/*
 * XREFs of _CmUpdateDevicePanelInterface @ 0x140979000
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x14074594C (PiPnpRtlSetObjectProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1407482E0 (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetParentDeviceContainerId @ 0x1407D09F4 (_CmGetParentDeviceContainerId.c)
 *     _CmBuildDevicePanelId @ 0x1407D2CA4 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x1407D425C (_CmGetDevicePanelGroup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanelInterface(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  WCHAR *v7; // rsi
  wchar_t *v8; // rdi
  int v9; // eax
  int ObjectProperty; // ebx
  WCHAR *PoolWithTag; // rax
  int v12; // ecx
  wchar_t *v13; // rax
  __int64 v14; // rax
  int DevicePanelGroup; // [rsp+60h] [rbp-19h] BYREF
  int v17; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-11h] BYREF
  int v19; // [rsp+6Ch] [rbp-Dh] BYREF
  int v20; // [rsp+70h] [rbp-9h] BYREF
  int v21; // [rsp+74h] [rbp-5h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1h] BYREF
  PVOID P; // [rsp+80h] [rbp+7h] BYREF
  __int128 v24; // [rsp+88h] [rbp+Fh] BYREF

  v3 = 0LL;
  P = 0LL;
  v21 = 0;
  v22 = 0LL;
  v20 = 0;
  DevicePanelGroup = 0;
  v7 = 0LL;
  v17 = 0;
  v24 = 0LL;
  v8 = 0LL;
  v19 = 0;
  v18 = 0;
  v9 = CmQueryDevicePanelPldProperty(
         a1,
         a2,
         3u,
         a3,
         (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
         &P,
         &v21,
         &v22,
         &v20);
  ObjectProperty = v9;
  if ( v9 == -1073741275 )
  {
    ObjectProperty = 0;
  }
  else
  {
    if ( v9 < 0 )
      goto LABEL_28;
    v3 = v22;
    if ( v22 )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ObjectProperty = -1073741801;
        goto LABEL_28;
      }
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         3LL,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_InstanceId,
                         (__int64)&v19,
                         (__int64)PoolWithTag,
                         400,
                         (__int64)&v18,
                         0);
      if ( ObjectProperty >= 0 )
      {
        if ( v19 == 18 && v18 >= 2 )
        {
          ObjectProperty = CmGetParentDeviceContainerId(a1, v7, (__int64)&v24);
          if ( ObjectProperty >= 0 )
          {
            DevicePanelGroup = CmGetDevicePanelGroup(v3);
            v12 = 0;
            if ( ((*(_DWORD *)(v3 + 8) >> 3) & 7) != 7 )
              v12 = dword_140020660[(*(_DWORD *)(v3 + 8) >> 3) & 7];
            v17 = v12;
            v13 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
            v8 = v13;
            if ( v13 )
            {
              ObjectProperty = CmBuildDevicePanelId((int *)&v24, DevicePanelGroup, v17, v13);
              if ( ObjectProperty >= 0 )
              {
                v14 = -1LL;
                do
                  ++v14;
                while ( v8[v14] );
                ObjectProperty = PnpSetObjectProperty(
                                   a1,
                                   a2,
                                   3u,
                                   a3,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_PanelId,
                                   18,
                                   (__int64)v8,
                                   2 * (int)v14 + 2,
                                   0);
                if ( ObjectProperty >= 0 )
                {
                  ObjectProperty = PnpSetObjectProperty(
                                     a1,
                                     a2,
                                     3u,
                                     a3,
                                     0LL,
                                     (__int64)DEVPKEY_Device_PanelGroup,
                                     7,
                                     (__int64)&DevicePanelGroup,
                                     4u,
                                     0);
                  if ( ObjectProperty >= 0 )
                    ObjectProperty = PnpSetObjectProperty(
                                       a1,
                                       a2,
                                       3u,
                                       a3,
                                       0LL,
                                       (__int64)DEVPKEY_Device_PanelSide,
                                       7,
                                       (__int64)&v17,
                                       4u,
                                       0);
                }
              }
            }
            else
            {
              ObjectProperty = -1073741801;
            }
          }
        }
        else
        {
          ObjectProperty = -1073741823;
        }
      }
      goto LABEL_24;
    }
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       a1,
                       a2,
                       3LL,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_PanelId,
                       (__int64)&v19,
                       v3,
                       v3,
                       (__int64)&v18,
                       v3) != -1073741789 )
    goto LABEL_28;
  PnpSetObjectProperty(a1, a2, 3u, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
  PnpSetObjectProperty(a1, a2, 3u, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
  PnpSetObjectProperty(a1, a2, 3u, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_28:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
