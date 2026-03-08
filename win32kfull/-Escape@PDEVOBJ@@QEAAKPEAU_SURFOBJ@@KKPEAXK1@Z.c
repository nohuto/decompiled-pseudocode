/*
 * XREFs of ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02E2F44
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iOpenGLExtEscapeHelper@@YAXPEAX@Z @ 0x1C0279D40 (-iOpenGLExtEscapeHelper@@YAXPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279D88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02B2080 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::Escape(
        PDEVOBJ *this,
        struct _SURFOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7)
{
  return (*(__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, void *, unsigned int, void *))(*(_QWORD *)this + 2856LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
