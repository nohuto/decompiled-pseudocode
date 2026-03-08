/*
 * XREFs of ?GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022C29C
 * Callers:
 *     ?GetBounds@CInk@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801182B0 (-GetBounds@CInk@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18022C0AC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18022C4F0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  struct ID2D1Ink *v4; // rdi
  struct ID2D1InkStyle *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int ID2D1InkAndInkStyle; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct ID2D1Ink *v14; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1InkStyle *v15; // [rsp+38h] [rbp-28h] BYREF
  CD2DInk *v16; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = CDeviceResourceTable<CD2DInk,CInk>::FindOrCreateResourceNoRef((__int64 *)(a1 - 168), 0LL, &v16);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x15u, 0LL);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v16, &v14, &v15);
    v8 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ID2D1InkAndInkStyle, 0x17u, 0LL);
      v4 = v14;
      v5 = v15;
    }
    else
    {
      v4 = v14;
      v5 = v15;
      v11 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)v14 + 104LL))(
              v14,
              v15,
              0LL,
              &v17);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x19u, 0LL);
      else
        *a3 = v17;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}
