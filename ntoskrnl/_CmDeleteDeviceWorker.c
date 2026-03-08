/*
 * XREFs of _CmDeleteDeviceWorker @ 0x140A5F74C
 * Callers:
 *     _CmDeleteDevice @ 0x140A5E810 (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406C3AD8 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1406C42E4 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _CmSetDeviceMappedProperty @ 0x14076C5D4 (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1407FCE14 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetMatchingDeviceList @ 0x140823774 (_CmGetMatchingDeviceList.c)
 *     _CmDeleteDeviceInterface @ 0x140A5E93C (_CmDeleteDeviceInterface.c)
 *     _CmDeleteDeviceRegKey @ 0x140A5F12C (_CmDeleteDeviceRegKey.c)
 *     _CmRemoveDeviceFromContainer @ 0x140A619AC (_CmRemoveDeviceFromContainer.c)
 *     _CmRaiseDeleteEvent @ 0x140A62958 (_CmRaiseDeleteEvent.c)
 *     _CmRemovePanelDevice @ 0x140A63F30 (_CmRemovePanelDevice.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(__int64 a1, const WCHAR *a2, __int16 a3)
{
  _WORD *v5; // r15
  _WORD *v6; // r12
  void *Pool2; // rsi
  unsigned int v8; // r14d
  int DeviceContainerIdFromBase; // ebx
  int DeviceRegProp; // eax
  __int64 v11; // r14
  int ObjectProperty; // eax
  int i; // eax
  _WORD *v14; // rdi
  int MatchingFilteredDeviceInterfaceList; // eax
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  int j; // eax
  _WORD *v19; // rdi
  int MatchingDeviceList; // eax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  int *v23; // r14
  unsigned int v24; // edi
  int v25; // eax
  PVOID v26; // r14
  int k; // eax
  unsigned int v28; // edi
  unsigned __int64 v29; // rbx
  unsigned int v30; // r14d
  unsigned int v31; // edi
  int v32; // eax
  const WCHAR *v33; // rdi
  int v35; // [rsp+40h] [rbp-C0h]
  unsigned int v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v41; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _DWORD v43[4]; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v45[2]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t v46[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v47[40]; // [rsp+110h] [rbp+10h] BYREF

  v41 = a2;
  Handle = 0LL;
  v5 = 0LL;
  v38 = 0;
  v6 = 0LL;
  v39 = 0;
  Pool2 = 0LL;
  v44 = 0;
  v8 = 0;
  v36 = 0;
  v43[0] = 0;
  P = 0LL;
  if ( a3 )
    return (unsigned int)-1073741811;
  DeviceContainerIdFromBase = CmOpenDeviceRegKey(a1, (__int64)a2, 16, 0, 33619970, 0, (__int64)&Handle, 0LL);
  if ( DeviceContainerIdFromBase >= 0 )
  {
    v36 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      a1,
                      (__int64)a2,
                      (__int64)Handle,
                      37,
                      (__int64)&v44,
                      (__int64)v46,
                      (__int64)&v36,
                      0);
    DeviceContainerIdFromBase = DeviceRegProp;
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp == -1073741275 )
        goto LABEL_9;
      goto LABEL_88;
    }
    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(a1, (__int64)a2, v46, v47);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = CmRemoveDeviceFromContainer(a1, v47, v46, a2);
      if ( DeviceContainerIdFromBase >= 0 )
      {
LABEL_9:
        while ( 1 )
        {
          v35 = v8;
          v11 = (__int64)a2;
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             (__int64)a2,
                             1LL,
                             (__int64)Handle,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelId,
                             (__int64)v43,
                             (__int64)Pool2,
                             v35,
                             (__int64)&v36,
                             0);
          DeviceContainerIdFromBase = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          v8 = v36;
          Pool2 = (void *)ExAllocatePool2(256LL, v36, 1380994640LL);
          if ( !Pool2 )
          {
            DeviceContainerIdFromBase = -1073741801;
            goto LABEL_86;
          }
        }
        if ( ObjectProperty < 0 )
        {
          if ( ObjectProperty == -1073741275 )
            goto LABEL_22;
        }
        else if ( v43[0] != 18 || v36 < 2 || *((_WORD *)Pool2 + ((unsigned __int64)v36 >> 1) - 1) )
        {
          DeviceContainerIdFromBase = -1073741823;
        }
        else
        {
          DeviceContainerIdFromBase = CmRemovePanelDevice(a1, Pool2, a2);
          if ( DeviceContainerIdFromBase >= 0 )
          {
LABEL_22:
            for ( i = 0; ; i = v38 )
            {
              v14 = v5;
              MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                                      a1,
                                                      0LL,
                                                      v11,
                                                      0,
                                                      0LL,
                                                      0LL,
                                                      (__int64)v5,
                                                      i,
                                                      (__int64)&v38,
                                                      0);
              DeviceContainerIdFromBase = MatchingFilteredDeviceInterfaceList;
              if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
                break;
              v16 = 2LL * v38;
              if ( v16 > 0xFFFFFFFF )
              {
                DeviceContainerIdFromBase = -1073741811;
                goto LABEL_82;
              }
              if ( v5 )
                ExFreePoolWithTag(v5, 0);
              v5 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v16, 1380994640LL);
              if ( !v5 )
              {
                DeviceContainerIdFromBase = -1073741801;
                goto LABEL_82;
              }
            }
            if ( !MatchingFilteredDeviceInterfaceList )
            {
              if ( v38 && *v5 )
              {
                do
                {
                  CmDeleteDeviceInterface(a1, (__int64)v14, 0);
                  v17 = -1LL;
                  do
                    ++v17;
                  while ( v14[v17] );
                  v14 += v17 + 1;
                }
                while ( *v14 );
              }
              for ( j = 0; ; j = v39 )
              {
                v19 = v6;
                MatchingDeviceList = CmGetMatchingDeviceList(
                                       a1,
                                       (__int64)&CmMatchLastKnownParentCallback,
                                       v11,
                                       (__int64)v6,
                                       j,
                                       (__int64)&v39,
                                       0);
                DeviceContainerIdFromBase = MatchingDeviceList;
                if ( MatchingDeviceList != -1073741789 )
                  break;
                v21 = 2LL * v39;
                if ( v21 > 0xFFFFFFFF )
                {
LABEL_45:
                  DeviceContainerIdFromBase = -1073741811;
                  goto LABEL_80;
                }
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                v6 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v21, 1380994640LL);
                if ( !v6 )
                {
LABEL_44:
                  DeviceContainerIdFromBase = -1073741801;
                  goto LABEL_80;
                }
              }
              if ( !MatchingDeviceList )
              {
                if ( v39 && *v6 )
                {
                  do
                  {
                    PnpSetObjectProperty(
                      a1,
                      (__int64)v19,
                      1u,
                      0LL,
                      0LL,
                      (__int64)DEVPKEY_Device_LastKnownParent,
                      0,
                      0LL,
                      0,
                      0);
                    v22 = -1LL;
                    do
                      ++v22;
                    while ( v19[v22] );
                    v19 += v22 + 1;
                  }
                  while ( *v19 );
                }
                v23 = (int *)v45;
                v24 = 0;
                v45[0] = _mm_load_si128((const __m128i *)&_xmm);
                v45[1] = _mm_load_si128((const __m128i *)&_xmm);
                while ( 1 )
                {
                  v25 = CmDeleteDeviceRegKey(a1, (__int64)v41, *v23, 0);
                  DeviceContainerIdFromBase = v25;
                  if ( v25 )
                  {
                    if ( v25 != -1073741772 && v25 != -1073741811 && v25 != -1073741637 )
                      break;
                  }
                  ++v24;
                  ++v23;
                  if ( v24 >= 8 )
                    goto LABEL_60;
                }
                if ( v25 < 0 )
                  goto LABEL_80;
LABEL_60:
                P = 0LL;
                v26 = 0LL;
                v37 = 0;
                for ( k = CmGetDeviceMappedPropertyKeys(a1, (__int64)v41, (__int64)Handle, 1, 0LL, 0, &v37);
                      ;
                      k = CmGetDeviceMappedPropertyKeys(a1, (__int64)v41, (__int64)Handle, 1, (__int64)P, v28, &v37) )
                {
                  DeviceContainerIdFromBase = k;
                  if ( k != -1073741789 )
                    break;
                  v28 = v37;
                  v29 = 20LL * v37;
                  if ( v29 > 0xFFFFFFFF )
                    goto LABEL_45;
                  if ( v26 )
                    ExFreePoolWithTag(v26, 0);
                  P = (PVOID)ExAllocatePool2(256LL, (unsigned int)v29, 1380994640LL);
                  v26 = P;
                  if ( !P )
                    goto LABEL_44;
                }
                P = v26;
                if ( !k || (P = v26, k == -1073741275) )
                {
                  v30 = v37;
                  v31 = 0;
                  if ( !v37 )
                    goto LABEL_78;
                  while ( 1 )
                  {
                    v32 = CmSetDeviceMappedProperty(a1, v41, (__int64)Handle, 0LL, (__int64)P + 20 * v31, 0, 0LL, 0);
                    DeviceContainerIdFromBase = v32;
                    if ( v32 )
                    {
                      if ( v32 != -1073741275 && v32 != -1073741790 && v32 != -1073741802 && v32 != -1073741637 )
                        break;
                    }
                    if ( ++v31 >= v30 )
                      goto LABEL_78;
                  }
                  if ( v32 >= 0 )
                  {
LABEL_78:
                    v33 = v41;
                    DeviceContainerIdFromBase = CmDeleteDeviceRegKey(a1, (__int64)v41, 16, 0);
                    if ( DeviceContainerIdFromBase >= 0 )
                      CmRaiseDeleteEvent(a1, v33, 1LL);
                  }
                }
              }
LABEL_80:
              if ( v6 )
                ExFreePoolWithTag(v6, 0);
            }
LABEL_82:
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            if ( P )
              ExFreePoolWithTag(P, 0);
          }
        }
LABEL_86:
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
LABEL_88:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceContainerIdFromBase;
}
