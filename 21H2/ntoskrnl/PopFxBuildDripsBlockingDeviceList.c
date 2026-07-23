/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x1405698C4
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408EEF38 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA800 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopFxAddRefDevice @ 0x140281C48 (PopFxAddRefDevice.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxIsDripsBlockingDevice @ 0x14056B3BC (PopFxIsDripsBlockingDevice.c)
 *     IoGetDevicePropertyData @ 0x14062EE90 (IoGetDevicePropertyData.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14089E57C (IoLockUnlockPnpDeviceTree.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E47E4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, _QWORD *a2)
{
  NTSTATUS DevicePropertyData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *i; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v11; // r14
  unsigned int v12; // edx
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  _QWORD *v19; // r15
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rax
  unsigned int v23; // r14d
  __int64 *v24; // rbx
  __int64 *v25; // rax
  __int64 *v26; // rax
  unsigned __int64 v27; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v29; // r12
  volatile signed __int32 *v30; // rcx
  unsigned int v31; // ebx
  volatile signed __int32 *v32; // rdx
  __int64 v33; // rax
  volatile signed __int32 *v34; // rax
  const GUID *v35; // r9
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v39; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v40; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Type; // [rsp+54h] [rbp-ACh] BYREF
  ULONG RequiredSize; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v46; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  unsigned int *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  __int64 *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  unsigned int *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  __int64 *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h] BYREF
  wchar_t v67; // [rsp+158h] [rbp+58h]
  __int64 v68; // [rsp+160h] [rbp+60h] BYREF
  wchar_t v69; // [rsp+168h] [rbp+68h]

  v67 = aPci[4];
  v40 = 0;
  v48.Buffer = (wchar_t *)&v66;
  v51 = 0LL;
  v69 = aUsb_0[4];
  v66 = *(_QWORD *)L"PCI\\";
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v68;
  v39 = 0;
  Type = 0;
  *(_QWORD *)&v48.Length = 655368LL;
  v68 = *(_QWORD *)L"USB\\";
  *(_QWORD *)&String1.Length = 655368LL;
  IoLockUnlockPnpDeviceTree(1LL);
  RequiredSize = 0;
  Data = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  a2[1] = a2;
  *a2 = a2;
  for ( i = (ULONG_PTR *)PopFxDeviceList; i != &PopFxDeviceList; i = (ULONG_PTR *)*i )
  {
    v7 = i + 109;
    if ( i[6] && (unsigned __int8)PopFxIsDripsBlockingDevice(i, a1, i + 111) )
    {
      PopFxAddRefDevice((ULONG_PTR)i);
      v8 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v8 != a2 )
        __fastfail(3u);
      *v7 = a2;
      i[110] = (ULONG_PTR)v8;
      *v8 = v7;
      a2[1] = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v9 = KeGetCurrentThread();
  v37 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v12);
    if ( v14 )
      goto LABEL_20;
    v13 = (__int64)&v9->LockEntries[v15];
    v12 &= ~(1 << v15);
    if ( (*(_BYTE *)(v13 + 26) & 1) != 0
      && (*(_DWORD *)(v13 + 32) & 1) == 0
      && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v13 + 40) == SessionId )
    {
      *(_BYTE *)(v13 + 26) &= ~1u;
      if ( *(_QWORD *)(v13 + 32) )
        break;
    }
  }
  if ( !v13 )
  {
LABEL_20:
    if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_27;
  }
  *(_BYTE *)(v13 + 32) |= 2u;
  if ( *(__int64 *)(v13 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
  v16 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
  v17 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
  *(_BYTE *)(v13 + 25) &= ~1u;
  v37 = v16;
  *(_DWORD *)(v13 + 88) = v17;
  *(_QWORD *)(v13 + 32) = 0LL;
  v18 = (signed __int64)(v13 - (unsigned __int64)v9->LockEntries) / 96;
  if ( v11 == 1 )
    v9->AbEntrySummary |= 1 << v18;
  else
    _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
LABEL_27:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&PopFxDeviceListLock, (unsigned int *)&v37);
  v14 = v9->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery();
  v19 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      v20 = (__int64 *)*(v19 - 103);
      DevicePropertyData = IoGetDevicePropertyData(
                             (PDEVICE_OBJECT)v20[4],
                             &DEVPKEY_PciDevice_DeviceType,
                             0,
                             0,
                             4u,
                             &Data,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData < 0 || Data != 8 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               (PDEVICE_OBJECT)v20[4],
                               &DEVPKEY_Device_ClassGuid,
                               0,
                               0,
                               0x10u,
                               &v51,
                               &v40,
                               &v39);
        if ( DevicePropertyData < 0 || v39 != 13 || v40 != 16 )
          goto LABEL_81;
        v21 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v51;
        if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v51 )
          v21 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v51 + 1);
        if ( v21 )
        {
LABEL_81:
          DevicePropertyData = 0;
          goto LABEL_82;
        }
      }
      v22 = (__int64 *)v20[1];
      v23 = 0;
      v24 = v20;
      while ( v22 )
      {
        v24 = v22;
        v22 = (__int64 *)v22[1];
      }
      if ( v24 != v20 )
        break;
