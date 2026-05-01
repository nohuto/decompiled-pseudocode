/*
 * XREFs of ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18033FC04
 * Callers:
 *     ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x18033F280 (-HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180340908 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x1800AAF10 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 */

void __fastcall ViewWrapperBase::PropagateViewStateOverridesToComponentsIfNecessary(
        ViewWrapperBase *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v4[8]; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_DWORD *)a2 + 6) != *((_DWORD *)a3 + 6) )
  {
    v3[1] = *((_DWORD *)a3 + 6);
    v3[0] = 1;
    v4[0] = off_180522910;
    v4[1] = v3;
    v4[7] = v4;
    std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(v4, 0);
  }
}
