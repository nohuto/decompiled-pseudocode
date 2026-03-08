/*
 * XREFs of ?SetReferenceProperty@CVisualTargetMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00B3780
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C00B37FC (-UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::SetReferenceProperty(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CVisualMarshaler *v8; // rax

  v5 = 0;
  if ( a3 != 52 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    v8 = (struct DirectComposition::CVisualMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 168LL))(a4);
    if ( v8 )
      goto LABEL_4;
    return (unsigned int)-1073741811;
  }
  v8 = 0LL;
LABEL_4:
  if ( v8 != *((struct DirectComposition::CVisualMarshaler **)this + 8) )
    return (unsigned int)DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, v8, a5);
  return v5;
}
