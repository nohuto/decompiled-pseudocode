/*
 * XREFs of ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18002D6BC
 * Callers:
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18002AE5C (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18002ECBC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::HasBlurredWallpaperBackdropInput(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rax
  struct CBrush *NamedInput; // rax

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    for ( i = 0LL; ; i += 16LL )
    {
      v8 = *((_QWORD *)this + 4);
      if ( !*(_QWORD *)(i + v8 + 8) && !*(_BYTE *)(i + v8 + 4) )
      {
        NamedInput = CBrushRenderingGraph::GetNamedInput(a2, *(_DWORD *)(i + v8));
        if ( NamedInput )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 56LL))(
                 NamedInput,
                 15LL) )
          {
            break;
          }
        }
      }
      if ( ++v6 >= (unsigned int)v4 )
        return v2;
    }
    return 1;
  }
  return v2;
}
