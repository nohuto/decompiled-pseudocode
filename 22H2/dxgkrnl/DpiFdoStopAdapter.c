/*
 * XREFs of DpiFdoStopAdapter @ 0x1C02CC414
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C02CABB0 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapters @ 0x1C02D3660 (DpiKsrStopAdapters.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02D8964 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000C8D0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C012E510 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0178308 (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkStartPnPTransition @ 0x1C019489C (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C019BB04 (DxgkCompletePnPTransition.c)
 *     DpiPnpNotifyGdi @ 0x1C019E4F8 (DpiPnpNotifyGdi.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0210244 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C026A6B4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C027662C (-LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z.c)
 *     DpiDestroyBlockList @ 0x1C02C7B74 (DpiDestroyBlockList.c)
 *     DpiFdoDetermineAffectedSession @ 0x1C02C86F8 (DpiFdoDetermineAffectedSession.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C91B4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C02C925C (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C02CB974 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02CCC18 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02D1E58 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02D91A4 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *started; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // rdx
  unsigned int i; // r8d
  __int64 *v34; // rcx
  __int128 *v35; // rax
  __int64 v36; // rdx
  DXGADAPTER *v37; // rcx
  DXGGLOBAL *v38; // rax
  int IsDevicePresent; // eax
  char v40; // r14
  __int64 v41; // rbx
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v46[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+38h] [rbp-C8h]
  __int128 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h]
  _QWORD v50[10]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v51[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  __int64 v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E8h] [rbp-18h]
  int v56; // [rsp+ECh] [rbp-14h]
  __int64 v57; // [rsp+F0h] [rbp-10h]

  v46[0] = 0;
  memset(v50, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_DWORD *)DeviceExtension + 69) & 7;
  v47 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * v5 + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = *((_QWORD *)DeviceExtension + 334);
    v50[0] = 0x480000001ELL;
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v50[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v50[1], 0, 36);
    LODWORD(v50[6]) = 36;
    v50[7] = 0LL;
    v50[8] = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v50, *((_QWORD *)DeviceExtension + 742));
    KeWaitForSingleObject(DeviceExtension + 4112, Executive, 0, 0, 0LL);
    v10 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
    started = DxgkStartPnPTransition(0LL, v10);
    if ( !started )
    {
      v16 = WdLogNewEntry5_WdLowResource(v12, v11, v14, v15);
      *(_QWORD *)(v16 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v16);
    }
    if ( !DeviceExtension[480] )
    {
      v11 = *((unsigned int *)DeviceExtension + 871);
      if ( (_DWORD)v11 != -1 )
        LPMDisplayUnregisterInternalDisplay(*((PFILE_OBJECT *)DeviceExtension + 487), (struct _ERESOURCE *)v11);
    }
    if ( *((_DWORD *)DeviceExtension + 994) != 3 )
    {
      v17 = *((_QWORD *)DeviceExtension + 487);
      if ( v17 )
      {
        DxgkAcquireAdapterCoreSync(v17, 2, v14);
        v18 = *((_QWORD *)DeviceExtension + 487);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v18) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20, v19);
          *(_QWORD *)(v21 + 24) = 1473LL;
          WdLogEvent5_WdAssertion(v21);
        }
        *(_BYTE *)(v18 + 2609) = 1;
        Global = DXGGLOBAL::GetGlobal(v20, v19);
        QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL);
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 487), 2u, v23);
      }
    }
    if ( (DeviceExtension[3904] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C00B2B20 == a1 )
    {
      v24 = *((_QWORD *)DeviceExtension + 6);
      v25 = *((_QWORD *)DeviceExtension + 5);
      v48 = 0LL;
      LODWORD(v48) = 83886077;
      v49 = 0LL;
      v26 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v25, v24, (unsigned int *)&v48);
      v29 = v26;
      if ( v26 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v28, v27);
        *(_QWORD *)(v30 + 24) = *(_QWORD *)(v47 + 1128);
        *(_QWORD *)(v30 + 32) = v29;
        WdLogEvent5_WdError(v30);
      }
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C00B2B28 == a1 )
      {
        LOBYTE(word_1C00B2B1D) = 0;
        qword_1C00B2B28 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00B2B20 == a1 )
      {
        word_1C00B2B1D = 0;
        qword_1C00B2B20 = 0LL;
      }
      _InterlockedExchange64(&qword_1C00B2B50, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3904] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, (__int64)started, v10, 0, a2);
      else
        DxgkCompletePnPTransition(started, v31);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkCompletePnPTransition(started, v11);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2744), 0);
    if ( DeviceExtension[5736] )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 5720), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 5720));
    }
    if ( *((_QWORD *)DeviceExtension + 346) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2760), 0);
    if ( *((_QWORD *)DeviceExtension + 350) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2792), 0);
    if ( *((_QWORD *)DeviceExtension + 352) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2808), 0);
    if ( *((_QWORD *)DeviceExtension + 356) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2840), 0);
    if ( *((_QWORD *)DeviceExtension + 354) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2824), 0);
    if ( *((_QWORD *)DeviceExtension + 358) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2856), 0);
    if ( *((_QWORD *)DeviceExtension + 348) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2776), 0);
    if ( DeviceExtension[1152] && dword_1C00B2E6C != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3304), 1u);
      v32 = (__int64 *)*((_QWORD *)DeviceExtension + 456);
      for ( i = 0; i < *((_DWORD *)DeviceExtension + 916); v32 = v34 )
      {
        v34 = (__int64 *)*v32;
        if ( *v32 == *((_QWORD *)DeviceExtension + 456) )
          break;
        if ( *((_DWORD *)v32 + 126) == dword_1C00B2E6C )
        {
          v35 = (__int128 *)v32[116];
          if ( v35 )
          {
            xmmword_1C00B2DE8 = *v35;
            xmmword_1C00B2DF8 = v35[1];
            xmmword_1C00B2E08 = v35[2];
            xmmword_1C00B2E18 = v35[3];
            xmmword_1C00B2E28 = v35[4];
            xmmword_1C00B2E38 = v35[5];
            xmmword_1C00B2E48 = v35[6];
            xmmword_1C00B2E58 = v35[7];
            v34 = (__int64 *)*v32;
          }
        }
        ++i;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3304));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    DpiDestroyBlockList((__int64)DeviceExtension);
    if ( *((_DWORD *)DeviceExtension + 994) != 3 )
    {
      v37 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 487);
      if ( v37 && *((_DWORD *)v37 + 50) != 2 && *((_DWORD *)v37 + 50) != 4 )
        DXGADAPTER::Stop(v37, 0LL, 0);
      v38 = DXGGLOBAL::GetGlobal((__int64)v37, v36);
      DXGGLOBAL::NotifyAdapterRemoval(v38);
    }
    KeSetEvent((PRKEVENT)DeviceExtension + 147, 0, 0);
  }
  else
  {
    v50[0] = 0x4000000006LL;
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v50[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v50[1], 0, 36);
    LODWORD(v50[6]) = 36;
    v50[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v50, 0x200000000LL);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v46);
  v40 = v46[0];
  v41 = 0x200000000LL;
  if ( IsDevicePresent < 0 )
    v40 = 1;
  v42 = -1073741637;
  if ( DeviceExtension[1152] )
  {
    if ( v40 )
    {
      v42 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v53 = 0LL;
      v51[0] = 30;
      v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v57 = *((_QWORD *)DeviceExtension + 334);
      v51[1] = 72;
      v52 = 0LL;
      memset(&v51[2], 0, 24);
      v54 = 98LL;
      v55 = v42;
      v56 = 0;
      if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
        v43 = *((_QWORD *)DeviceExtension + 742);
      else
        v43 = 0x200000000LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v51, v43);
      if ( v42 < 0 || DWORD2(xmmword_1C00B2DD8) != dword_1C00B2E6C )
        memset(&xmmword_1C00B2DE8, 0, 0x80uLL);
    }
    else
    {
      dword_1C00B2E68 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3904] &= ~4u;
  if ( v40 && v42 < 0 )
    DpiDxgkDdiStopDevice(v47, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 171) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v44 = *((_QWORD *)DeviceExtension + 61);
  if ( v44 )
  {
    PoFxUnregisterDevice(v44);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 487) + 2808LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v50, 0, 0x48uLL);
  v50[0] = 0x4000000006LL;
  memset(&v50[1], 0, 36);
  LODWORD(v50[6]) = 36;
  HIDWORD(v50[6]) = v9;
  v50[7] = 1LL;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v41 = *((_QWORD *)DeviceExtension + 742);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v50, v41);
}
