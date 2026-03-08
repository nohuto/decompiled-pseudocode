/*
 * XREFs of FindBaseSimpleInputBrush @ 0x18002EB28
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall FindBaseSimpleInputBrush(_QWORD *a1)
{
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 2LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 1LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 8LL))(a1, 0LL) )
    {
      return a1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 5LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 6LL) )
    {
      break;
    }
    a1 = (_QWORD *)a1[9];
  }
  return 0LL;
}
