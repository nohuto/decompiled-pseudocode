/*
 * XREFs of ??$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundManager@@@Z @ 0x180033564
 * Callers:
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18000EDB0 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x180011D4C (-GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180018F00 (InlineIsEqualGUID.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180033100 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ??0ForegroundManager@@AEAA@XZ @ 0x18003361C (--0ForegroundManager@@AEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAnimationDataProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003A730 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAnimationDataPr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,IForegroundManager,>(
        ForegroundManager **a1)
{
  ForegroundManager *v2; // rax
  ForegroundManager *v3; // rbx
  int v4; // edi
  _DWORD *v5; // rcx

  *a1 = 0LL;
  v2 = (ForegroundManager *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = ForegroundManager::ForegroundManager(v2);
    v4 = ForegroundManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_210cc63e_fd52_4129_a96c_5ee68a1f39e8, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v3;
        (*(void (__fastcall **)(ForegroundManager *))(*(_QWORD *)v3 + 8LL))(v3);
        v4 = 0;
      }
      else if ( InlineIsEqualGUID(v5, v5) )
      {
        *a1 = v3;
        v4 = 0;
        (*(void (__fastcall **)(ForegroundManager *))(*(_QWORD *)v3 + 8LL))(v3);
      }
      else
      {
        v4 = -2147467262;
      }
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAnimationDataProvider>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
