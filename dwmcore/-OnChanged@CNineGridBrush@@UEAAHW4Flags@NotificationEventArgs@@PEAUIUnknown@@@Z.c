/*
 * XREFs of ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E5DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CNineGridBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v3; // rax
  bool v4; // al
  __int64 v5; // rdi
  __int64 v6; // rbx

  if ( a2 == 14 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    v4 = v3 && *(_BYTE *)(v3 + 80);
    v5 = a1 + 72;
    *(_BYTE *)(a1 + 80) = v4;
    v6 = *(_QWORD *)(a1 + 72);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v6 + 16, 0x18u);
      *(_BYTE *)(v6 + 200) = 1;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v5);
    }
  }
  return 1LL;
}
