/*
 * XREFs of ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x18013953C
 * Callers:
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x18013A4AC (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180139A14 (-GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     PropVariantToIDList @ 0x1801467A4 (PropVariantToIDList.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

__int64 __fastcall TaskbarPinHelper::Impl::GetAsShellItem(
        TaskbarPinHelper::Impl *this,
        void **a2,
        struct IShellItem **a3)
{
  int ObjectW; // eax
  unsigned int v5; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  HRESULT v9; // eax
  int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  LPCITEMIDLIST pidl; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  if ( *(_WORD *)this != 13 )
  {
    pidl = 0LL;
    *(_QWORD *)v10 = &pidl;
    v11 = 0LL;
    v12 = 1;
    v5 = PropVariantToIDList(this, &v11, a3);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(v10);
    if ( (v5 & 0x80000000) == 0 )
    {
      v9 = SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, a2);
      v5 = v9;
      if ( v9 >= 0 )
      {
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &pidl,
          0LL);
        return 0LL;
      }
      v7 = (unsigned int)v9;
      v8 = 46LL;
    }
    else
    {
      v7 = v5;
      v8 = 45LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"internal\\shell\\private\\inc\\TaskbarPinHelper.h",
      (const char *)v7);
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pidl,
      0LL);
    return v5;
  }
  ObjectW = wil::PropVariant::GetObjectW(this, (const struct _GUID *)a2, a2);
  v5 = ObjectW;
  if ( ObjectW < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"internal\\shell\\private\\inc\\TaskbarPinHelper.h",
      (const char *)(unsigned int)ObjectW);
    return v5;
  }
  return 0LL;
}
