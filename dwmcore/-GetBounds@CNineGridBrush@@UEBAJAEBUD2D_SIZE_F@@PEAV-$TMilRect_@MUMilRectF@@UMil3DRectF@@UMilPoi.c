/*
 * XREFs of ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EEB30
 * Callers:
 *     ?GetBounds@CNineGridBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119FB0 (-GetBounds@CNineGridBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD); // rcx
  int v6; // eax
  __int64 v7; // rcx

  v3 = *(_QWORD *)(a1 - 96);
  v4 = 0;
  if ( v3 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD))(v3 + 64 + *(int *)(*(_QWORD *)(v3 + 64) + 8LL));
    v6 = (**v5)(v5);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x69u, 0LL);
  }
  else
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  return v4;
}
