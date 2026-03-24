/*
 * XREFs of ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242980
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C000CBC4 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C003F1AC (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040774 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00410E8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1C0262104 (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0262148 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0263BB4 (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02643C8 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetRegistryKeys(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned int v8; // ebx
  _DWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  char *Values; // rcx
  _WORD *v24; // r9
  __int16 v25; // r11
  __int64 v26; // r10
  size_t v27; // r8
  int inserted; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  ULONG v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  ULONG v38; // r13d
  __int64 v39; // rax
  NTSTATUS v40; // eax
  unsigned int *v41; // rbx
  int appended; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  ULONG v48; // [rsp+30h] [rbp-D8h]
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  wchar_t *ppszDest; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcchDestLength; // [rsp+58h] [rbp-B0h] BYREF
  size_t pcchDest; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v54[2]; // [rsp+68h] [rbp-A0h] BYREF
  void *DeviceRegKey; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES DeviceRegKey_8; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v57[8]; // [rsp+B0h] [rbp-58h] BYREF
  DXGPUSHLOCK *v58; // [rsp+B8h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp-48h]
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+C8h] [rbp-40h] BYREF
  char v61; // [rsp+F8h] [rbp-10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v57, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v58);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v59 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 5211LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_51;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_GETREGISTRYKEYS>((__int64)a1);
  if ( !v7 )
    goto LABEL_51;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  DestinationString.Buffer = (wchar_t *)&v61;
  v8 = 130040;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  v54[1] = v54;
  v54[0] = v54;
  v9 = 0LL;
  memset(&KeyInformation, 0, sizeof(KeyInformation));
  memset(&DeviceRegKey_8, 0, sizeof(DeviceRegKey_8));
  v14 = (unsigned int *)operator new(0x1FBF8uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v14 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL)
                                                                             + 216LL));
    v15 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 2u, 0x20019u, &DeviceRegKey);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)v15 >= 0 )
    {
      v21 = RtlUnicodeStringCopyString(&DestinationString, (const unsigned __int16 *)(v7 + 24));
      v15 = v21;
      if ( v21 >= 0 )
      {
        ppszDest = 0LL;
        pcchDest = 0LL;
        pcchDestLength = 0LL;
        LODWORD(v15) = RtlUnicodeStringValidateDestWorker(
                         &DestinationString,
                         &ppszDest,
                         &pcchDest,
                         &pcchDestLength,
                         (const size_t)ResultLength,
                         v48);
        if ( (int)v15 >= 0 )
        {
          v24 = &unk_1C0084388;
          v25 = pcchDestLength;
          v26 = 0x7FFFLL;
          LODWORD(v15) = 0;
          v22 = 0LL;
          v27 = pcchDest - pcchDestLength;
          if ( pcchDest != pcchDestLength )
          {
            Values = (char *)ppszDest + 2 * pcchDestLength - (_QWORD)&unk_1C0084388;
            do
            {
              if ( !v26 )
                break;
              if ( !*v24 )
                break;
              *(_WORD *)&Values[(_QWORD)v24] = *v24;
              --v26;
              ++v24;
              ++v22;
              --v27;
            }
            while ( v27 );
            if ( !v27 && v26 && *v24 )
              LODWORD(v15) = -2147483643;
          }
          LOWORD(v22) = 2 * (v25 + v22);
          DestinationString.Length = v22;
        }
        if ( (int)v15 < 0 )
        {
LABEL_22:
          v20 = WdLogNewEntry5_WdError(Values, v22);
          *(_QWORD *)(v20 + 24) = (int)v15;
LABEL_8:
          WdLogEvent5_WdError(v20);
LABEL_43:
          v8 = 130040;
          goto LABEL_44;
        }
        inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v54, &DestinationString);
        v15 = inserted;
        if ( inserted >= 0 )
        {
          while ( 1 )
          {
            if ( (_QWORD *)v54[0] == v54 )
              goto LABEL_42;
            v29 = DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v54, &DestinationString);
            v15 = v29;
            if ( v29 < 0 )
              goto LABEL_41;
            DeviceRegKey_8.RootDirectory = DeviceRegKey;
            DeviceRegKey_8.Length = 48;
            DeviceRegKey_8.ObjectName = &DestinationString;
            DeviceRegKey_8.Attributes = 576;
            *(_OWORD *)&DeviceRegKey_8.SecurityDescriptor = 0LL;
            v32 = ZwOpenKey(&KeyHandle, 0x20019u, &DeviceRegKey_8);
            v15 = v32;
            if ( v32 < 0
              || (LODWORD(ppszDest) = 0,
                  v33 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, (PULONG)&ppszDest),
                  v15 = v33,
                  v33 < 0) )
            {
LABEL_41:
              v44 = WdLogNewEntry5_WdError(v31, v30);
              *(_QWORD *)(v44 + 24) = v15;
              WdLogEvent5_WdError(v44);
LABEL_42:
              v9 = 0LL;
              goto LABEL_43;
            }
            v34 = KeyInformation.MaxValueDataLen + 2 * (KeyInformation.MaxValueNameLen + 12);
            LODWORD(pcchDest) = v34;
            v9 = operator new(v34, 0x4B677844u, 1, PagedPool);
            if ( !v9 )
            {
              LODWORD(v15) = -1073741801;
              v43 = WdLogNewEntry5_WdLowResource(v35, v22, v36, v37);
              *(_QWORD *)(v43 + 24) = 5321LL;
              WdLogEvent5_WdLowResource(v43);
              goto LABEL_43;
            }
            Values = (char *)KeyInformation.Values;
            v38 = 0;
            v39 = *v14;
            if ( KeyInformation.Values )
              break;
LABEL_33:
            if ( !KeyInformation.SubKeys && !(_DWORD)Values )
            {
              RtlStringCbCopyUnicodeString((char *)&v14[774 * v39 + 514], 0x208uLL, &DestinationString);
              ++*v14;
            }
            appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys(
                         (DXG_REGISTRY_KEY_LIST *)v54,
                         KeyHandle,
                         &KeyInformation,
                         &DestinationString);
            v15 = appended;
            if ( appended < 0 )
              goto LABEL_7;
            if ( KeyHandle )
              ZwClose(KeyHandle);
            operator delete[](v9);
            KeyHandle = 0LL;
          }
          while ( (_DWORD)v39 != 42 )
          {
            memset(v9, 0, v34);
            LODWORD(pcchDestLength) = 0;
            v40 = ZwEnumerateValueKey(KeyHandle, v38, KeyValueFullInformation, v9, v34, (PULONG)&pcchDestLength);
            v15 = v40;
            if ( v40 < 0 )
              goto LABEL_7;
            v41 = &v14[774 * *v14];
            RtlStringCbCopyUnicodeString((char *)v41 + 2056, 0x208uLL, &DestinationString);
            memmove(v41 + 644, v9 + 5, (unsigned int)v9[4]);
            memmove(v41 + 2, (char *)v9 + (unsigned int)v9[2], (unsigned int)v9[3]);
            ++v38;
            v41[774] = v9[1];
            v41[775] = v9[3];
            v34 = pcchDest;
            v39 = *v14 + 1;
            *v14 = v39;
            Values = (char *)KeyInformation.Values;
            if ( v38 >= KeyInformation.Values )
              goto LABEL_33;
          }
          goto LABEL_22;
        }
      }
    }
LABEL_7:
    v20 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v20 + 24) = v15;
    goto LABEL_8;
  }
  LODWORD(v15) = -1073741801;
  v16 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
  *(_QWORD *)(v16 + 24) = 5231LL;
  WdLogEvent5_WdLowResource(v16);
LABEL_44:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v45 = *v14;
  v14[1] = v15;
  if ( v45 < 0x2A )
    v8 = 3096 * v45 + 8;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v14, v8);
  operator delete[](v14);
  operator delete[](v9);
  v5 = 1;
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v54);
LABEL_51:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
  return v5;
}
