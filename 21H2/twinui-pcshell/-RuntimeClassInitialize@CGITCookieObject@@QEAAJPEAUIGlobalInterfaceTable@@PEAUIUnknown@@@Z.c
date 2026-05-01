/*
 * XREFs of ?RuntimeClassInitialize@CGITCookieObject@@QEAAJPEAUIGlobalInterfaceTable@@PEAUIUnknown@@@Z @ 0x1804E7044
 * Callers:
 *     ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x1804E6A50 (--$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCookieObject::RuntimeClassInitialize(
        CGITCookieObject *this,
        struct IGlobalInterfaceTable *a2,
        struct IUnknown *a3)
{
  struct IGlobalInterfaceTable *v5; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IGlobalInterfaceTable *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
  if ( v5 != a2 )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v11 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v5 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
  }
  v7 = ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, struct IUnknown *, GUID *, char *))v5->lpVtbl->RegisterInterfaceInGlobal)(
         v5,
         a3,
         &GUID_00000000_0000_0000_c000_000000000046,
         (char *)this + 48);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"shell\\lib\\gitreglist.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
