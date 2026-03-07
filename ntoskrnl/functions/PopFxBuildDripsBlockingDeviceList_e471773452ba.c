__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  NTSTATUS DevicePropertyData; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *i; // rsi
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // r13
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // rax
  unsigned int v13; // r14d
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 *v21; // rdx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 *v24; // rax
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v27; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG Type; // [rsp+50h] [rbp-B0h] BYREF
  ULONG RequiredSize; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 Pool2; // [rsp+98h] [rbp-68h]
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B0h] [rbp-50h] BYREF
  int *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  unsigned int *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  __int64 *v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+100h] [rbp+0h] BYREF
  int *v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+128h] [rbp+28h]
  int v54; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v55; // [rsp+130h] [rbp+30h]
  int v56; // [rsp+138h] [rbp+38h]
  int v57; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v58; // [rsp+140h] [rbp+40h]
  int v59; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+14Ch] [rbp+4Ch]
  __int64 v61; // [rsp+150h] [rbp+50h] BYREF
  wchar_t v62; // [rsp+158h] [rbp+58h]
  __int64 v63; // [rsp+160h] [rbp+60h] BYREF
  wchar_t v64; // [rsp+168h] [rbp+68h]

  v62 = aPci[4];
  v28 = 0;
  v36.Buffer = (wchar_t *)&v61;
  v2 = a1;
  LOBYTE(a1) = 1;
  v40 = 0LL;
  v64 = aUsb_0[4];
  v61 = *(_QWORD *)L"PCI\\";
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v63;
  v27 = 0;
  Type = 0;
  *(_QWORD *)&v36.Length = 655368LL;
  v63 = *(_QWORD *)L"USB\\";
  *(_QWORD *)&String1.Length = 655368LL;
  IoLockUnlockPnpDeviceTree(a1);
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
    if ( i[6] && (unsigned __int8)PopFxIsDripsBlockingDevice(i, v2, i + 111) )
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
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v9 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      v10 = (__int64 *)*(v9 - 103);
      DevicePropertyData = IoGetDevicePropertyData(
                             (PDEVICE_OBJECT)v10[4],
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
                               (PDEVICE_OBJECT)v10[4],
                               &DEVPKEY_Device_ClassGuid,
                               0,
                               0,
                               0x10u,
                               &v40,
                               &v28,
                               &v27);
        if ( DevicePropertyData < 0 || v27 != 13 || v28 != 16 )
          goto LABEL_62;
        v11 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v40;
        if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v40 )
          v11 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v40 + 1);
        if ( v11 )
        {
LABEL_62:
          DevicePropertyData = 0;
          goto LABEL_63;
        }
      }
      v12 = (__int64 *)v10[1];
      v13 = 0;
      v14 = v10;
      while ( v12 )
      {
        v14 = v12;
        v12 = (__int64 *)v12[1];
      }
      if ( v14 != v10 )
        break;
LABEL_63:
      v9 = (_QWORD *)*v9;
      if ( v9 == a2 )
        return (unsigned int)DevicePropertyData;
    }
    do
    {
      if ( *((_DWORD *)v14 + 39) == 1 )
      {
        _InterlockedAnd((volatile signed __int32 *)v14 + 74, 0xFFFFFFDF);
        if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v14 + 5), 0)
          || RtlPrefixUnicodeString(&v36, (PCUNICODE_STRING)(v14 + 5), 0) )
        {
          v15 = v14;
          if ( v14 == v10 )
          {
LABEL_29:
            _InterlockedOr((volatile signed __int32 *)v14 + 74, 0x20u);
            if ( v13 + 1 < v13 )
              goto LABEL_68;
            ++v13;
            DevicePropertyData = 0;
          }
          else
          {
            while ( *((_DWORD *)v15 + 39) == 1 )
            {
              v15 = (__int64 *)v15[2];
              if ( v15 == v10 )
                goto LABEL_29;
            }
          }
        }
      }
      v16 = (__int64 *)*v14;
      if ( *v14 )
      {
        do
        {
          v14 = v16;
          v16 = (__int64 *)v16[1];
        }
        while ( v16 );
      }
      else
      {
        v14 = (__int64 *)v14[2];
      }
    }
    while ( v14 != v10 );
    if ( !v13 )
      goto LABEL_63;
    v17 = 8LL * v13;
    if ( v17 > 0xFFFFFFFF )
    {
LABEL_68:
      DevicePropertyData = -1073741675;
      goto LABEL_65;
    }
    DevicePropertyData = 0;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)v17, 1297630800LL);
    v18 = Pool2;
    if ( Pool2 )
    {
      v19 = (__int64 *)v10[1];
      v20 = 0LL;
      v21 = v10;
      while ( v19 )
      {
        v21 = v19;
        v19 = (__int64 *)v19[1];
      }
      if ( v21 == v10 )
        goto LABEL_58;
      while ( 1 )
      {
        _m_prefetchw(v21 + 37);
        v22 = *((_DWORD *)v21 + 74);
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)v21 + 74, v22, v22);
        }
        while ( v23 != v22 );
        if ( (v22 & 0x20) != 0 )
        {
          if ( (unsigned int)v20 >= v13 )
          {
            if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
            {
              v44 = 0;
              v47 = 0;
              v50 = 0;
              v32 = v20 + 1;
              v43 = 4;
              v42 = &v32;
              v33 = v13;
              v45 = &v33;
              v48 = &v37;
              v46 = 4;
              v37 = 0x1000000LL;
              v49 = 8;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C03928,
                (unsigned __int8 *)&word_14002D75E,
                0LL,
                0LL,
                5u,
                &v41);
            }
LABEL_57:
            if ( (_DWORD)v20 != v13 )
            {
LABEL_58:
              if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
              {
                v54 = 0;
                v57 = 0;
                v60 = 0;
                v52 = &v34;
                v34 = v20;
                v55 = &v29;
                v53 = 4;
                v58 = &v38;
                v29 = v13;
                v56 = 4;
                v38 = 0x1000000LL;
                v59 = 8;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140C03928,
                  (unsigned __int8 *)&word_14002D826,
                  0LL,
                  0LL,
                  5u,
                  &v51);
              }
            }
            v9[3] = Pool2;
            *((_DWORD *)v9 + 8) = v20;
            goto LABEL_63;
          }
          _InterlockedAnd((volatile signed __int32 *)v21 + 74, 0xFFFFFFDF);
          *(_QWORD *)(v18 + 8 * v20) = v21;
          v20 = (unsigned int)(v20 + 1);
        }
        v24 = (__int64 *)*v21;
        if ( *v21 )
        {
          do
          {
            v21 = v24;
            v24 = (__int64 *)v24[1];
          }
          while ( v24 );
        }
        else
        {
          v21 = (__int64 *)v21[2];
        }
        if ( v21 == v10 )
          goto LABEL_57;
      }
    }
    DevicePropertyData = -1073741670;
LABEL_65:
    PopFxDestroyDripsBlockingDeviceList(a2);
  }
  return (unsigned int)DevicePropertyData;
}
