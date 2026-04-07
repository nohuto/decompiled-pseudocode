/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800460E8
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028EA0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18004620C (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     memset_0 @ 0x180058192 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct CAccentAcrylicBlurBehind **a1)
{
  CAccentAcrylicBlurBehind *v2; // rax
  CAccentAcrylicBlurBehind *v3; // rbx
  struct CAccentAcrylicBlurBehind *v4; // rbx
  int v5; // eax
  int v6; // edi

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x6Du);
    return (unsigned int)v6;
  }
  v2 = (CAccentAcrylicBlurBehind *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                                     WPF::g_pProcessHeap,
                                     360LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x168uLL);
    v4 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CAccentAcrylicBlurBehind *))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x6Du);
    }
    else
    {
      *a1 = v4;
      v4 = 0LL;
      v6 = 0;
    }
    if ( v6 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v6;
}
