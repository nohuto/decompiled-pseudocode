/*
 * XREFs of ?GetCursorClosestInteractiveBounds@ControllerProcessor@@AEAA?AUtagRECT@@XZ @ 0x180120C28
 * Callers:
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x180121910 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct tagRECT *__fastcall ControllerProcessor::GetCursorClosestInteractiveBounds(
        ControllerProcessor *this,
        struct tagRECT *__return_ptr retstr)
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[16]; // [rsp+28h] [rbp-20h] BYREF

  *retstr = 0LL;
  v6 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 936);
  if ( v3 )
  {
    v4 = **v3;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
    if ( v4(v3, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b, &v6) >= 0 )
      *retstr = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, v7);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
  return retstr;
}
