/*
 * XREFs of ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800E1588
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801180B0 (-Draw@CAtlasedRectsGroup@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800E1620 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CAtlasedRectsGroup::Draw(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // edi
  char *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax

  v8 = 0;
  if ( !CAtlasedRectsGroup::IsEmptyDrawing((CAtlasedRectsGroup *)((char *)this - 152)) )
  {
    v9 = (char *)a2 + 24;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        7LL,
        v13);
    }
    v10 = CContent::Draw((CAtlasedRectsGroup *)((char *)this - 56), a2, a3, a4);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD6u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 24LL))((char *)a2 + 24);
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        7LL,
        v14);
    }
  }
  return v8;
}
