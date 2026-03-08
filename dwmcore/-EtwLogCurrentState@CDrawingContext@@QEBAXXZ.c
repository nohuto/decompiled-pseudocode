/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x18000D500
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CAAC (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CC70 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A380 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090D28 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x18012AF08 (McTemplateU0ppffffubr6q_EventWriteTransfer.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  _BYTE v8[64]; // [rsp+60h] [rbp-78h] BYREF
  int v9; // [rsp+A0h] [rbp-38h]
  __int128 v10; // [rsp+B0h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    v9 = 0;
    v2 = *((_QWORD *)this + 100);
    v3 = (unsigned int)(*((_DWORD *)this + 206) - 1);
    v10 = 0LL;
    if ( ((*(_DWORD *)(*(_QWORD *)(v2 + 8 * v3) + 128LL) + 1) & 0xFFFFFFFE) == 0
      && (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24) )
    {
      v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4);
    }
    CDrawingContext::GetClipBoundsWorld(this, &v10);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 400), (struct CMILMatrix *)v8);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
      McTemplateU0ppffffubr6q_EventWriteTransfer(v7, v6, (_DWORD)this, v5, v10, SBYTE4(v10), SBYTE8(v10), SBYTE12(v10));
    }
  }
}
