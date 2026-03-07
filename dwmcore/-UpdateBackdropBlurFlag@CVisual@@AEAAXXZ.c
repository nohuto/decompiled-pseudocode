void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual *this)
{
  const struct CBackdropBrush *v2; // r13
  unsigned __int8 v3; // si
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // bp
  CBrush *v6; // rbx
  __int64 v7; // rdx
  struct CBrushRenderingGraph *BrushGraph; // rax
  _BYTE *v9; // r14
  _BYTE *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  CBrush *v15; // [rsp+60h] [rbp+8h] BYREF
  char v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( CVisual::GetContentAsBrushNoRef(this, &v15) )
  {
    v6 = v15;
    if ( (*(unsigned __int8 (__fastcall **)(CBrush *, __int64))(*(_QWORD *)v15 + 56LL))(v15, 203LL) )
    {
      v4 = 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(CBrush *, __int64))(*(_QWORD *)v6 + 56LL))(v6, 15LL) )
    {
      v3 = 1;
    }
    else
    {
      BrushGraph = CBrush::GetBrushGraph(v6, v7);
      if ( BrushGraph )
      {
        v5 = *((_BYTE *)BrushGraph + 196);
        v2 = (const struct CBackdropBrush *)*((_QWORD *)BrushGraph + 26);
        v4 = *((_BYTE *)BrushGraph + 198);
        v3 = *((_BYTE *)BrushGraph + 197);
      }
    }
  }
  v9 = (char *)this + 102;
  if ( dword_1803E0760 )
  {
    if ( v5 != ((*v9 & 4) != 0) )
    {
      v11 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v15, "m_fIsBackdropBlur=%d", v5);
      v12 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v16, "Visual-IsBackdropBlurFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v12, this, v11);
    }
    v10 = (char *)this + 272;
    if ( v3 != ((*((_BYTE *)this + 272) & 2) != 0) )
    {
      v13 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v15, "m_fHasBlurredWallpaperBackdropInput=%d", v3);
      v14 = DwmDbg::DbgString::DbgString(
              (DwmDbg::DbgString *)&v16,
              "Visual-HasBlurredWallpaperBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v14, this, v13);
    }
  }
  else
  {
    v10 = (char *)this + 272;
  }
  *v9 &= ~4u;
  *v10 &= ~2u;
  *v9 |= 4 * (v5 & 1);
  *v10 |= 2 * (v3 & 1);
  CVisual::UpdateHasBackdropInputFlag((CVisual **)this, v2);
  CVisual::UpdateHasWindowBackdropInputFlag((CVisual **)this, v4);
}
