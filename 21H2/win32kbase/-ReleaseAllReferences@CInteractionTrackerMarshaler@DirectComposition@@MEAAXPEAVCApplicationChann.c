/*
 * XREFs of ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F0580
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C005FA08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C005FF10 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C00CE58C (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F067C (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::ReleaseAllReferences(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase **v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rcx
  struct DirectComposition::CWeakReferenceBase *v9; // rdx
  struct DirectComposition::CWeakReferenceBase *v10; // rdx
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v11; // rcx

  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  v4 = (struct DirectComposition::CWeakReferenceBase **)((char *)this + 328);
  v5 = 3LL;
  do
  {
    if ( *v4 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, *v4);
      *v4 = 0LL;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = (__int64 *)((char *)this + 264);
  v7 = 4LL;
  do
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)*(v6 - 4));
    v8 = *v6;
    *(v6 - 4) = 0LL;
    if ( v8 )
    {
      Win32FreePool(v8);
      *v6 = 0LL;
    }
    v6[4] = 0LL;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 27);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v9);
    *((_QWORD *)this + 27) = 0LL;
  }
  v10 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 28);
  if ( v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v10);
    *((_QWORD *)this + 28) = 0LL;
  }
  v11 = (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)*((_QWORD *)this + 56);
  if ( v11 )
  {
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveTrackerBindings(v11, a2, *((_DWORD *)this + 6));
    *((_QWORD *)this + 56) = 0LL;
  }
}
