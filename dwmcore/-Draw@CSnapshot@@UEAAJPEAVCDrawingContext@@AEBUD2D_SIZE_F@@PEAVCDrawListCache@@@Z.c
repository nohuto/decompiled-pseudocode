/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180253C38
 * Callers:
 *     ?Draw@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801181D0 (-Draw@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSnapshot::Draw(
        CSnapshot *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rcx

  v5 = 0;
  v6 = *((_QWORD *)this - 6);
  if ( v6 && !*((_BYTE *)this - 31) )
  {
    *((_BYTE *)this - 31) = 1;
    v8 = (*(__int64 (__fastcall **)(char *, __int64, const struct D2D_SIZE_F *, struct CDrawListCache *))(*((_QWORD *)a2 + 2) + 48LL))(
           (char *)a2 + 16,
           v6,
           a3,
           a4);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x50u, 0LL);
    *((_BYTE *)this - 31) = 0;
  }
  return v5;
}
