/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18005AC60
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18005ABC0 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1801D2CA0 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18005AF8C (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        CClassicWindowManager *this,
        struct IUnknown *a2,
        struct IClassicWindow **a3)
{
  struct IUnknown *v3; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  struct IClassicWindow *v8; // rbx
  bool v9; // r14
  HWND v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, struct IUnknown **); // rdi
  unsigned int v13; // eax
  int v14; // eax
  HWND v15; // rax
  HWND v16; // rdx
  __int64 (__fastcall *v18)(struct IClassicWindow *, struct IUnknown **); // rdi
  int v19; // eax
  int v20; // [rsp+30h] [rbp-28h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]
  struct IUnknown *v23; // [rsp+A0h] [rbp+48h] BYREF
  struct IUnknown *v24; // [rsp+A8h] [rbp+50h]
  struct IClassicWindow **v25; // [rsp+B0h] [rbp+58h]
  unsigned int v26; // [rsp+B8h] [rbp+60h]

  v25 = a3;
  v24 = a2;
  v3 = a2;
  *a3 = 0LL;
  v26 = -2147024809;
  v5 = *((_QWORD *)this + 25);
  v6 = v5;
  v7 = 0LL;
  if ( !v5 )
    return v26;
  while ( 1 )
  {
    v8 = *(struct IClassicWindow **)(*((_QWORD *)this + 24) + 8 * v7);
    v21 = (struct IUnknown *)v8;
    if ( v8 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = 1;
    if ( !v3 )
      goto LABEL_16;
    v23 = 0LL;
    v18 = *(__int64 (__fastcall **)(struct IClassicWindow *, struct IUnknown **))(*(_QWORD *)v8 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v19 = v18(v8, &v23);
    v3 = 0LL;
    if ( v19 >= 0
      && !(unsigned int)SHIsSameObject(v24, v23)
      && (*(int (__fastcall **)(_QWORD, struct IUnknown *, int *))(**((_QWORD **)this + 33) + 80LL))(
           *((_QWORD *)this + 33),
           v23,
           &v20) >= 0 )
    {
      v9 = v20 == 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    if ( v9 )
    {
LABEL_16:
      v10 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
      if ( IsIconic(v10) )
        v9 = (char)v3;
      if ( v9 )
      {
        v11 = *((_QWORD *)this + 35);
        v22 = v11;
        if ( v11 )
        {
          LODWORD(v23) = (_DWORD)v3;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct IUnknown **))(*(_QWORD *)v11 + 48LL);
          v13 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
          v14 = v12(v22, v13, 0LL, &v23);
          v3 = 0LL;
          if ( v14 >= 0 && (_DWORD)v23 == 1 )
            v9 = 0;
        }
        if ( v9 )
          break;
      }
    }
LABEL_8:
    if ( v8 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( ++v7 >= v5 )
      goto LABEL_20;
    v3 = v24;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 152LL))(v8) )
  {
    v15 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
    if ( !CApplicationManagerUtility::IsValidAndVisibleWindow(v15, v16) )
    {
      v6 = v7;
      goto LABEL_8;
    }
  }
  v21 = v3;
  *v25 = v8;
  v26 = (unsigned int)v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
LABEL_20:
  if ( v6 != v5 )
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 23) + 16LL))((char *)this + 184, v6);
  return v26;
}
