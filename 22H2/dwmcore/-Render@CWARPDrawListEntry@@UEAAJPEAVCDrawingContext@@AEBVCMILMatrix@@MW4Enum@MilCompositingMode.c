/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801A2200
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C8D60 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??$emplace_back@W4Enum@BlendMode@@MVCMILMatrix@@@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXW4Enum@BlendMode@@MVCMILMatrix@@@Z @ 0x1801A1440 (--$emplace_back@W4Enum@BlendMode@@MVCMILMatrix@@@-$vector_facade@UFrameData@CDrawListEntry@@V-$b.c)
 *     ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801A23D0 (-UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?pop_back@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801A268C (-pop_back@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$.c)
 *     ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x1801A6A24 (-FromMilCompositingMode@BlendMode@@YA-AW4Enum@1@W42MilCompositingMode@@@Z.c)
 *     ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18023AEDC (-AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVCli.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int a5)
{
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  __int64 v11; // r15
  int updated; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int appended; // eax
  __int64 v18; // rcx
  _OWORD v20[4]; // [rsp+30h] [rbp-68h] BYREF
  int v21; // [rsp+70h] [rbp-28h]

  v6 = *(_OWORD *)(a3 + 16);
  v20[0] = *(_OWORD *)a3;
  v8 = *(_OWORD *)(a3 + 32);
  v20[1] = v6;
  v9 = *(_OWORD *)(a3 + 48);
  v20[2] = v8;
  v20[3] = v9;
  v21 = *(_DWORD *)(a3 + 64);
  v10 = BlendMode::FromMilCompositingMode(a5);
  detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::emplace_back<enum BlendMode::Enum,float,CMILMatrix>(
    (_QWORD *)(a1 + 64),
    v10,
    a4,
    (__int64)v20);
  v11 = *(_QWORD *)(a2 + 40);
  updated = CWARPDrawListEntry::UpdateBitmaps((CWARPDrawListEntry *)(a1 - 16), (struct CDrawingContext *)a2);
  v14 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x98u, 0LL);
    goto LABEL_9;
  }
  v15 = *(_DWORD *)(a1 + 168);
  if ( (v15 & 4) != 0 )
  {
    *(_BYTE *)(a2 + 5951) = 1;
    v15 = *(_DWORD *)(a1 + 168);
  }
  if ( (v15 & 0x200) != 0 )
  {
    v16 = D2DInterpolationModeFromMilInterpolationMode(*(_DWORD *)(a2 + 272));
    *(_DWORD *)(a1 + 320) = v16;
    *(_DWORD *)(a1 + 424) = v16;
  }
  appended = CD2DContext::AppendDrawListEntry(
               (CD2DContext *)(v11 + 16),
               (struct CDrawListEntry *)(a1 & -(__int64)(a1 != 16)),
               0LL,
               0LL);
  v14 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, appended, 0xAAu, 0LL);
LABEL_9:
    detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::pop_back(a1 + 64);
  }
  return v14;
}
