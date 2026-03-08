/*
 * XREFs of ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C024BF0C
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C024B170 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C024B550 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C024AEEC (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::OpenHapticsDevice(SimpleHapticsController *this)
{
  unsigned int v1; // ebx
  void **v2; // rdi
  PVOID *NotificationEntry; // r14
  NTSTATUS v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // r9
  PVOID v11; // r8
  NTSTATUS v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  PVOID EventCategoryData; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+6Fh] BYREF

  v1 = 0;
  v2 = (void **)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && !*((_QWORD *)this + 7) )
  {
    NotificationEntry = (PVOID *)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)this;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      v5 = ZwCreateFile(
             v2,
             2u,
             &ObjectAttributes,
             (PIO_STATUS_BLOCK)((char *)this + 40),
             0LL,
             0x80u,
             3u,
             3u,
             0x40000000u,
             0LL,
             0);
      v1 = v5;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          LODWORD(EventCategoryData) = v5;
          v18 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v6,
            v7,
            (void **)&v18,
            (__int64)&EventCategoryData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          709,
          v1,
          "Function failed.");
LABEL_16:
        SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
        return v1;
      }
      v8 = *v2;
      EventCategoryData = 0LL;
      v9 = ObReferenceObjectByHandle(v8, 0, (POBJECT_TYPE)IoFileObjectType, 0, &EventCategoryData, 0LL);
      v11 = EventCategoryData;
      v1 = v9;
      *((_QWORD *)this + 7) = EventCategoryData;
      if ( v9 < 0 )
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          LODWORD(EventCategoryData) = v9;
          v18 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            (__int64)v11,
            v10,
            (void **)&v18,
            (__int64)&EventCategoryData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          717,
          v1,
          "Function failed.");
        goto LABEL_16;
      }
      v12 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v11,
              gpWin32kDriverObject,
              (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SimpleHapticsController::HapticsDeviceNotify,
              this,
              NotificationEntry);
      v1 = v12;
      if ( v12 < 0 )
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          LODWORD(EventCategoryData) = v12;
          v18 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v13,
            v14,
            (void **)&v18,
            (__int64)&EventCategoryData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          725,
          v1,
          "Function failed.");
        goto LABEL_16;
      }
    }
  }
  return v1;
}
