/*
 * XREFs of ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0108F50
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0108C18 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C0103468 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0108FF4 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFilters(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
                           a2,
                           *(unsigned int *)(a3 + 4)) )
    return 0;
  v10[2] = *(unsigned int *)(a3 + 4);
  v8 = *(unsigned int *)(a2 + 4);
  v12 = 0LL;
  v10[1] = 0LL;
  v11[1] = 0LL;
  v11[2] = v8;
  v10[0] = a3;
  v11[0] = a2;
  return Ndis::BindRegistry::UpdateFiltersInner(a1, v11, v10, &v12, 1, a4);
}
