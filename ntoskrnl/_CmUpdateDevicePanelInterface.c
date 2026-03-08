/*
 * XREFs of _CmUpdateDevicePanelInterface @ 0x140881498
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14068492C (_CmQueryDevicePanelPldProperty.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     _CmGetParentDeviceContainerId @ 0x14085CA14 (_CmGetParentDeviceContainerId.c)
 *     _CmBuildDevicePanelId @ 0x14085EF88 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x140860330 (_CmGetDevicePanelGroup.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanelInterface(__int64 a1, __int64 a2, __int64 a3)
{
  wchar_t *v6; // rdi
  int v7; // eax
  int ObjectProperty; // ebx
  __int64 v10; // r14
  __int64 Pool2; // rax
  WCHAR *v12; // r12
  int v13; // ecx
  wchar_t *v14; // rax
  __int64 v15; // rax
  int DevicePanelGroup; // [rsp+60h] [rbp-19h] BYREF
  int v17; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-11h] BYREF
  int v19; // [rsp+6Ch] [rbp-Dh] BYREF
  unsigned int v20; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v21; // [rsp+74h] [rbp-5h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1h] BYREF
  PVOID P; // [rsp+80h] [rbp+7h] BYREF
  __int128 v24; // [rsp+88h] [rbp+Fh] BYREF

  P = 0LL;
  v21 = 0;
  v22 = 0LL;
  v20 = 0;
  DevicePanelGroup = 0;
  v24 = 0LL;
  v17 = 0;
  v6 = 0LL;
  v19 = 0;
  v18 = 0;
  v7 = CmQueryDevicePanelPldProperty(
         a1,
         a2,
         3,
         a3,
         (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
         (__int64 *)&P,
         &v21,
         &v22,
         &v20);
  ObjectProperty = v7;
  if ( v7 == -1073741275 )
  {
    ObjectProperty = 0;
LABEL_3:
    if ( (unsigned int)PnpGetObjectProperty(
                         a1,
                         a2,
                         3LL,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_PanelId,
                         (__int64)&v19,
                         0LL,
                         0,
                         (__int64)&v18,
                         0) == -1073741789 )
    {
      PnpSetObjectProperty(a1, a2, 3u, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
      PnpSetObjectProperty(a1, a2, 3u, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
      PnpSetObjectProperty(a1, a2, 3u, 0LL, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
    }
    goto LABEL_5;
  }
  if ( v7 < 0 )
    goto LABEL_5;
  v10 = v22;
  if ( !v22 )
    goto LABEL_3;
  Pool2 = ExAllocatePool2(256LL, 400LL, 1380994640LL);
  v12 = (WCHAR *)Pool2;
  if ( Pool2 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       3LL,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_InstanceId,
                       (__int64)&v19,
                       Pool2,
                       400,
                       (__int64)&v18,
                       0);
    if ( ObjectProperty >= 0 )
    {
      if ( v19 == 18 && v18 >= 2 )
      {
        ObjectProperty = CmGetParentDeviceContainerId(a1, v12, (__int64)&v24);
        if ( ObjectProperty >= 0 )
        {
          DevicePanelGroup = CmGetDevicePanelGroup(v10);
          v13 = 0;
          if ( ((*(_DWORD *)(v10 + 8) >> 3) & 7) != 7 )
            v13 = dword_140021370[(*(_DWORD *)(v10 + 8) >> 3) & 7];
          v17 = v13;
          v14 = (wchar_t *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
          v6 = v14;
          if ( v14 )
          {
            ObjectProperty = CmBuildDevicePanelId((int *)&v24, DevicePanelGroup, v17, v14);
            if ( ObjectProperty >= 0 )
            {
              v15 = -1LL;
              do
                ++v15;
              while ( v6[v15] );
              ObjectProperty = PnpSetObjectProperty(
                                 a1,
                                 a2,
                                 3u,
                                 a3,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelId,
                                 18,
                                 (__int64)v6,
                                 2 * (int)v15 + 2,
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
    ExFreePoolWithTag(v12, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    ObjectProperty = -1073741801;
  }
LABEL_5:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
