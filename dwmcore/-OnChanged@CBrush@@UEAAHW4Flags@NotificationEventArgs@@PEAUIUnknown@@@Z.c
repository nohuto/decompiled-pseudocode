/*
 * XREFs of ?OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003F5D0
 * Callers:
 *     ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003F420 (-OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003F470 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx

  if ( a2 == 14 )
  {
    v3 = a1 + 72;
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v4 + 16, 24LL);
      *(_BYTE *)(v4 + 200) = 1;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v3);
    }
  }
  return 1LL;
}
