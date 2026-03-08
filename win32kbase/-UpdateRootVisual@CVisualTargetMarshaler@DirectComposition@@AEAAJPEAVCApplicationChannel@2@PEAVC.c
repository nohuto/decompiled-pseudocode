/*
 * XREFs of ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C00B37FC
 * Callers:
 *     ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B36F0 (-ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00B3780 (-SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        bool *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rcx

  v4 = 0;
  if ( a3 )
  {
    if ( *((_QWORD *)a3 + 24) )
      return (unsigned int)-1073741811;
    DirectComposition::CResourceMarshaler::AddRef(a3);
    *((_QWORD *)a3 + 24) = this;
  }
  v9 = *((_QWORD *)this + 8);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, struct DirectComposition::CApplicationChannel *))(*(_QWORD *)v9 + 312LL))(v9, a2);
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      *((struct DirectComposition::CResourceMarshaler **)this + 8));
  }
  *((_DWORD *)this + 4) |= 0x20u;
  *((_QWORD *)this + 8) = a3;
  *a4 = 1;
  return v4;
}
