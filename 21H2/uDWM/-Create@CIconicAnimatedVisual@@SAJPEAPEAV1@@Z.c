/*
 * XREFs of ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800AA224
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800AB260 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B93E0 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::Create(struct CIconicAnimatedVisual **a1)
{
  int v2; // edi
  CIconicAnimatedVisual *v3; // rax
  struct CIconicAnimatedVisual *v4; // rbx
  int v5; // eax

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x19u);
    return (unsigned int)v2;
  }
  v3 = (CIconicAnimatedVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  392LL);
  if ( v3 )
    v4 = CIconicAnimatedVisual::CIconicAnimatedVisual(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CIconicAnimatedVisual *))(*(_QWORD *)v4 + 8LL))(v4);
    v2 = v5;
    if ( v5 >= 0 )
    {
      *a1 = v4;
      v4 = 0LL;
      v2 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x19u);
    }
    if ( v2 >= 0 )
      goto LABEL_13;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x19u);
  }
  *a1 = 0LL;
LABEL_13:
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v2;
}