LABEL_82:
      v19 = (_QWORD *)*v19;
      if ( v19 == a2 )
        goto LABEL_83;
    }
    do
    {
      if ( *((_DWORD *)v24 + 39) == 1 )
      {
        _InterlockedAnd((volatile signed __int32 *)v24 + 74, 0xFFFFFFDF);
        if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v24 + 5), 0)
          || RtlPrefixUnicodeString(&v48, (PCUNICODE_STRING)(v24 + 5), 0) )
        {
          v26 = v24;
          if ( v24 == v20 )
          {
LABEL_53:
            _InterlockedOr((volatile signed __int32 *)v24 + 74, 0x20u);
            if ( v23 + 1 < v23 )
              goto LABEL_87;
            ++v23;
            DevicePropertyData = 0;
          }
          else
          {
            while ( *((_DWORD *)v26 + 39) == 1 )
            {
              v26 = (__int64 *)v26[2];
              if ( v26 == v20 )
                goto LABEL_53;
            }
          }
        }
      }
      v25 = (__int64 *)*v24;
      if ( *v24 )
      {
        do
        {
          v24 = v25;
          v25 = (__int64 *)v25[1];
        }
        while ( v25 );
      }
      else
      {
        v24 = (__int64 *)v24[2];
      }
    }
    while ( v24 != v20 );
    if ( !v23 )
      goto LABEL_82;
    v27 = 8LL * v23;
    if ( v27 > 0xFFFFFFFF )
    {
LABEL_87:
      DevicePropertyData = -1073741675;
      goto LABEL_84;
    }
    DevicePropertyData = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v27, 0x4D584650u);
    v29 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v23);
      v30 = (volatile signed __int32 *)v20[1];
      v31 = 0;
      v32 = (volatile signed __int32 *)v20;
      while ( v30 )
      {
        v32 = v30;
        v30 = (volatile signed __int32 *)*((_QWORD *)v30 + 1);
      }
      if ( v32 == (volatile signed __int32 *)v20 )
        goto LABEL_76;
      while ( 1 )
      {
        _m_prefetchw((const void *)(v32 + 74));
        if ( (_InterlockedOr(v32 + 74, 0) & 0x20) != 0 )
        {
          if ( v31 >= v23 )
          {
            if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
            {
              v54 = 4LL;
              v43 = v31 + 1;
              v44 = v23;
              v53 = &v43;
              v56 = 4LL;
              v55 = &v44;
              v49 = 0x1000000LL;
              v57 = &v49;
              v58 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02228,
                (unsigned __int8 *)&dword_140026FFC,
                0LL,
                v35,
                5u,
                &v52);
            }
LABEL_76:
            if ( v31 != v23
              && (unsigned int)dword_140C02228 > 5
              && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
            {
              v45 = v31;
              v60 = &v45;
              v61 = 4LL;
              v62 = &v46;
              v46 = v23;
              v64 = &v50;
              v63 = 4LL;
              v50 = 0x1000000LL;
              v65 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02228,
                (unsigned __int8 *)byte_14002705B,
                0LL,
                0LL,
                5u,
                &v59);
            }
            v19[3] = v29;
            *((_DWORD *)v19 + 8) = v31;
            goto LABEL_82;
          }
          _InterlockedAnd(v32 + 74, 0xFFFFFFDF);
          v33 = v31++;
          v29[v33] = v32;
        }
        v34 = *(volatile signed __int32 **)v32;
        if ( *(_QWORD *)v32 )
        {
          do
          {
            v32 = v34;
            v34 = (volatile signed __int32 *)*((_QWORD *)v34 + 1);
          }
          while ( v34 );
        }
        else
        {
          v32 = (volatile signed __int32 *)*((_QWORD *)v32 + 2);
        }
        if ( v32 == (volatile signed __int32 *)v20 )
          goto LABEL_76;
      }
    }
    DevicePropertyData = -1073741670;
LABEL_83:
    if ( DevicePropertyData < 0 )
LABEL_84:
      PopFxDestroyDripsBlockingDeviceList(a2);
  }
  return (unsigned int)DevicePropertyData;
}
