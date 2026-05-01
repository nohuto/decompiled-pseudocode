/*
 * XREFs of ?GetItemEnum@CAppLayout@@UEAAJPEAPEAUIAppLayoutItemEnum@@@Z @ 0x1804F19A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutItemEnum@@@12@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x1804F0884 (--$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@.c)
 */

__int64 __fastcall CAppLayout::GetItemEnum(unsigned __int64 this, struct IAppLayoutItemEnum **a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v6[5]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v8 = 1;
  *a2 = 0LL;
  v7 = 0;
  v9 = 0LL;
  v10 = this & -(__int64)(this != 40);
  Microsoft::WRL::Details::Make<CAppLayoutItemEnum,IAppLayout * &,IAppLayoutItem * &,enum ABSOLUTE_DIRECTION &,enum APP_LAYOUT_ENUM_FLAGS &>(
    v6,
    &v10,
    &v9,
    &v8,
    &v7);
  v3 = v6[0];
  if ( v6[0] )
  {
    v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAppLayoutItemEnum **))v6[0])(
           v6[0],
           &GUID_7f470db3_d746_469a_ba93_c7979e5faad9,
           a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
