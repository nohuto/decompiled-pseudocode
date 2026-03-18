/*
 * XREFs of _CmDeleteDeviceWorker @ 0x140A245FC
 * Callers:
 *     _CmDeleteDevice @ 0x140A236A4 (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DA264 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14076CE48 (_CmGetDeviceContainerIdFromBase.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140787F7C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmSetDeviceMappedProperty @ 0x1407894A8 (_CmSetDeviceMappedProperty.c)
 *     _CmGetMatchingDeviceList @ 0x14083D790 (_CmGetMatchingDeviceList.c)
 *     _CmDeleteDeviceInterface @ 0x140A237D0 (_CmDeleteDeviceInterface.c)
 *     _CmDeleteDeviceRegKey @ 0x140A23FCC (_CmDeleteDeviceRegKey.c)
 *     _CmRemoveDeviceFromContainer @ 0x140A26854 (_CmRemoveDeviceFromContainer.c)
 *     _CmRaiseDeleteEvent @ 0x140A27790 (_CmRaiseDeleteEvent.c)
 *     _CmRemovePanelDevice @ 0x140A29270 (_CmRemovePanelDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(__int64 a1, __int64 a2, __int16 a3)
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
  __int64 v26; // r14
  int k; // eax
  unsigned int v28; // edi
  unsigned __int64 v29; // rbx
  PVOID v30; // rdx
  unsigned int v31; // r14d
  unsigned int v32; // edi
  int v33; // eax
  __int64 v34; // rdi
  int v36; // [rsp+40h] [rbp-C0h]
  unsigned int v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v38; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v39; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44[2]; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v46[2]; // [rsp+98h] [rbp-68h] BYREF
  wchar_t v47[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v48[40]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)v44 = a2;
  Handle = 0LL;
  v5 = 0LL;
  v39 = 0;
  v6 = 0LL;
  v40 = 0;
  Pool2 = 0LL;
  v45 = 0;
  v8 = 0;
  v37 = 0;
  v43 = 0;
  P = 0LL;
  if ( a3 )
    return (unsigned int)-1073741811;
  DeviceContainerIdFromBase = CmOpenDeviceRegKey(a1, a2, 16, 0, 33619970, 0, (__int64)&Handle, 0LL);
  if ( DeviceContainerIdFromBase >= 0 )
  {
    v37 = 78;
    DeviceRegProp = CmGetDeviceRegProp(a1, a2, (__int64)Handle, 37, (__int64)&v45, (__int64)v47, (__int64)&v37, 0);
    DeviceContainerIdFromBase = DeviceRegProp;
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp == -1073741275 )
        goto LABEL_9;
      goto LABEL_88;
    }
    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(a1, a2, v47, v48);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = CmRemoveDeviceFromContainer(a1, v48, v47, a2);
      if ( DeviceContainerIdFromBase >= 0 )
      {
LABEL_9:
        while ( 1 )
        {
          v36 = v8;
          v11 = a2;
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             1LL,
                             (__int64)Handle,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelId,
                             (__int64)&v43,
                             (__int64)Pool2,
                             v36,
                             (__int64)&v37,
                             0);
          DeviceContainerIdFromBase = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          v8 = v37;
          Pool2 = (void *)ExAllocatePool2(256LL, v37, 1380994640LL);
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
        else if ( v43 != 18 || v37 < 2 || *((_WORD *)Pool2 + ((unsigned __int64)v37 >> 1) - 1) )
        {
          DeviceContainerIdFromBase = -1073741823;
        }
        else
        {
          DeviceContainerIdFromBase = CmRemovePanelDevice(a1, Pool2, a2);
          if ( DeviceContainerIdFromBase >= 0 )
          {
LABEL_22:
            for ( i = 0; ; i = v39 )
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
                                                      (__int64)&v39,
                                                      0);
              DeviceContainerIdFromBase = MatchingFilteredDeviceInterfaceList;
              if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
                break;
              v16 = 2LL * v39;
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
              if ( v39 && *v5 )
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
              for ( j = 0; ; j = v40 )
              {
                v19 = v6;
                MatchingDeviceList = CmGetMatchingDeviceList(
                                       a1,
                                       (__int64)&CmMatchLastKnownParentCallback,
                                       v11,
                                       (__int64)v6,
                                       j,
                                       (__int64)&v40,
                                       0);
                DeviceContainerIdFromBase = MatchingDeviceList;
                if ( MatchingDeviceList != -1073741789 )
                  break;
                v21 = 2LL * v40;
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
                if ( v40 && *v6 )
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
                v23 = (int *)v46;
                v24 = 0;
                v46[0] = _mm_load_si128((const __m128i *)&_xmm);
                v46[1] = _mm_load_si128((const __m128i *)&_xmm);
                while ( 1 )
                {
                  v25 = CmDeleteDeviceRegKey(a1, *(__int64 *)v44, *v23, 0);
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
                v26 = *(_QWORD *)v44;
                P = 0LL;
                v38 = 0;
                for ( k = CmGetDeviceMappedPropertyKeys(a1, *(__int64 *)v44, (__int64)Handle, 1, 0LL, 0, &v38);
                      ;
                      k = CmGetDeviceMappedPropertyKeys(a1, v26, (__int64)Handle, 1, (__int64)P, v28, &v38) )
                {
                  DeviceContainerIdFromBase = k;
                  if ( k != -1073741789 )
                    break;
                  v28 = v38;
                  v29 = 20LL * v38;
                  if ( v29 > 0xFFFFFFFF )
                    goto LABEL_45;
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  P = (PVOID)ExAllocatePool2(256LL, (unsigned int)v29, 1380994640LL);
                  if ( !P )
                    goto LABEL_44;
                }
                v30 = P;
                if ( !k || k == -1073741275 )
                {
                  v31 = v38;
                  v32 = 0;
                  if ( !v38 )
                    goto LABEL_78;
                  while ( 1 )
                  {
                    v33 = CmSetDeviceMappedProperty(
                            a1,
                            *(const WCHAR **)v44,
                            (__int64)Handle,
                            0LL,
                            (__int64)v30 + 20 * v32,
                            0,
                            0LL,
                            0);
                    DeviceContainerIdFromBase = v33;
                    if ( v33 )
                    {
                      if ( v33 != -1073741275 && v33 != -1073741790 && v33 != -1073741802 && v33 != -1073741637 )
                        break;
                    }
                    if ( ++v32 >= v31 )
                      goto LABEL_78;
                    v30 = P;
                  }
                  if ( v33 >= 0 )
                  {
LABEL_78:
                    v34 = *(_QWORD *)v44;
                    DeviceContainerIdFromBase = CmDeleteDeviceRegKey(a1, *(__int64 *)v44, 16, 0);
                    if ( DeviceContainerIdFromBase >= 0 )
                      CmRaiseDeleteEvent(a1, v34, 1LL);
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
