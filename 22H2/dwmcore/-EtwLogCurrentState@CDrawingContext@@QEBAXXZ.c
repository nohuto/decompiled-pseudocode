/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1800BA594
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013674 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B7E60 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800BA484 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006BD48 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008D110 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800BA600 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x1801788D8 (McTemplateU0ppffffubr6q_EventWriteTransfer.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct CVisual *CurrentVisual; // rax
  unsigned int v5; // eax
  int v6; // edx
  int v7; // ecx
  _BYTE v8[64]; // [rsp+60h] [rbp-78h] BYREF
  int v9; // [rsp+A0h] [rbp-38h]
  __int128 v10; // [rsp+B0h] [rbp-28h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
  {
    v9 = 0;
    v2 = *((_QWORD *)this + 105);
    v3 = (unsigned int)(*((_DWORD *)this + 216) - 1);
    v10 = 0LL;
    if ( ((*(_DWORD *)(*(_QWORD *)(v2 + 8 * v3) + 128LL) + 1) & 0xFFFFFFFE) == 0
      && CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 24)) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 24));
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)CurrentVisual + 152LL))(CurrentVisual);
    }
    CDrawingContext::GetClipBoundsWorld((__int64)this);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)v8);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      v5 = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 24));
      McTemplateU0ppffffubr6q_EventWriteTransfer(v7, v6, (_DWORD)this, v5, v10, SBYTE4(v10), SBYTE8(v10), SBYTE12(v10));
    }
  }
}
