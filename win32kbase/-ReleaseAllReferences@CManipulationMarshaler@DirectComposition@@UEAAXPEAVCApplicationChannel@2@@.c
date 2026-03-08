/*
 * XREFs of ?ReleaseAllReferences@CManipulationMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0251D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C005F8A4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
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
