/*
 * XREFs of ?GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@PEAPEAUIAppLayoutItemEnum@@@Z @ 0x1804F16B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutItemEnum@@@12@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x1804F04F4 (--$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@.c)
 */

__int64 __fastcall CAppLayout::GetItemEnumEx(__int64 a1, __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  v11 = a4;
  v12 = a3;
  v9 = a2;
  *a5 = 0LL;
  v10 = a1 & -(__int64)(a1 != 40);
  Microsoft::WRL::Details::Make<CAppLayoutItemEnum,IAppLayout * &,IAppLayoutItem * &,enum ABSOLUTE_DIRECTION &,enum APP_LAYOUT_ENUM_FLAGS &>(
    (__int64 *)&a5,
    &v10,
    &v9,
    &v12,
    &v11);
  v6 = (__int64)a5;
  if ( a5 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a5)(a5, &GUID_7f470db3_d746_469a_ba93_c7979e5faad9, v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
