/*
 * XREFs of ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x18013F61C
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x18013EFBC (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800312F4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$As@UICompositorPartner@Composition@UI@Windows@@@?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorPartner@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013DB2C (--$As@UICompositorPartner@Composition@UI@Windows@@@-$ComPtr@UICompositor@Composition@UI@Windows@.c)
 *     ?lock@?$weak_ptr@VSystemCursorService@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180140F40 (-lock@-$weak_ptr@VSystemCursorService@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService@@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SystemCursor::CreateCustomCursorSharedTarget(
        void **this,
        struct Windows::UI::Composition::IContainerVisual *a2,
        void **a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v11; // eax
  __int64 (__fastcall *v12)(struct Windows::UI::Composition::IContainerVisual *, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, HANDLE *); // rdi
  int v20; // eax
  char *v21; // rcx
  __int64 v22; // rax
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+28h] [rbp-38h] BYREF
  struct Windows::UI::Composition::IContainerVisual *v27; // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  std::_Ref_count_base *v31; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HANDLE hObject; // [rsp+90h] [rbp+30h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+48h] BYREF

  *a3 = (void *)-1LL;
  std::weak_ptr<SystemCursorService>::lock(this, &v30);
  if ( v30 )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v30 + 136);
    v28 = v6;
    if ( v6 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[1])(v6);
    v26 = 0LL;
    v7 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositor>::As<Windows::UI::Composition::ICompositorPartner>(
           &v28,
           &v26);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x197,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v7);
LABEL_21:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
      goto LABEL_33;
    }
    v34 = 0LL;
    v9 = v26;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v26 + 24LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v34);
    v11 = v10(v9, &v34);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v11);
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v34);
      goto LABEL_21;
    }
    v27 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v27);
    v25 = 0LL;
    v12 = **(__int64 (__fastcall ***)(struct Windows::UI::Composition::IContainerVisual *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
    v13 = v12(a2, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, &v25);
    v8 = v13;
    if ( v13 < 0 )
    {
      v14 = 416LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v13);
LABEL_19:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v27);
      goto LABEL_20;
    }
    v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v34)[4])(v34, v25);
    v8 = v13;
    if ( v13 < 0 )
    {
      v14 = 418LL;
      goto LABEL_12;
    }
    v35 = 0LL;
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
    v16 = **v34;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
    v17 = v16(v15, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, &v35);
    v8 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v17);
LABEL_18:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
      goto LABEL_19;
    }
    hObject = 0LL;
    v18 = v26;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, HANDLE *))(*(_QWORD *)v26 + 56LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v20 = v19(v18, v35, &hObject);
    v8 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v20);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_18;
    }
    if ( this + 9 == &hObject )
    {
      v21 = (char *)hObject;
    }
    else
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        this + 9,
        hObject);
      v21 = 0LL;
      hObject = 0LL;
    }
    v22 = (__int64)this[8];
    v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
    if ( (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v22 != v34 )
    {
      if ( v34 )
      {
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v34)[1])(v34);
        v22 = (__int64)this[8];
      }
      v29 = v22;
      this[8] = v23;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v29);
      v21 = (char *)hObject;
    }
    *a3 = this[9];
    if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v21);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v27);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
  }
  v8 = 0;
LABEL_33:
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  return v8;
}
