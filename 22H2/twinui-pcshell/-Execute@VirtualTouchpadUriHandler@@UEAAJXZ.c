/*
 * XREFs of ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180399560
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     swscanf_s @ 0x180090B8C (swscanf_s.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180399778 (-GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager.c)
 *     ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x180399928 (-GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x180399B18 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x180399DD4 (-_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualTouchpadUriHandler::Execute(VirtualTouchpadUriHandler *this)
{
  unsigned int v2; // edx
  const struct _GUID *v3; // r8
  int SelectedItem; // eax
  unsigned int v5; // ebx
  void *v6; // rbx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  const unsigned __int16 *v10; // rcx
  int ExperienceManager; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  void *v15[2]; // [rsp+20h] [rbp-30h] BYREF
  HMONITOR v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  wchar_t *Buffer; // [rsp+78h] [rbp+28h] BYREF
  struct tagPOINT v20; // [rsp+80h] [rbp+30h] BYREF
  struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager *v21; // [rsp+88h] [rbp+38h] BYREF

  v17 = -2LL;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  SelectedItem = CWRLExecuteCommandBase::_GetSelectedItem(this, v2, v3, v15);
  v5 = SelectedItem;
  if ( SelectedItem < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)SelectedItem);
    goto LABEL_22;
  }
  Buffer = 0LL;
  v6 = v15[0];
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&Buffer,
    0LL);
  v7 = (*(__int64 (__fastcall **)(void *, __int64, wchar_t **))(*(_QWORD *)v6 + 40LL))(v6, 2147909632LL, &Buffer);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 30LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)v8);
    goto LABEL_20;
  }
  if ( (unsigned int)_o__wcsnicmp(Buffer) )
  {
    v5 = -2147024809;
    v8 = 2147942487LL;
    v9 = 31LL;
    goto LABEL_7;
  }
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  ExperienceManager = VirtualTouchpadUriHandler::GetExperienceManager(v10, &v21);
  v5 = ExperienceManager;
  if ( ExperienceManager >= 0 )
  {
    v13 = 0;
    if ( swscanf_s(Buffer, L"ms-virtualtouchpad:?x=%d&y=%d", &v20, &v20.y) != 2 )
    {
      v13 = 1;
      v16[0] = 0LL;
      if ( VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(v16) < 0 || !v16[0] )
        goto LABEL_18;
      ExperienceManager = VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(v16[0], &v20);
      v5 = ExperienceManager;
      if ( ExperienceManager < 0 )
      {
        v12 = 46LL;
        goto LABEL_17;
      }
    }
    *(float *)v16 = (float)v20.x;
    *((float *)v16 + 1) = (float)v20.y;
    *(float *)&v16[1] = (float)v20.x;
    *((float *)&v16[1] + 1) = (float)v20.y;
    ExperienceManager = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager *, _QWORD, HMONITOR *))(*(_QWORD *)v21 + 48LL))(
                          v21,
                          v13,
                          v16);
    v5 = ExperienceManager;
    if ( ExperienceManager < 0 )
    {
      v12 = 49LL;
      goto LABEL_17;
    }
LABEL_18:
    v5 = 0;
    goto LABEL_19;
  }
  v12 = 34LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)ExperienceManager);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_20:
  if ( Buffer )
    CoTaskMemFree(Buffer);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  return v5;
}
