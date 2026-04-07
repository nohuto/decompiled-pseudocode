/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180027718
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x18000D790 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180027A68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014F08 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180014F58 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016F14 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FEE0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002496C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  CBaseObject *v1; // rbp
  struct CBaseGeometryProxy *v2; // r14
  CRenderDataVisual *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct CDrawGeometryInstruction *v18; // [rsp+50h] [rbp+8h] BYREF
  struct CBaseGeometryProxy *v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v18 = 0LL;
  v4 = (CRenderDataVisual *)*((_QWORD *)this + 7);
  v5 = 0;
  v19 = 0LL;
  if ( !v4 )
    return v5;
  CRenderDataVisual::ClearInstructions(v4);
  if ( !*((_QWORD *)this + 48) )
  {
    v6 = 0LL;
    v7 = *((_QWORD *)this + 8);
    if ( *((_DWORD *)this + 18) != 1 )
    {
      if ( *((_DWORD *)this + 18) == 2 )
      {
        v8 = *(_QWORD *)(v7 + 416);
        if ( v8 )
        {
          v6 = *(_QWORD *)(v8 + 32);
LABEL_7:
          v9 = *(_QWORD *)(v6 + 384);
          if ( !v9 )
            return v5;
          v10 = *(_QWORD *)(v9 + 256);
          v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  24LL);
          v12 = v11;
          if ( v11 )
          {
            *(_DWORD *)(v11 + 8) = 1;
            *(_QWORD *)v11 = &CDrawVisualTreeInstruction::`vftable';
          }
          else
          {
            v12 = 0LL;
          }
          if ( !v12 )
          {
            v5 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2Cu);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xFFu);
            return v5;
          }
          *(_QWORD *)(v12 + 16) = v10;
          if ( v10 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
            v1 = v18;
            v2 = v19;
          }
          v13 = CRenderDataVisual::AddInstruction(
                  *((CRenderDataVisual **)this + 7),
                  (struct CRenderDataInstruction *)v12);
          v5 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x102u);
          CBaseObject::Release((CBaseObject *)v12);
          goto LABEL_16;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 18) != 3 )
          goto LABEL_7;
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 80LL);
          goto LABEL_7;
        }
      }
    }
    v6 = v7;
    goto LABEL_7;
  }
  v15 = ResourceHelper::CreateRectangleGeometry(
          *((_DWORD *)this + 98),
          *((_DWORD *)this + 99),
          *((_DWORD *)this + 100),
          *((_DWORD *)this + 101),
          &v19);
  v5 = v15;
  if ( v15 >= 0 )
  {
    v2 = v19;
    v16 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 48), v19, &v18);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xF3u);
      v1 = v18;
    }
    else
    {
      v1 = v18;
      v17 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v18);
      v5 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xF5u);
    }
LABEL_16:
    if ( v1 )
      CBaseObject::Release(v1);
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xEFu);
  v2 = v19;
LABEL_18:
  if ( v2 )
    CBaseObject::Release(v2);
  return v5;
}
