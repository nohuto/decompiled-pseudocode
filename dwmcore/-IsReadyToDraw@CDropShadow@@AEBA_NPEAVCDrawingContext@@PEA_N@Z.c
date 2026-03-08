/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1802270E0
 * Callers:
 *     ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x18012E5C0 (-IsEmptyDrawing@CDropShadow@@UEBA_NXZ.c)
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180226258 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18004AFA4 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(CDropShadow *this, struct CDrawingContext *a2, bool *a3)
{
  char v3; // di
  char v6; // bl
  CVisual *v8; // rax
  __int64 v9; // rcx
  struct CBrush *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0;
  v6 = 1;
  if ( COERCE_FLOAT(*((_DWORD *)this + 23) & _xmm) >= 0.0000011920929 )
  {
    if ( *((_DWORD *)this + 31) == 1 )
    {
      if ( a2 )
      {
        v10 = 0LL;
        v8 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
        CVisual::GetContentAsBrushNoRef(v8, &v10);
        if ( !v10
          || !(*(unsigned __int8 (__fastcall **)(struct CBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v10 + 288LL))(
                v10,
                a2,
                a3) )
        {
          return 0;
        }
      }
      return v6;
    }
    else
    {
      v9 = *((_QWORD *)this + 22);
      if ( !v9 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 288LL))(v9) )
        return 1;
      return v3;
    }
  }
  else
  {
    *a3 = 1;
    return 0;
  }
}
