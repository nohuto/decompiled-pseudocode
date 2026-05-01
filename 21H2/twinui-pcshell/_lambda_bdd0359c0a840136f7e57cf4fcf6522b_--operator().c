/*
 * XREFs of _lambda_bdd0359c0a840136f7e57cf4fcf6522b_::operator() @ 0x1802C8F44
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bdd0359c0a840136f7e57cf4fcf6522b___::Run @ 0x1802CA080 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bdd0359c0a840136f7e57cf4fcf6522b___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1804E1470 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_bdd0359c0a840136f7e57cf4fcf6522b_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  LPVOID v4; // rbx
  __int64 (__fastcall *v5)(LPVOID, void *, GUID *, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10 = 0LL;
    v4 = ppv;
    v5 = *(__int64 (__fastcall **)(LPVOID, void *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = v5(v4, &unk_1805B0C20, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &v10);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v6 = ApplicationViewHelpers::CloseView(*(_QWORD *)(a1 + 8), v10, 0LL);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v7 = 302LL;
    }
    else
    {
      v7 = 284LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x119,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v3;
}
