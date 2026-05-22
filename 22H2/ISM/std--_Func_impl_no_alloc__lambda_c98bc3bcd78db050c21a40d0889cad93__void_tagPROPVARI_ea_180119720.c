/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c98bc3bcd78db050c21a40d0889cad93__void_tagPROPVARIANT_const_&_::_Delete_this @ 0x180119720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_c98bc3bcd78db050c21a40d0889cad93__void_tagPROPVARIANT_const___::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1 + 3);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
