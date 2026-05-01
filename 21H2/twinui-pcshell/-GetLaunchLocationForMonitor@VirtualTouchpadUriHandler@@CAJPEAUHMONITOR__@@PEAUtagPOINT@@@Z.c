/*
 * XREFs of ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x180399BF8
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180399830 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(HMONITOR a1, struct tagPOINT *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  LONG v11; // eax
  LONG v12; // eax
  int v14[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-20h] BYREF
  LONG v19; // [rsp+58h] [rbp-18h]
  LONG v20; // [rsp+5Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    v6 = ppv;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
    v7 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           &v15);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v7);
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
      goto LABEL_23;
    }
    *(_QWORD *)v14 = 0LL;
    v8 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
    v9 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v8 + 72LL))(
           v8,
           a1,
           &SID_EdgeUi,
           &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
           v14);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 115LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v9);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
      goto LABEL_22;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v14 + 80LL))(*(_QWORD *)v14, &v17);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 117LL;
      goto LABEL_11;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)v14 + 168LL))(*(_QWORD *)v14, v18);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 119LL;
      goto LABEL_11;
    }
    if ( v17 < 2 )
    {
      v12 = v19;
    }
    else
    {
      if ( v17 != 2 )
      {
        if ( v17 != 3 )
        {
LABEL_20:
          v5 = 0;
          goto LABEL_21;
        }
        a2->x = v19;
        v11 = v18[1];
LABEL_19:
        a2->y = v11;
        goto LABEL_20;
      }
      v12 = v18[0];
    }
    a2->x = v12;
    v11 = v20;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v5;
}
