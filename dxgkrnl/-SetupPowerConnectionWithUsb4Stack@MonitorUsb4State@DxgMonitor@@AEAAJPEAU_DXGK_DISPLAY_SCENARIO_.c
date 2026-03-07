__int64 __fastcall DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(
        _QWORD *Context,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  unsigned __int16 v4; // di
  unsigned __int64 v5; // rax
  wchar_t *v6; // rax
  __int64 v7; // rcx
  wchar_t *v8; // rbx
  int v9; // edi
  _QWORD *v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edi
  _QWORD *v14; // rax
  const WCHAR *v15; // rdx
  NTSTATUS appended; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  int *v23; // [rsp+80h] [rbp-80h]
  _QWORD *v24; // [rsp+88h] [rbp-78h]
  _BYTE v25[32]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+B0h] [rbp-50h]
  WCHAR Source[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v28; // [rsp+148h] [rbp+48h] BYREF

  v28 = a2;
  if ( !*((_BYTE *)Context + 8) )
    return 0LL;
  v17 = 0;
  *(_QWORD *)&v22 = &v28;
  FileObject = 0LL;
  *((_QWORD *)&v22 + 1) = &appended;
  appended = 0;
  v23 = &v17;
  v24 = Context;
  DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716_((__int64)v25, &v22);
  v4 = *((_WORD *)Context + 20) + 64;
  v5 = 2 * ((unsigned __int64)v4 >> 1);
  if ( !is_mul_ok((unsigned __int64)v4 >> 1, 2uLL) )
    v5 = -1LL;
  v6 = (wchar_t *)operator new[](v5, 0x4D677844u, 256LL);
  v7 = *Context;
  v8 = v6;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = v6;
  Destination.MaximumLength = v4;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v21);
  appended = RtlStringCchPrintfW(Source, 0x20uLL, (size_t *)L"GFX-%016llx:%08x", *v10, v9);
  v11 = appended;
  if ( appended < 0 )
  {
    v12 = 4;
LABEL_11:
    v17 = v12;
    goto LABEL_29;
  }
  appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)Context[6]);
  v11 = appended;
  if ( appended < 0 )
  {
    v12 = 5;
    goto LABEL_11;
  }
  appended = RtlAppendUnicodeToString(&Destination, Source);
  v11 = appended;
  if ( appended < 0 )
  {
    v12 = 6;
    goto LABEL_11;
  }
  DeviceObject = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)&FileObject,
    0LL);
  appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, &FileObject, &DeviceObject);
  v11 = appended;
  if ( appended >= 0 )
  {
    v17 = DxgMonitor::Usb4HostRouterPoFxRef::OnInitialized(Context + 8, DeviceObject);
    if ( v17 == 1 )
    {
      appended = DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRef(
                   (DxgMonitor::Usb4HostRouterPoFxRef *)(Context + 8),
                   0LL);
      v11 = appended;
      if ( appended >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
          (DxgkCompositionObject **)&FileObject,
          0LL);
        v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Context + 16LL))(*Context);
        v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Context + 8LL))(*Context, v21);
        appended = RtlStringCchPrintfW(
                     Source,
                     0x20uLL,
                     (size_t *)L"GFX%02x-%016llx:%08x",
                     *((unsigned int *)Context + 3),
                     *v14,
                     v13);
        v11 = appended;
        if ( appended >= 0 )
        {
          v15 = (const WCHAR *)Context[6];
          Destination.Length = 0;
          appended = RtlAppendUnicodeToString(&Destination, v15);
          v11 = appended;
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString(&Destination, Source);
            v11 = appended;
            if ( appended >= 0 )
            {
              wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
                (DxgkCompositionObject **)Context + 4,
                0LL);
              appended = IoGetDeviceObjectPointer(&Destination, 0x80000000, (PFILE_OBJECT *)Context + 4, &DeviceObject);
              v11 = appended;
              if ( appended >= 0 )
              {
                if ( Context[12]
                  || (wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                        (void **)Context + 12,
                        0LL),
                      appended = IoRegisterPlugPlayNotification(
                                   EventCategoryTargetDeviceChange,
                                   0,
                                   (PVOID)Context[4],
                                   g_pDriverObject,
                                   DxgMonitor::MonitorUsb4State::_Usb4TargetDeviceChangeNotification,
                                   Context,
                                   (PVOID *)Context + 12),
                      v11 = appended,
                      appended >= 0) )
                {
                  v17 = 1;
                  if ( v8 )
                    operator delete(v8);
                  if ( v26 )
                    lambda_4a8c41d70866edd0ab64dab86cb2cd19_::operator()(v25);
                  v11 = 0;
                  goto LABEL_38;
                }
                v17 = 14;
              }
              else
              {
                v17 = 13;
              }
            }
            else
            {
              v17 = 12;
            }
          }
          else
          {
            v17 = 11;
          }
        }
        else
        {
          v17 = 10;
        }
      }
      else
      {
        v17 = 9;
      }
    }
    else
    {
      v11 = -1073741823;
      appended = -1073741823;
    }
  }
  else
  {
    v17 = 7;
  }
LABEL_29:
  if ( v8 )
    operator delete(v8);
  if ( v26 )
    lambda_4a8c41d70866edd0ab64dab86cb2cd19_::operator()(v25);
LABEL_38:
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&FileObject);
  return v11;
}
