/*
 * XREFs of _lambda_0fe7ca22b45d32197121ecf13016f570_::operator() @ 0x1804E12E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570___::Run @ 0x1804E18F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0fe7ca22b45d32197121ecf13016f570___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180081740 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_0fe7ca22b45d32197121ecf13016f570_::operator()(CMarshaledInterface *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, (struct IInspectable **)&v6, 0);
  v3 = v2;
  if ( v2 < 0
    || (v2 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v6 + 32LL))(
               v6,
               *((_QWORD *)this + 1),
               *((unsigned int *)this + 4),
               *((unsigned int *)this + 5),
               *((_DWORD *)this + 6)),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return v3;
}
