/*
 * XREFs of ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E14E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CMaskBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  __int64 v7; // rdi
  __int64 v8; // rbx

  if ( a2 != 14 )
    return 1LL;
  v3 = *(_QWORD *)(a1 + 96);
  if ( !v3 )
    goto LABEL_7;
  if ( *(_BYTE *)(v3 + 80) )
  {
    v6 = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 88);
    if ( !v4 || (v5 = *(_BYTE *)(v4 + 80) == 0, v6 = 1, v5) )
LABEL_7:
      v6 = 0;
  }
  v7 = a1 + 72;
  *(_BYTE *)(a1 + 80) = v6;
  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v8 + 16, 0x18u);
    *(_BYTE *)(v8 + 200) = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v7);
  }
  return 1LL;
}
