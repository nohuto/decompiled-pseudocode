/*
 * XREFs of ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004D740
 * Callers:
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18004B010 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CC2C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18004E764 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBackdropVisualImage::RequiresRendering(CBackdropVisualImage *this, const struct RenderTargetInfo *a2)
{
  __int64 v3; // rcx
  char v4; // bl
  __int64 *v5; // rdi
  __int64 *v6; // rbp
  void (__fastcall ***v7)(_QWORD, _DWORD *); // rax
  int v8; // eax
  __int64 v9; // rdi
  int (__fastcall ***v10)(_QWORD); // rcx
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  float v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+34h] [rbp-14h]

  v4 = 0;
  if ( !CBackdropVisualImage::IsValid(this) )
    return 0;
  v5 = *(__int64 **)(v3 + 192);
  v6 = *(__int64 **)(v3 + 200);
  while ( 1 )
  {
    if ( v5 == v6 )
      return 1;
    v7 = (void (__fastcall ***)(_QWORD, _DWORD *))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v5 + 8) + 64LL))(*(_QWORD *)(*v5 + 8));
    (**v7)(v7, v12);
    if ( v12[0] == *(_DWORD *)a2 && v12[1] == *((_DWORD *)a2 + 1) )
    {
      v8 = *((_DWORD *)a2 + 2);
      if ( (v13 == DisplayId::None || v13 == v8 || v8 == DisplayId::All)
        && (v14 != 0.0) == (*((float *)a2 + 4) != 0.0)
        && v15 == *((_BYTE *)a2 + 20) )
      {
        break;
      }
    }
    ++v5;
  }
  v9 = *v5;
  if ( !v9 )
    return 1;
  v10 = (int (__fastcall ***)(_QWORD))(*(_QWORD *)(v9 + 8) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) + 8LL));
  if ( (**v10)(v10) < 0 || *(_BYTE *)(v9 + 57) )
    return 1;
  return v4;
}
