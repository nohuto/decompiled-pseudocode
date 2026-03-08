/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800B5D70
 * Callers:
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18003E4B0 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800B5E94 (--1CEffectBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 72);
  }
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 80) = 0LL;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 104);
  }
  v4 = *((_DWORD *)this + 36);
  v5 = (__int64 *)((char *)this + 120);
  if ( v4 )
  {
    v6 = 0LL;
    v7 = v4;
    do
    {
      v8 = *v5;
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v6 + *v5));
      *(_QWORD *)(v6 + v8) = 0LL;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 8LL);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((char *)this + 112);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
}
