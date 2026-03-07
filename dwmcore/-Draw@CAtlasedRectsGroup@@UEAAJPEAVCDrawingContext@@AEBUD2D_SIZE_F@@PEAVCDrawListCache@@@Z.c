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
