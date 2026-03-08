/*
 * XREFs of ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800219A0
 * Callers:
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180021404 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021D18 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAX_NAEBVCMILMatrix@@PEBV2@@Z @ 0x180021DC0 (-EnterClippingScope@CScopedClipStack@@QEAAX_NAEBVCMILMatrix@@PEBV2@@Z.c)
 *     ?reserve_region@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCpuClipStackState@CScopedClipStack@@_K0@Z @ 0x1800220F4 (-reserve_region@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStac.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800E1B70 (-GetTopByReference@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CScopedClipStack::DuplicateScopeToClipStack(
        CScopedClipStack *this,
        struct CScopedClipStack *a2,
        const struct CMILMatrix *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  const struct MilRectF *v9; // r15
  __int64 v10; // rdi
  void (__fastcall ***v11)(_QWORD); // rcx
  __int64 v12; // rsi
  __int64 i; // r12
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rsi
  const struct MilRectF *TopByReference; // rax
  __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  char v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+80h] [rbp+8h]

  CScopedClipStack::EnterClippingScope(
    a2,
    *(_BYTE *)(*((_QWORD *)this + 1) - 8LL),
    a3,
    (const struct CMILMatrix *)(*((_QWORD *)this + 1) - 84LL));
  v8 = *((_QWORD *)this + 1);
  v9 = 0LL;
  v10 = *((_QWORD *)a2 + 1);
  v11 = *(void (__fastcall ****)(_QWORD))(v8 - 16);
  v12 = *(_QWORD *)(v10 - 16);
  *(_QWORD *)(v10 - 16) = v11;
  if ( v11 )
    (**v11)(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *(_QWORD *)(v10 - 176) = *(_QWORD *)(v8 - 176);
  *(_QWORD *)(v10 - 160) = *(_QWORD *)(v8 - 160);
  for ( i = -858993459 * (unsigned int)((__int64)(*((_QWORD *)this + 234) - *((_QWORD *)this + 233)) >> 3)
          - *(_DWORD *)(v8 - 176); ; i = (unsigned int)(i + 1) )
  {
    v14 = *((_QWORD *)this + 233);
    v21 = v14;
    if ( (unsigned int)i >= 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 234) - v14) >> 3) )
      break;
    v19 = 0LL;
    v15 = *(_QWORD *)(v14 + 40 * i);
    v20 = 0;
    CShapePtr::Release((CShapePtr *)&v19);
    v16 = detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::reserve_region(
            (char *)a2 + 1864,
            0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a2 + 234) - *((_QWORD *)a2 + 233)) >> 3));
    *(_OWORD *)v16 = 0LL;
    *(_OWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    v17 = *((_QWORD *)a2 + 234);
    CShapePtr::Release((CShapePtr *)(v17 - 40));
    *(_QWORD *)(v17 - 40) = v15;
    *(_BYTE *)(v17 - 32) = 0;
    v19 = 0LL;
    *(_QWORD *)(v17 - 24) = *(_QWORD *)(v21 + 40 * i + 16);
    *(_QWORD *)(v17 - 16) = *(_QWORD *)(v21 + 40 * i + 24);
    *(_DWORD *)(v17 - 8) = *(_DWORD *)(v21 + 40 * i + 32);
    *(_BYTE *)(v17 - 4) = *(_BYTE *)(v21 + 40 * i + 36);
    v20 = 0;
    CShapePtr::Release((CShapePtr *)&v19);
  }
  if ( *(_QWORD *)(v8 - 168) )
  {
    *(_QWORD *)(v10 - 168) = 1LL;
    if ( *((_DWORD *)this + 580) )
      TopByReference = (const struct MilRectF *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
                                                  (char *)this + 2320,
                                                  v5,
                                                  v6,
                                                  v7);
    else
      TopByReference = 0LL;
    CD2DClipStack::PushExact(
      (struct CScopedClipStack *)((char *)a2 + 2320),
      TopByReference,
      D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
  }
  if ( *(_QWORD *)(v8 - 184) )
  {
    *(_QWORD *)(v10 - 184) = 1LL;
    if ( *((_DWORD *)this + 572) )
      v9 = (const struct MilRectF *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
                                      (char *)this + 2288,
                                      v5,
                                      v6,
                                      v7);
    CD2DClipStack::PushExact((struct CScopedClipStack *)((char *)a2 + 2288), v9, D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
  }
}
