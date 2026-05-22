/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Delete_this @ 0x180119760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1 + 3);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
