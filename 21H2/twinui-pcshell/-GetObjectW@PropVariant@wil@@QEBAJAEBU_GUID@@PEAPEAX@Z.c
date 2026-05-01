/*
 * XREFs of ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180139A14
 * Callers:
 *     ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x18013953C (-GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z.c)
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18013A6CC (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::PropVariant::GetObjectW(wil::PropVariant *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *); // rcx

  *a3 = 0LL;
  result = 2147500034LL;
  if ( *(_WORD *)this == 13 || *(_WORD *)this == 66 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *))*((_QWORD *)this + 1);
    if ( v4 )
      return (**v4)(v4, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe);
  }
  return result;
}
