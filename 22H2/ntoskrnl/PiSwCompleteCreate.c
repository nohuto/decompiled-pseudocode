/*
 * XREFs of PiSwCompleteCreate @ 0x14074DC58
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14074E8B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     RtlStringCbLengthW @ 0x1403224DC (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x14032E038 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     PnpFreeDevPropertyArray @ 0x1406AC460 (PnpFreeDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x1406B0F08 (PnpAllocatePWSTR.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406B6CD4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14072C2C8 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwPropertySet @ 0x1407447F8 (PiSwPropertySet.c)
 *     IoRegisterDeviceInterface @ 0x140745370 (IoRegisterDeviceInterface.c)
 *     PnpCopyDevPropertyArray @ 0x14074D2EC (PnpCopyDevPropertyArray.c)
 *     PiSwFreeInterfaceList @ 0x14074DF0C (PiSwFreeInterfaceList.c)
 *     PiSwInterfaceCreate @ 0x14076E730 (PiSwInterfaceCreate.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  size_t v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  struct _DEVICE_OBJECT *v5; // r12
  _DWORD *DeviceExtension; // rax
  __int64 v7; // rsi
  void *v8; // rcx
  const WCHAR **v9; // rdi
  const wchar_t *v10; // rcx
  size_t v11; // rdx
  int PWSTR; // edi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 *v16; // r15
  __int64 *i; // rsi
  __int64 v18; // rcx
  char *v19; // r15
  __int64 *j; // rsi
  __int64 **v21; // rcx
  __int64 **v22; // rax
  __int64 v23; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v25; // di
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-B0h] BYREF
  __int64 ***v31; // [rsp+60h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR **v33; // [rsp+70h] [rbp-98h]
  size_t pcbLength[3]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  GUID InterfaceClassGuid; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR v37[264]; // [rsp+B8h] [rbp-50h] BYREF

  v1 = 0LL;
  v28 = &v27;
  v33 = 0LL;
  v27 = (__int64 *)&v27;
  InterfaceClassGuid = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v32 = 0LL;
  LODWORD(v26) = 0;
  v5 = 0LL;
  LODWORD(v29) = 0;
  --CurrentThread->KernelApcDisable;
  memset(pcbLength, 0, sizeof(pcbLength));
  v31 = 0LL;
  UnicodeString = 0LL;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  DeviceExtension = Object->DeviceExtension;
  v7 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    v8 = *(void **)(v7 + 80);
    v9 = (const WCHAR **)((char *)Object->DeviceObjectExtension->DeviceNode + 40);
    v33 = v9;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x57706E50u);
      *(_OWORD *)(v7 + 72) = 0LL;
    }
    v10 = v9[1];
    v11 = ((unsigned __int64)*(unsigned __int16 *)v9 >> 1) + 1;
    SourceString = 0LL;
    PWSTR = PnpAllocatePWSTR(v10, v11, 0x57706E50u, (PVOID *)&SourceString);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v7 + 72), SourceString);
      *(_DWORD *)(v7 + 4) |= 4u;
      if ( !*(_QWORD *)(v7 + 88) )
      {
        v14 = *(_QWORD *)(v7 + 144);
        if ( !v14
          || !_InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL)
          || (v4 = *(_QWORD *)(v7 + 144), *(_QWORD *)(v7 + 144) = 0LL, !v4)
          || (v15 = *(_QWORD *)(v4 + 184),
              PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v4 + 24),
                        *(unsigned int *)(v15 + 8),
                        *(NTSTRSAFE_PCWSTR *)(v7 + 80)),
              PWSTR >= 0)
          && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v4 + 24), *(unsigned int *)(v15 + 8), pcbLength),
              PWSTR >= 0) )
        {
          PWSTR = PnpCopyDevPropertyArray(*(unsigned int *)(v7 + 176), *(_QWORD *)(v7 + 168), v13, &v26, (void **)&v32);
          if ( PWSTR >= 0 )
          {
            v16 = (__int64 *)(v7 + 184);
            for ( i = *(__int64 **)(v7 + 184); i != v16; i = (__int64 *)*i )
            {
              PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2]);
              if ( PWSTR < 0 )
                goto LABEL_15;
              v21 = v28;
              if ( *v28 != (__int64 *)&v27 )
                __fastfail(3u);
              v22 = (__int64 **)v31;
              *v31 = &v27;
              v22[1] = (__int64 *)v21;
              *v21 = (__int64 *)v22;
              v28 = v22;
            }
            v5 = Object;
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
LABEL_15:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v19 = (char *)v32;
  if ( PWSTR >= 0 )
  {
    if ( !v32 || (PWSTR = PiSwPropertySet(v33[1], 1u, v32, v26), PWSTR >= 0) )
    {
      for ( j = v27; j != (__int64 *)&v27; j = (__int64 *)*j )
      {
        PWSTR = CmGetDeviceInterfaceClassGuid(v18, j[2], &InterfaceClassGuid);
        if ( PWSTR < 0 )
          break;
        DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(
                                           v23,
                                           (const WCHAR *)j[2],
                                           v37,
                                           0x104u,
                                           &v29);
        PWSTR = DeviceInterfaceReferenceString;
        if ( DeviceInterfaceReferenceString == -1073741772 )
        {
          v25 = 0;
        }
        else
        {
          if ( DeviceInterfaceReferenceString < 0 )
            break;
          v25 = 1;
          RtlInitUnicodeString((PUNICODE_STRING)&pcbLength[1], v37);
        }
        PWSTR = IoRegisterDeviceInterface(
                  v5,
                  &InterfaceClassGuid,
                  (PUNICODE_STRING)((unsigned __int64)&pcbLength[1] & -(__int64)(v25 != 0)),
                  &UnicodeString);
        if ( PWSTR < 0 )
          break;
        PWSTR = PiSwPropertySet((const WCHAR *)j[2], 3u, j[3], *((_DWORD *)j + 8));
        if ( PWSTR < 0 )
          break;
      }
    }
  }
  if ( v5 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  if ( v19 )
    PnpFreeDevPropertyArray(v26, v19, 0x57706E50u);
  PiSwFreeInterfaceList(&v27);
  RtlFreeAnsiString(&UnicodeString);
  if ( v4 )
  {
    if ( PWSTR >= 0 )
      v1 = pcbLength[0] + 2;
    *(_QWORD *)(v4 + 56) = v1;
    *(_DWORD *)(v4 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v4, 0);
  }
}
