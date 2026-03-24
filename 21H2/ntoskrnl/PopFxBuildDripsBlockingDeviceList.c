/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x140569684
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408EEDD8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA6A0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     PopFxAddRefDevice @ 0x14026077C (PopFxAddRefDevice.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopFxIsDripsBlockingDevice @ 0x14056B17C (PopFxIsDripsBlockingDevice.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     IoGetDevicePropertyData @ 0x14063A080 (IoGetDevicePropertyData.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14089E41C (IoLockUnlockPnpDeviceTree.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E4684 (PopFxDestroyDripsBlockingDeviceList.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  _DWORD *v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r15
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // rax
  unsigned int v25; // r14d
  __int64 *v26; // rbx
  __int64 *v27; // rax
  __int64 *v28; // rax
  unsigned __int64 v29; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v31; // r12
  volatile signed __int32 *v32; // rcx
  unsigned int v33; // ebx
  volatile signed __int32 *v34; // rdx
  __int64 v35; // rax
  volatile signed __int32 *v36; // rax
  const GUID *v37; // r9
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v41; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v42; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Type; // [rsp+54h] [rbp-ACh] BYREF
  ULONG RequiredSize; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v48; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  unsigned int *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  unsigned int *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h] BYREF
  wchar_t v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h] BYREF
  wchar_t v71; // [rsp+168h] [rbp+68h]

  v69 = aPci[4];
  v42 = 0;
  v50.Buffer = (wchar_t *)&v68;
  v53 = 0LL;
  v71 = aUsb_0[4];
  v68 = *(_QWORD *)L"PCI\\";
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v70;
  v41 = 0;
  Type = 0;
  *(_QWORD *)&v50.Length = 655368LL;
  v70 = *(_QWORD *)L"USB\\";
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
  v39 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = (_DWORD *)((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL);
  v13 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v13);
    if ( v15 )
      goto LABEL_20;
    v14 = (__int64)&v9->LockEntries[v16];
    v13 &= ~(1 << v16);
    if ( (*(_BYTE *)(v14 + 26) & 1) != 0
      && (*(_DWORD *)(v14 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v12
      && *(_DWORD *)(v14 + 40) == SessionId )
    {
      *(_BYTE *)(v14 + 26) &= ~1u;
      if ( *(_QWORD *)(v14 + 32) )
        break;
    }
  }
  if ( !v14 )
  {
LABEL_20:
    if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_27;
  }
  *(_BYTE *)(v14 + 32) |= 2u;
  if ( *(__int64 *)(v14 + 32) < 0 )
    KiAbEntryRemoveFromTree(v14);
  v17 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
  v18 = *(_DWORD *)(v14 + 88) & 0xFFFE0000;
  *(_BYTE *)(v14 + 25) &= ~1u;
  v39 = v17;
  *(_DWORD *)(v14 + 88) = v18;
  *(_QWORD *)(v14 + 32) = 0LL;
  v19 = (signed __int64)(v14 - (unsigned __int64)v9->LockEntries) / 96;
  if ( v11 == 1 )
    v9->AbEntrySummary |= 1 << v19;
  else
    _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v19);
LABEL_27:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&PopFxDeviceListLock, (__int64)&v39, v12);
  v15 = v9->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v20);
  v21 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      v22 = (__int64 *)*(v21 - 103);
      DevicePropertyData = IoGetDevicePropertyData(
                             (PDEVICE_OBJECT)v22[4],
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
                               (PDEVICE_OBJECT)v22[4],
                               &DEVPKEY_Device_ClassGuid,
                               0,
                               0,
                               0x10u,
                               &v53,
                               &v42,
                               &v41);
        if ( DevicePropertyData < 0 || v41 != 13 || v42 != 16 )
          goto LABEL_81;
        v23 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v53;
        if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v53 )
          v23 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v53 + 1);
        if ( v23 )
        {
LABEL_81:
          DevicePropertyData = 0;
          goto LABEL_82;
        }
      }
      v24 = (__int64 *)v22[1];
      v25 = 0;
      v26 = v22;
      while ( v24 )
      {
        v26 = v24;
        v24 = (__int64 *)v24[1];
      }
      if ( v26 != v22 )
        break;
