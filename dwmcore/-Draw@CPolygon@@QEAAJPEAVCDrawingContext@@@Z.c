/*
 * XREFs of ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x180210270
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D1120 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 31);
  v3 = 0;
  if ( v2 )
  {
    v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64;
    v6 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v5 + 16LL))(
           v5,
           a2,
           *((_QWORD *)this + 27) + 140LL,
           0LL);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1FCu, 0LL);
  }
  return v3;
}
