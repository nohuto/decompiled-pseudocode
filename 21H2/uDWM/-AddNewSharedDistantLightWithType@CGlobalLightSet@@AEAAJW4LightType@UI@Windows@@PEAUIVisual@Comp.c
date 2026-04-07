/*
 * XREFs of ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180046B84
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180046960 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001286C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012BB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD8C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositorInternal@Internal@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInternal@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800474AC (--$As@UICompositorInternal@Internal@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevic.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalLightSet::AddNewSharedDistantLightWithType(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rsi
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // xmm0_8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  HANDLE hObject; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  int v30; // [rsp+58h] [rbp-18h]
  int Buffer; // [rsp+60h] [rbp-10h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v5 = a2;
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice((CDesktopManager *)a1);
  v28[0] = (__int64)DCompositionInteropDevice;
  v9 = DCompositionInteropDevice;
  if ( DCompositionInteropDevice )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
  v27 = 0LL;
  v10 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
          v28,
          &v27);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_17;
  }
  v25 = 0LL;
  v12 = v27;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 72LL))(v12, &v25);
  v11 = v13;
  if ( v13 < 0 )
  {
    v21 = 89LL;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 72LL))(v25, a3);
    v11 = v13;
    if ( v13 < 0 )
    {
      v21 = 90LL;
    }
    else
    {
      v14 = *a4;
      v30 = *((_DWORD *)a4 + 2);
      v29 = v14;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 88LL))(v25, &v29);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v24 = 0LL;
        v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
                v25,
                &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3,
                &v24);
        v11 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F,
            (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)(unsigned int)v15);
LABEL_14:
          v19 = v24;
          if ( v24 )
          {
            v24 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          goto LABEL_16;
        }
        hObject = 0LL;
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &hObject,
          0LL);
        v16 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, __int64, HANDLE *))(*(_QWORD *)v9 + 224LL))(
                v9,
                v24,
                &hObject);
        v11 = v16;
        if ( v16 < 0 )
        {
          v22 = (unsigned int)v16;
          v23 = 99LL;
        }
        else
        {
          v17 = NtDCompositionSetMaterialProperty(*(_QWORD *)(a1 + 88), v5, hObject);
          v11 = v17 | 0x10000000;
          if ( v17 < 0 )
          {
            v23 = 100LL;
          }
          else
          {
            v18 = v24;
            v24 = 0LL;
            Buffer = v5;
            v32 = v18;
            if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer, 0x10u, 0LL) )
            {
              v11 = 0;
              goto LABEL_12;
            }
            v11 = -2147024882;
            v23 = 105LL;
          }
          v22 = v11;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
          (const char *)v22);
LABEL_12:
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        goto LABEL_14;
      }
      v21 = 91LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)v13);
LABEL_16:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
LABEL_17:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v28);
  return v11;
}
