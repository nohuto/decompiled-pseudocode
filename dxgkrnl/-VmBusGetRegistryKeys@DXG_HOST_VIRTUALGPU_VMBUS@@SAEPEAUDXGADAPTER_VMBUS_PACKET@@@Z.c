/*
 * XREFs of ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B110
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C000AE14 (RtlUnicodeStringValidateDestWorker.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C004617C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C004DC80 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AD64 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1C0305D3C (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0305D80 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C03079BC (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C03081D8 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetRegistryKeys(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rbx
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // r13
  unsigned int v5; // r14d
  _DWORD *v6; // r15
  unsigned int *v7; // r12
  __int64 v8; // rsi
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  const wchar_t *v10; // r9
  NTSTATUS v11; // eax
  __int16 v12; // r10
  wchar_t *v13; // r8
  __int64 v14; // rdx
  wchar_t *v15; // r9
  __int16 v16; // ax
  size_t v17; // rcx
  NTSTATUS inserted; // eax
  int v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  ULONG v22; // ebx
  ULONG Values; // eax
  ULONG v24; // r13d
  NTSTATUS v25; // eax
  unsigned int *v26; // rbx
  int appended; // eax
  const wchar_t *v28; // r9
  unsigned int v29; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  __int64 ResultLengtha; // [rsp+28h] [rbp-E0h]
  ULONG v33; // [rsp+30h] [rbp-D8h]
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *ppszDest; // [rsp+78h] [rbp-90h] BYREF
  size_t pcchDestLength; // [rsp+80h] [rbp-88h] BYREF
  size_t pcchDest; // [rsp+88h] [rbp-80h] BYREF
  wchar_t *v40[2]; // [rsp+90h] [rbp-78h] BYREF
  void *DeviceRegKey; // [rsp+A0h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v43[8]; // [rsp+D8h] [rbp-30h] BYREF
  DXGPUSHLOCK *v44; // [rsp+E0h] [rbp-28h]
  int v45; // [rsp+E8h] [rbp-20h]
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+F0h] [rbp-18h] BYREF
  char v47; // [rsp+128h] [rbp+20h] BYREF

  v1 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v44);
  v2 = *((_QWORD *)v1 + 10);
  v3 = 0;
  v45 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 5847LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5847LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_GETREGISTRYKEYS>((__int64)v1);
  if ( !v4 )
    goto LABEL_60;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  DestinationString.Buffer = (wchar_t *)&v47;
  v5 = 130040;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  v40[1] = (wchar_t *)v40;
  v40[0] = (wchar_t *)v40;
  memset(&KeyInformation, 0, sizeof(KeyInformation));
  v6 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v7 = (unsigned int *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL);
  if ( v7 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v1 + 10) + 16LL)
                                                                             + 216LL));
    v8 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 2u, 0x20019u, &DeviceRegKey);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)v8 >= 0 )
    {
      v11 = RtlUnicodeStringCopyString(&DestinationString, (wchar_t *)(v4 + 24));
      v8 = v11;
      if ( v11 >= 0 )
      {
        ppszDest = 0LL;
        pcchDest = 0LL;
        pcchDestLength = 0LL;
        LODWORD(v8) = RtlUnicodeStringValidateDestWorker(
                        &DestinationString,
                        &ppszDest,
                        &pcchDest,
                        &pcchDestLength,
                        (const size_t)ResultLength,
                        v33);
        if ( (int)v8 >= 0 )
        {
          v12 = pcchDestLength;
          v13 = (wchar_t *)&unk_1C010C1F8;
          v14 = 0x7FFFLL;
          LODWORD(v8) = 0;
          v15 = &ppszDest[pcchDestLength];
          v16 = 0;
          v17 = pcchDest - pcchDestLength;
          if ( pcchDest != pcchDestLength )
          {
            while ( v14 )
            {
              if ( *v13 )
              {
                *v15++ = *v13++;
                --v14;
                ++v16;
                if ( --v17 )
                  continue;
              }
              if ( !v17 && v14 && *v13 )
                LODWORD(v8) = -2147483643;
              break;
            }
          }
          DestinationString.Length = 2 * (v12 + v16);
        }
        if ( (int)v8 < 0 )
        {
          WdLogSingleEntry1(2LL, (int)v8);
          v10 = L"Failed to append null char to CurrentRegistryPath for VmBusGetRegistryKeys (status = 0x%I64x).";
          ResultLengtha = (int)v8;
LABEL_9:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, ResultLengtha, 0LL, 0LL, 0LL, 0LL);
LABEL_52:
          v1 = a1;
          v5 = 130040;
          goto LABEL_53;
        }
        inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v40, &DestinationString);
        v8 = inserted;
        if ( inserted >= 0 )
        {
          while ( 1 )
          {
            if ( (wchar_t **)v40[0] == v40 )
              goto LABEL_51;
            v19 = DXG_REGISTRY_KEY_LIST::ReadNextPath(v40, &DestinationString);
            v8 = v19;
            if ( v19 < 0 )
            {
              WdLogSingleEntry1(2LL, v19);
              v28 = L"Failed to initialize subkey string for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_50;
            }
            ObjectAttributes.RootDirectory = DeviceRegKey;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v20 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
            v8 = v20;
            if ( v20 < 0 )
              break;
            LODWORD(ppszDest) = 0;
            v21 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, (PULONG)&ppszDest);
            v8 = v21;
            if ( v21 < 0 )
            {
              WdLogSingleEntry1(2LL, v21);
              v28 = L"Failed to query key for VmBusGetRegistryKeys (status = 0x%I64x).";
LABEL_50:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_51:
              v6 = 0LL;
              goto LABEL_52;
            }
            v22 = KeyInformation.MaxValueDataLen + 2 * (KeyInformation.MaxValueNameLen + 12);
            LODWORD(pcchDest) = v22;
            v6 = (_DWORD *)operator new[](v22, 0x4B677844u, 256LL);
            if ( !v6 )
            {
              LODWORD(v8) = -1073741801;
              WdLogSingleEntry1(6LL, 5957LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Cannot allocate memory for KEY_VALUE_FULL_INFORMATION",
                5957LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_52;
            }
            Values = KeyInformation.Values;
            v24 = 0;
            if ( KeyInformation.Values )
            {
              while ( *v7 != 42 )
              {
                memset(v6, 0, v22);
                LODWORD(pcchDestLength) = 0;
                v25 = ZwEnumerateValueKey(KeyHandle, v24, KeyValueFullInformation, v6, v22, (PULONG)&pcchDestLength);
                v8 = v25;
                if ( v25 < 0 )
                {
                  WdLogSingleEntry1(2LL, v25);
                  v10 = L"Failed to Enumerate Value for VmBusGetRegistryKeys (status = 0x%I64x).";
                  goto LABEL_8;
                }
                v26 = &v7[774 * *v7];
                RtlStringCbCopyUnicodeString((char *)v26 + 2056, 0x208uLL, &DestinationString);
                memmove(v26 + 644, v6 + 5, (unsigned int)v6[4]);
                memmove(v26 + 2, (char *)v6 + (unsigned int)v6[2], (unsigned int)v6[3]);
                ++v24;
                v26[774] = v6[1];
                v26[775] = v6[3];
                ++*v7;
                Values = KeyInformation.Values;
                v22 = pcchDest;
                if ( v24 >= KeyInformation.Values )
                  goto LABEL_36;
              }
              WdLogSingleEntry1(2LL, (unsigned int)v8);
              v10 = L"Maximum number of KeyValues reached, aborting VmBusGetRegistryKeys (status = 0x%I64x).";
              ResultLengtha = (unsigned int)v8;
              goto LABEL_9;
            }
LABEL_36:
            if ( !KeyInformation.SubKeys && !Values )
            {
              RtlStringCbCopyUnicodeString((char *)&v7[774 * *v7 + 514], 0x208uLL, &DestinationString);
              ++*v7;
            }
            appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys(
                         (DXG_REGISTRY_KEY_LIST *)v40,
                         KeyHandle,
                         &KeyInformation,
                         &DestinationString);
            v8 = appended;
            if ( appended < 0 )
            {
              WdLogSingleEntry1(2LL, appended);
              v10 = L"Failed to Append SubKeys for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_8;
            }
            if ( KeyHandle )
              ZwClose(KeyHandle);
            operator delete(v6);
            KeyHandle = 0LL;
          }
          WdLogSingleEntry1(2LL, v20);
          v28 = L"Failed to open PnP registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
          goto LABEL_50;
        }
        WdLogSingleEntry1(2LL, inserted);
        v10 = L"Failed to insert root registry key name into list for VmBusGetRegistryKeys (status = 0x%I64x).";
      }
      else
      {
        WdLogSingleEntry1(2LL, v11);
        v10 = L"Failed to copy root registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v8);
      v10 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
    }
LABEL_8:
    ResultLengtha = v8;
    goto LABEL_9;
  }
  LODWORD(v8) = -1073741801;
  WdLogSingleEntry1(6LL, 5867LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
    5867LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_53:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v29 = *v7;
  v7[1] = v8;
  if ( v29 < 0x2A )
    v5 = 3096 * v29 + 8;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), v7, v5);
  operator delete(v7);
  operator delete(v6);
  v3 = 1;
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v40);
LABEL_60:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  return v3;
}
