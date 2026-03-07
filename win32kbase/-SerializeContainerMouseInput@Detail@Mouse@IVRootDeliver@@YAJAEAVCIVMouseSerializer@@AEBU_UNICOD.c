__int64 __fastcall IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
        IVRootDeliver::Mouse::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct ContainerMouseInputData **a4)
{
  __int64 v4; // r15
  char v6; // r12
  char v9; // bl
  int v10; // edi
  int v11; // r8d
  PDEVICE_OBJECT v12; // rcx
  void *v13; // rdx
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  __int16 v16; // [rsp+30h] [rbp-48h]
  char v17; // [rsp+40h] [rbp-38h]

  v4 = *((_QWORD *)this + 2);
  v6 = (char)a3;
  v9 = 1;
  if ( !a2->Length || (v10 = CIVSerializer::Serialize(this, *((struct _UNICODE_STRING **)this + 2), a2, 1), v10 >= 0) )
    v10 = CIVMouseSerializer::Serialize(this, (struct _IVMouseInputData **)(v4 + 24), *a4, *((unsigned int *)a4 + 2), 1);
  if ( v10 >= 0 )
  {
    v10 = CIVSerializer::ExtendByMeasuredExtra(this);
    if ( v10 >= 0 )
    {
      v10 = IVSerializeMouseInputBuffer(v6, (const struct ContainerMouseInput *)a4, a2, this);
      if ( v10 < 0 )
      {
        v12 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v9 = 0;
        }
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = v10;
          v13 = &WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids;
          v16 = 12;
          goto LABEL_28;
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
        v13 = &WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids;
        v17 = v10;
        v16 = 11;
LABEL_29:
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          (_DWORD)AttachedDevice,
          (_DWORD)v13,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          v16,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v17);
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = v10;
      v13 = &WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids;
      v16 = 10;
LABEL_28:
      AttachedDevice = v12->AttachedDevice;
      goto LABEL_29;
    }
  }
  return (unsigned int)v10;
}
