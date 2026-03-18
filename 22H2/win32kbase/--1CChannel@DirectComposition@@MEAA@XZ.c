/*
 * XREFs of ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0022540
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0021980 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x1C020BB10 (--_GCChannel@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CChannel::~CChannel(DirectComposition::CChannel *this)
{
  bool v1; // zf
  struct _ERESOURCE *v3; // rcx
  void *v4; // rdx

  v1 = (*((_BYTE *)this + 48) & 1) == 0;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  if ( !v1 )
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 5));
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    v4 = (void *)*((_QWORD *)this + 4);
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  }
}