LABEL_82:
      v21 = (_QWORD *)*v21;
      if ( v21 == a2 )
        goto LABEL_83;
    }
    do
    {
      if ( *((_DWORD *)v26 + 39) == 1 )
      {
        _InterlockedAnd((volatile signed __int32 *)v26 + 74, 0xFFFFFFDF);
        if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v26 + 5), 0)
          || RtlPrefixUnicodeString(&v50, (PCUNICODE_STRING)(v26 + 5), 0) )
        {
          v28 = v26;
          if ( v26 == v22 )
          {
LABEL_53:
            _InterlockedOr((volatile signed __int32 *)v26 + 74, 0x20u);
            if ( v25 + 1 < v25 )
              goto LABEL_87;
            ++v25;
            DevicePropertyData = 0;
          }
          else
          {
            while ( *((_DWORD *)v28 + 39) == 1 )
            {
              v28 = (__int64 *)v28[2];
              if ( v28 == v22 )
                goto LABEL_53;
            }
          }
        }
      }
      v27 = (__int64 *)*v26;
      if ( *v26 )
      {
        do
        {
          v26 = v27;
          v27 = (__int64 *)v27[1];
        }
        while ( v27 );
      }
      else
      {
        v26 = (__int64 *)v26[2];
      }
    }
    while ( v26 != v22 );
    if ( !v25 )
      goto LABEL_82;
    v29 = 8LL * v25;
    if ( v29 > 0xFFFFFFFF )
    {
LABEL_87:
      DevicePropertyData = -1073741675;
      goto LABEL_84;
    }
    DevicePropertyData = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v29, 0x4D584650u);
    v31 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v25);
      v32 = (volatile signed __int32 *)v22[1];
      v33 = 0;
      v34 = (volatile signed __int32 *)v22;
      while ( v32 )
      {
        v34 = v32;
        v32 = (volatile signed __int32 *)*((_QWORD *)v32 + 1);
      }
      if ( v34 == (volatile signed __int32 *)v22 )
        goto LABEL_76;
      while ( 1 )
      {
        _m_prefetchw((const void *)(v34 + 74));
        if ( (_InterlockedOr(v34 + 74, 0) & 0x20) != 0 )
        {
          if ( v33 >= v25 )
          {
            if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
            {
              v56 = 4LL;
              v45 = v33 + 1;
              v46 = v25;
              v55 = &v45;
              v58 = 4LL;
              v57 = &v46;
              v51 = 0x1000000LL;
              v59 = &v51;
              v60 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02228,
                (unsigned __int8 *)&dword_140026F3C,
                0LL,
                v37,
                5u,
                &v54);
            }
LABEL_76:
            if ( v33 != v25
              && (unsigned int)dword_140C02228 > 5
              && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
            {
              v47 = v33;
              v62 = &v47;
              v63 = 4LL;
              v64 = &v48;
              v48 = v25;
              v66 = &v52;
              v65 = 4LL;
              v52 = 0x1000000LL;
              v67 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C02228,
                (unsigned __int8 *)byte_140026F9B,
                0LL,
                0LL,
                5u,
                &v61);
            }
            v21[3] = v31;
            *((_DWORD *)v21 + 8) = v33;
            goto LABEL_82;
          }
          _InterlockedAnd(v34 + 74, 0xFFFFFFDF);
          v35 = v33++;
          v31[v35] = v34;
        }
        v36 = *(volatile signed __int32 **)v34;
        if ( *(_QWORD *)v34 )
        {
          do
          {
            v34 = v36;
            v36 = (volatile signed __int32 *)*((_QWORD *)v36 + 1);
          }
          while ( v36 );
        }
        else
        {
          v34 = (volatile signed __int32 *)*((_QWORD *)v34 + 2);
        }
        if ( v34 == (volatile signed __int32 *)v22 )
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
