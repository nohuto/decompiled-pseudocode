/*
 * XREFs of DpiFdoStopAdapter @ 0x1C0398994
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapter @ 0x1C03A1DF4 (DpiKsrStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C03A4294 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01E6A28 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiPnpNotifyGdi @ 0x1C0209894 (DpiPnpNotifyGdi.c)
 *     DxgkStartPnPTransition @ 0x1C020ACBC (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C0214FC4 (DxgkCompletePnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkStartPnPStop @ 0x1C02BE5C0 (DxgkStartPnPStop.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C030E948 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiDestroyBlockList @ 0x1C0395504 (DpiDestroyBlockList.c)
 *     DpiFdoDetermineAffectedSession @ 0x1C0396188 (DpiFdoDetermineAffectedSession.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0396844 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C03968EC (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C0397F70 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C03990F8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C039DAC8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C03A4A88 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r13
  bool v6; // zf
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  void *started; // rbx
  struct DXGADAPTER *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // r9d
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int128 *v17; // rax
  DXGADAPTER *v18; // rcx
  DXGGLOBAL *Global; // rax
  int IsDevicePresent; // eax
  char v21; // r15
  int v22; // esi
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v28[8]; // [rsp+30h] [rbp-99h] BYREF
  __int128 v29; // [rsp+38h] [rbp-91h] BYREF
  __int64 v30; // [rsp+48h] [rbp-81h]
  _QWORD v31[10]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v32[8]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]
  __int64 v35; // [rsp+D0h] [rbp+7h]
  int v36; // [rsp+D8h] [rbp+Fh]
  int v37; // [rsp+DCh] [rbp+13h]
  __int64 v38; // [rsp+E0h] [rbp+17h]

  v28[0] = 0;
  memset(v31, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * ((*((_DWORD *)DeviceExtension + 69))++ & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = *((_DWORD *)DeviceExtension + 59);
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v6 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v7 = *((_QWORD *)DeviceExtension + 334);
    v31[0] = 0x480000001ELL;
    HIDWORD(v31[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v31[1], 0, 36);
    LODWORD(v31[6]) = 36;
    v31[7] = 0LL;
    v31[8] = v7;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, *((_QWORD *)DeviceExtension + 718));
    if ( !DeviceExtension[480] )
      KeWaitForSingleObject(DeviceExtension + 4136, Executive, 0, 0, 0LL);
    v8 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
    started = DxgkStartPnPTransition(0LL, v8);
    if ( !started )
      WdLogSingleEntry1(6LL, -1073741670LL);
    if ( *((_DWORD *)DeviceExtension + 1000) != 3 )
    {
      v10 = (struct DXGADAPTER *)*((_QWORD *)DeviceExtension + 489);
      if ( v10 )
        DxgkStartPnPStop(v10);
    }
    if ( (DeviceExtension[3920] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C013B4A8 == a1 )
    {
      v11 = *((_QWORD *)DeviceExtension + 6);
      v12 = *((_QWORD *)DeviceExtension + 5);
      v29 = 0LL;
      LODWORD(v29) = 83886077;
      v30 = 0LL;
      v13 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v12, v11, (unsigned int *)&v29);
      if ( v13 < 0 )
        WdLogSingleEntry2(2LL, *(_QWORD *)(v5 + 1128), v13);
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C013B4B0 == a1 )
      {
        LOBYTE(word_1C013B49C) = 0;
        qword_1C013B4B0 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C013B4A8 == a1 )
      {
        word_1C013B49C = 0;
        qword_1C013B4A8 = 0LL;
      }
      _InterlockedExchange64(&qword_1C013B4D8, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3920] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, (__int64)started, v8, 0, a2);
      else
        DxgkCompletePnPTransition(started);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkCompletePnPTransition(started);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2744), 0);
    if ( *((_QWORD *)DeviceExtension + 346) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2760), 0);
    if ( DeviceExtension[5680] )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 354, 0);
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 354);
    }
    if ( *((_QWORD *)DeviceExtension + 348) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2776), 0);
    if ( *((_QWORD *)DeviceExtension + 352) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2808), 0);
    if ( *((_QWORD *)DeviceExtension + 354) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2824), 0);
    if ( *((_QWORD *)DeviceExtension + 358) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2856), 0);
    if ( *((_QWORD *)DeviceExtension + 356) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2840), 0);
    if ( *((_QWORD *)DeviceExtension + 360) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2872), 0);
    if ( *((_QWORD *)DeviceExtension + 350) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2792), 0);
    if ( DeviceExtension[1152] && dword_1C013B7F4 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3320), 1u);
      v14 = 0;
      v15 = (__int64 *)*((_QWORD *)DeviceExtension + 458);
      if ( *((_DWORD *)DeviceExtension + 920) )
      {
        v16 = *((_QWORD *)DeviceExtension + 458);
        do
        {
          if ( *v15 == v16 )
            break;
          if ( *((_DWORD *)v15 + 126) == dword_1C013B7F4 )
          {
            v17 = (__int128 *)v15[116];
            if ( v17 )
            {
              xmmword_1C013B770 = *v17;
              xmmword_1C013B780 = v17[1];
              xmmword_1C013B790 = v17[2];
              xmmword_1C013B7A0 = v17[3];
              xmmword_1C013B7B0 = v17[4];
              xmmword_1C013B7C0 = v17[5];
              xmmword_1C013B7D0 = v17[6];
              xmmword_1C013B7E0 = v17[7];
              v16 = *((_QWORD *)DeviceExtension + 458);
            }
          }
          v15 = (__int64 *)*v15;
          ++v14;
        }
        while ( v14 < *((_DWORD *)DeviceExtension + 920) );
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3320));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    DpiDestroyBlockList((__int64)DeviceExtension);
    if ( *((_DWORD *)DeviceExtension + 1000) != 3 )
    {
      v18 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 489);
      if ( v18 && *((_DWORD *)v18 + 50) != 2 && *((_DWORD *)v18 + 50) != 4 )
        DXGADAPTER::Stop(v18, 0, 0);
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::NotifyAdapterRemoval(Global);
    }
    KeSetEvent((PRKEVENT)(DeviceExtension + 3544), 0, 0);
  }
  else
  {
    v31[0] = 0x4000000006LL;
    HIDWORD(v31[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v31[1], 0, 36);
    LODWORD(v31[6]) = 36;
    v31[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, 0x200000000LL);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v28);
  v21 = v28[0];
  v22 = -1073741637;
  if ( IsDevicePresent < 0 )
    v21 = 1;
  v23 = 0x200000000LL;
  if ( DeviceExtension[1152] )
  {
    if ( v21 )
    {
      v24 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v32[0] = 30;
      v22 = v24;
      v34 = 0LL;
      v32[1] = 72;
      v6 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v38 = *((_QWORD *)DeviceExtension + 334);
      v33 = 0LL;
      memset(&v32[2], 0, 24);
      v35 = 98LL;
      v36 = v24;
      v37 = 0;
      if ( v6 && *((_DWORD *)DeviceExtension + 5) == 2 )
        v25 = *((_QWORD *)DeviceExtension + 718);
      else
        v25 = 0x200000000LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, v25);
      if ( v22 < 0 || DWORD2(xmmword_1C013B760) != dword_1C013B7F4 )
        memset(&xmmword_1C013B770, 0, 0x80uLL);
    }
    else
    {
      dword_1C013B7F0 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3920] &= ~4u;
  if ( v21 && v22 < 0 )
    DpiDxgkDdiStopDevice(v5, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 171) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v26 = *((_QWORD *)DeviceExtension + 61);
  if ( v26 )
  {
    PoFxUnregisterDevice(v26);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 489) + 3032LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v31, 0, 0x48uLL);
  v31[0] = 0x4000000006LL;
  memset(&v31[1], 0, 36);
  LODWORD(v31[6]) = 36;
  HIDWORD(v31[6]) = (unsigned int)a1 & 0xFFFF00;
  v31[7] = 1LL;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v23 = *((_QWORD *)DeviceExtension + 718);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, v23);
}
