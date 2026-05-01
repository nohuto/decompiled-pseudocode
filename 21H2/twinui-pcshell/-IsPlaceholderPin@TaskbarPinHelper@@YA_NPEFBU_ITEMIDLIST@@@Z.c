/*
 * XREFs of ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x18015962C
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetAsBoolean@PropVariant@wil@@QEBAJPEA_N@Z @ 0x1801557D0 (-GetAsBoolean@PropVariant@wil@@QEBAJPEA_N@Z.c)
 *     ?GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180157174 (-GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPRO.c)
 */

bool __fastcall TaskbarPinHelper::IsPlaceholderPin(
        TaskbarPinHelper *this,
        const struct _ITEMIDLIST *a2,
        __int64 a3,
        struct tagPROPVARIANT *a4)
{
  bool v4; // bl
  bool v6; // [rsp+20h] [rbp-38h] BYREF
  PROPVARIANT pvar[3]; // [rsp+28h] [rbp-30h] BYREF

  v4 = 0;
  LOWORD(pvar[0]) = 0;
  if ( (int)TaskbarPinHelper::Impl::GetPropertyFromPidl(this, a2, (const struct _tagpropertykey *)pvar, a4) >= 0
    && wil::PropVariant::GetAsBoolean(pvar, &v6) >= 0 )
  {
    v4 = v6;
  }
  PropVariantClear(pvar);
  return v4;
}
