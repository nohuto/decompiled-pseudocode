/*
 * XREFs of ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x1C0064ED0
 * Callers:
 *     ?SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0061D00 (-SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 *     ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00A2630 (-SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00BC860 (-SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForCycle@CBrushMarshaler@DirectComposition@@AEAA_NPEAV12@@Z @ 0x1C0068BEC (-CheckForCycle@CBrushMarshaler@DirectComposition@@AEAA_NPEAV12@@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(
        DirectComposition::CBrushMarshaler *a1,
        DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  struct DirectComposition::CBrushMarshaler *v11; // rdi

  v7 = 0;
  if ( a4 && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(a4[9], 17LL) )
    return (unsigned int)-1073741811;
  if ( a4 == (unsigned int *)*a3 )
    return v7;
  if ( a4 )
  {
    v11 = (struct DirectComposition::CBrushMarshaler *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a4 + 88LL))(a4);
    if ( !v11 )
      return (unsigned int)-1073741811;
  }
  else
  {
    v11 = 0LL;
  }
  if ( DirectComposition::CBrushMarshaler::CheckForCycle(a1, v11) )
    return (unsigned int)-1073741811;
  if ( v11 )
  {
    if ( (*((_QWORD *)v11 + 3))++ == -1LL )
      KeBugCheck(0xC01E0103);
  }
  DirectComposition::CApplicationChannel::ReleaseResource(a2, *a3);
  *a3 = v11;
  *((_DWORD *)a1 + 4) |= a6;
  *a7 = 1;
  return v7;
}
