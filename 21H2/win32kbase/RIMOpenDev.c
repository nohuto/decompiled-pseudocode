/*
 * XREFs of RIMOpenDev @ 0x1C00AD020
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ApiSetIsRemoteConnection @ 0x1C00540CC (ApiSetIsRemoteConnection.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0055804 (RimDeviceTypeToRimInputType.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00AC634 (RimDeviceTypeToRimInputTypeString.c)
 *     ApiSetGetMaxOpenRetries @ 0x1C00AD17C (ApiSetGetMaxOpenRetries.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013A7B0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C014EDA8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     WPP_RECORDER_SF_qdDSd @ 0x1C015030C (WPP_RECORDER_SF_qdDSd.c)
 *     ApiSetGetgfSwitchInProgress @ 0x1C01CF63C (ApiSetGetgfSwitchInProgress.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4, int a5)
{
  struct _OBJECT_ATTRIBUTES *v7; // rdi
  unsigned int MaxOpenRetries; // esi
  int v10; // ebp
  NTSTATUS File; // eax
  NTSTATUS v12; // edi
  void *v13; // rcx
  char v15; // al
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rcx
  char v22; // al
  int v23; // edx
  int v24; // r8d
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-88h]
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-80h]
  const wchar_t *v27; // [rsp+68h] [rbp-40h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+8h] BYREF
  struct _OBJECT_ATTRIBUTES *v29; // [rsp+B8h] [rbp+10h]

  v29 = a2;
  v7 = a2;
  MaxOpenRetries = ApiSetGetMaxOpenRetries();
  if ( *(_BYTE *)(a1 + 48) == 2 && (unsigned int)ApiSetIsRemoteConnection() )
  {
    a5 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 741LL);
  }
  *(_DWORD *)(a1 + 184) |= 0x100u;
  v10 = 0;
  if ( !MaxOpenRetries )
    goto LABEL_9;
  while ( 1 )
  {
    File = ZwCreateFile((PHANDLE)(a1 + 224), a3, v7, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, a4, 3u, 0, 0LL, 0);
    *(_DWORD *)(a1 + 288) = File;
    v12 = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 && !(unsigned int)ApiSetGetgfSwitchInProgress() )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSd(
        *(_QWORD *)(a1 + 216),
        v16,
        v17,
        17,
        (_DWORD)AllocationSize,
        a1,
        v17,
        v15,
        *(_QWORD *)(a1 + 216),
        v12);
    }
    v18 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    FileAttributes[0] = v12;
    DbgPrintGDI(
      "RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %X..retry after 100ms",
      a1,
      v19,
      v18,
      *(_QWORD *)(a1 + 216),
      *(_QWORD *)FileAttributes);
    Object = (PVOID)-1000000LL;
    KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)&Object);
    if ( ++v10 >= MaxOpenRetries )
      goto LABEL_8;
    v7 = v29;
  }
  if ( (unsigned int)dword_1C024A170 > 5 && tlgKeywordOn((__int64)&dword_1C024A170, 0x400000000000LL) )
  {
    v20 = *(unsigned __int8 *)(a1 + 48);
    a5 = v12;
    v27 = RimDeviceTypeToRimInputTypeString(a1, v20);
    AllocationSize = (PLARGE_INTEGER)&v27;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v21,
      &unk_1C021AD06);
  }
  if ( v12 == -1073741757 || v12 == -1073741790 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSd(
        *(_QWORD *)(a1 + 216),
        v23,
        v24,
        18,
        (_DWORD)AllocationSize,
        a1,
        v24,
        v22,
        *(_QWORD *)(a1 + 216),
        v12);
    }
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
  }
LABEL_8:
  if ( v12 >= 0 )
  {
LABEL_9:
    v13 = *(void **)(a1 + 224);
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *(_QWORD *)(a1 + 232) = Object;
  }
  return (unsigned int)v12;
}
