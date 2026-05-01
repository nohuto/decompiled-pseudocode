/*
 * XREFs of ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802A5D2C
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802A42EC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskFlowImmersiveShellBroker::StartFileListener(TaskFlowImmersiveShellBroker *this)
{
  __int64 v2; // rdi
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, char *); // rsi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v15 = *((_QWORD *)this + 26);
  v2 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  if ( !v2 )
  {
LABEL_14:
    v4 = 0;
    goto LABEL_15;
  }
  v13 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.TaskFlow.DataEngine.FileActivityListener",
    0x40u,
    0x3Fu);
  ActivationFactory = RoGetActivationFactory(v17, &GUID_e73e0a75_15f4_479f_a515_948333fbd48a, &v13);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 567LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_10;
  }
  v6 = v13;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v13 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  ActivationFactory = v7(v6, v2, (char *)this + 232);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 568LL;
    goto LABEL_6;
  }
  v8 = *((_QWORD *)this + 29);
  v14 = v8;
  if ( !v8
    || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8),
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8),
        v4 = v9,
        v9 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23D,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_10:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v4;
}
