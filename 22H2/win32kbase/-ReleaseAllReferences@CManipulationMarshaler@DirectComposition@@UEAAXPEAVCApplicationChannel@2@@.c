/*
 * XREFs of ?ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E4360
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0060A08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0060F10 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CManipulationMarshaler::ReleaseAllReferences(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase **v3; // rbx
  unsigned int i; // edi
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v3 = (struct DirectComposition::CWeakReferenceBase **)((char *)this + 64);
  for ( i = 0; i < 5; ++i )
  {
    if ( *v3 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v3);
      *v3 = 0LL;
    }
    ++v3;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 35);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 35) = 0LL;
  }
}
