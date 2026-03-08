/*
 * XREFs of ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C024C180
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0248474 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0248E28 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C024B908 (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C024BD6C (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C024C684 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1C024CE48 (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteracti.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1C024AEB0 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall SimpleHapticsController::SendDeviceIOControl(
        SimpleHapticsController *this,
        ULONG a2,
        void *a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7)
{
  struct _FILE_OBJECT *v7; // rdi
  ULONG v8; // r15d
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v15; // rbx
  PVOID v16; // r14
  PIRP v17; // rax
  __int64 v18; // rcx
  IRP *v19; // rsi
  __int64 v20; // rcx
  NTSTATUS v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+30h] BYREF

  v7 = (struct _FILE_OBJECT *)*((_QWORD *)this + 7);
  v8 = a4;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( !v7 )
  {
    Status = -1073741436;
LABEL_17:
    if ( (unsigned int)dword_1C0357118 > 2 )
    {
      LODWORD(OutputBuffer) = Status;
      v28 = (__int64)"SimpleHapticsController::SendDeviceIOControl failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357118,
        byte_1C031FABE,
        (__int64)a3,
        a4,
        (void **)&v28,
        (__int64)&OutputBuffer);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SendDeviceIOControl",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      447,
      Status,
      "SimpleHapticsController::SendDeviceIOControl failed.");
    return (unsigned int)Status;
  }
  ObfReferenceObject(v7);
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    LODWORD(v28) = a2;
    v25 = (__int64)"SimpleHapticsController::SendDeviceIOControl entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357118,
      byte_1C031FB9E,
      v12,
      v13,
      (void **)&v25,
      (__int64)&v28);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v7);
  v15 = RelatedDeviceObject;
  if ( !RelatedDeviceObject
    || (v16 = OutputBuffer,
        v17 = IoBuildDeviceIoControlRequest(
                a2,
                RelatedDeviceObject,
                a3,
                v8,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock),
        (v19 = v17) == 0LL) )
  {
    Status = -1073741823;
    goto LABEL_17;
  }
  v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v7;
  LOBYTE(OutputBuffer) = IS_USERCRIT_OWNED_EXCLUSIVE(v18);
  if ( (_BYTE)OutputBuffer || IS_USERCRIT_OWNED_AT_ALL(v20) )
  {
    BYTE1(OutputBuffer) = 1;
    UserSessionSwitchLeaveCrit(v20);
  }
  else
  {
    BYTE1(OutputBuffer) = 0;
  }
  v21 = IofCallDriver(v15, v19);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&OutputBuffer, v22, v23);
  if ( v21 == 259 )
  {
    if ( v16 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( a7 )
        *a7 = IoStatusBlock.Information;
    }
  }
  Status = IoStatusBlock.Status;
  ObfDereferenceObject(v7);
  if ( Status < 0 )
    goto LABEL_17;
  return (unsigned int)Status;
}
