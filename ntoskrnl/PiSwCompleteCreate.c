/*
 * XREFs of PiSwCompleteCreate @ 0x1408071C4
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1408064B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140561860 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406CB71C (_CmGetDeviceInterfaceClassGuid.c)
 *     PnpFreeDevPropertyArray @ 0x1406CC480 (PnpFreeDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     PiSwPropertySet @ 0x140785B60 (PiSwPropertySet.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14078E658 (_CmGetDeviceInterfaceReferenceString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PnpCopyDevPropertyArray @ 0x140807540 (PnpCopyDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x140807ACC (PiSwFreeInterfaceList.c)
 *     PiSwInterfaceCreate @ 0x140808CA8 (PiSwInterfaceCreate.c)
 *     IoRegisterDeviceInterface @ 0x14086A510 (IoRegisterDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwCompleteCreate(_QWORD *Object)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v4; // r13
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  const wchar_t *v11; // rcx
  size_t v12; // rdx
  int PWSTR; // ebx
  __int64 v14; // rcx
  __int64 *i; // rsi
  __int64 v16; // rcx
  char *v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r11
  size_t v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct _DEVICE_OBJECT *v25; // r12
  __int64 v26; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v28; // bl
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD **v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Objecta; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceString; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  size_t pcbLength[3]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-58h]
  __int128 v41; // [rsp+C0h] [rbp-48h]
  GUID InterfaceClassGuid; // [rsp+D0h] [rbp-38h] BYREF
  WCHAR v43[264]; // [rsp+E8h] [rbp-20h] BYREF

  v31 = &v30;
  v39 = 0LL;
  v30 = &v30;
  InterfaceClassGuid = 0LL;
  v40 = 0LL;
  v2 = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v36 = 0LL;
  v29 = 0LL;
  LODWORD(v32) = 0;
  --CurrentThread->KernelApcDisable;
  memset(pcbLength, 0, sizeof(pcbLength));
  v35 = 0LL;
  Objecta = 0LL;
  UnicodeString = 0LL;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v7 = (__int64 *)Object[8];
  v8 = *v7;
  if ( *v7 )
  {
    *((_DWORD *)v7 + 2) &= 0xFFFFFFF9;
    v9 = Object[39];
    v4 = (unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 40LL);
    if ( (byte_140C0E10C & 8) != 0 )
      McTemplateK0zzz_EtwWriteTransfer(
        v5,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_DeviceEnumerated,
        v6,
        *(const wchar_t **)(v8 + 8),
        *(const wchar_t **)(v8 + 16),
        *(const wchar_t **)(*(_QWORD *)(v9 + 40) + 48LL));
    v10 = *(void **)(v8 + 80);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x57706E50u);
      *(_OWORD *)(v8 + 72) = 0LL;
    }
    v11 = (const wchar_t *)*((_QWORD *)v4 + 1);
    v12 = ((unsigned __int64)*v4 >> 1) + 1;
    SourceString = 0LL;
    PWSTR = PnpAllocatePWSTR(v11, v12, 0x57706E50u, (PVOID *)&SourceString);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v8 + 72), SourceString);
      *(_DWORD *)(v8 + 4) |= 4u;
      if ( !*(_QWORD *)(v8 + 88) )
      {
        v14 = *(_QWORD *)(v8 + 144);
        if ( !v14
          || !_InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL)
          || (v2 = *(_QWORD *)(v8 + 144), *(_QWORD *)(v8 + 144) = 0LL, !v2)
          || (PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v2 + 24),
                        *(unsigned int *)(*(_QWORD *)(v2 + 184) + 8LL),
                        *(NTSTRSAFE_PCWSTR *)(v8 + 80)),
              PWSTR >= 0)
          && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v2 + 24), *(unsigned int *)(v21 + 8), pcbLength),
              PWSTR >= 0) )
        {
          HIDWORD(v29) = *(_DWORD *)(v8 + 164);
          v40 = 0x19uLL;
          *((_QWORD *)&v41 + 1) = (char *)&v29 + 4;
          v39 = DEVPKEY_Device_CreatorProcessId;
          *(_QWORD *)&v41 = 0x400000007LL;
          PWSTR = PnpCopyDevPropertyArray(*(unsigned int *)(v8 + 176), (__int64)&v36);
          if ( PWSTR >= 0 )
          {
            for ( i = *(__int64 **)(v8 + 184); i != (__int64 *)(v8 + 184); i = (__int64 *)*i )
            {
              PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2]);
              if ( PWSTR < 0 )
                goto LABEL_13;
              v23 = v31;
              if ( *v31 != &v30 )
                __fastfail(3u);
              v24 = v35;
              *v35 = &v30;
              v24[1] = v23;
              *v23 = v24;
              v31 = (_QWORD **)v24;
            }
            Objecta = Object;
            ObfReferenceObject(Object);
          }
        }
      }
    }
  }
  else
  {
    PWSTR = -1073741811;
  }
LABEL_13:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v17 = (char *)v36;
  if ( PWSTR >= 0 )
  {
    if ( !*((_QWORD *)&v41 + 1)
      || (PWSTR = PiSwPropertySet(*((const WCHAR **)v4 + 1), 1u, (__int64)&v39, 1u), PWSTR >= 0) )
    {
      if ( !v17 || (PWSTR = PiSwPropertySet(*((const WCHAR **)v4 + 1), 1u, (__int64)v17, v29), PWSTR >= 0) )
      {
        v18 = v30;
        if ( v30 != &v30 )
        {
          v25 = (struct _DEVICE_OBJECT *)Objecta;
          do
          {
            PWSTR = CmGetDeviceInterfaceClassGuid(v16, v18[2], &InterfaceClassGuid);
            if ( PWSTR < 0 )
              break;
            DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v26, v18[2], v43, 0x104u, &v32);
            PWSTR = DeviceInterfaceReferenceString;
            if ( DeviceInterfaceReferenceString == -1073741772 )
            {
              v28 = 0;
            }
            else
            {
              if ( DeviceInterfaceReferenceString < 0 )
                break;
              v28 = 1;
              RtlInitUnicodeString((PUNICODE_STRING)&pcbLength[1], v43);
            }
            PWSTR = IoRegisterDeviceInterface(
                      v25,
                      &InterfaceClassGuid,
                      (PUNICODE_STRING)((unsigned __int64)&pcbLength[1] & -(__int64)(v28 != 0)),
                      &UnicodeString);
            if ( PWSTR < 0 )
              break;
            PWSTR = PiSwPropertySet((const WCHAR *)v18[2], 3u, v18[3], *((_DWORD *)v18 + 8));
            if ( PWSTR < 0 )
              break;
            v18 = (_QWORD *)*v18;
          }
          while ( v18 != &v30 );
        }
      }
    }
  }
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  if ( v17 )
    PnpFreeDevPropertyArray(v29, v17, 0x57706E50u);
  PiSwFreeInterfaceList(&v30);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v2 )
  {
    if ( PWSTR < 0 )
      v22 = 0LL;
    else
      v22 = pcbLength[0] + 2;
    *(_QWORD *)(v2 + 56) = v22;
    *(_DWORD *)(v2 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v2, 0);
  }
  if ( v8 )
  {
    if ( (byte_140C0E10C & 8) != 0 )
      McTemplateK0zzd_EtwWriteTransfer(
        v19,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_DeviceEnumerated_Status,
        v20,
        *(const wchar_t **)(v8 + 8),
        *(const wchar_t **)(v8 + 16),
        PWSTR);
  }
}
