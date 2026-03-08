/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0098BC8
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0098700 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00609AC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0099740 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0099780 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C009986C (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(union _SLIST_HEADER *this)
{
  bool v1; // zf
  unsigned int v3; // edx
  DirectComposition::CEvent *Region; // rcx
  _QWORD *v5; // rdx
  void *Alignment; // rdx
  void *v7; // rdx
  struct _ERESOURCE *v8; // rcx
  DirectComposition::CEvent *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rdx
  void *v15; // rdx
  void *v16; // rdx
  _QWORD *v17; // rbx

  v1 = this[13].Region == 0;
  this->Alignment = (ULONGLONG)&DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    Region = (DirectComposition::CEvent *)this[13].Region;
    if ( Region )
      DirectComposition::CEvent::`scalar deleting destructor'(Region, v3);
  }
  v5 = (_QWORD *)this[11].Region;
  if ( v5 )
  {
    do
    {
      v17 = (_QWORD *)*v5;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
      this[11].Region = (ULONGLONG)v17;
      v5 = v17;
    }
    while ( v17 );
  }
  Alignment = (void *)this[11].Alignment;
  if ( Alignment )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Alignment);
    this[11].Alignment = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPoolSet *)&this[162]);
  v7 = (void *)this[167].Region;
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  v8 = (struct _ERESOURCE *)this[23].Alignment;
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    v7 = (void *)this[23].Alignment;
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  }
  v9 = (DirectComposition::CEvent *)this[22].Region;
  if ( v9 )
    DirectComposition::CEvent::`scalar deleting destructor'(v9, (unsigned int)v7);
  if ( this[170].Region )
  {
    MmUnmapViewOfSection(this[167].Alignment);
    this[170].Region = 0LL;
  }
  v10 = (void *)this[170].Alignment;
  if ( v10 )
  {
    MmUnmapViewInSessionSpace(v10);
    this[170].Alignment = 0LL;
  }
  v11 = (void *)this[169].Alignment;
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    this[169].Alignment = 0LL;
  }
  v12 = (void *)this[167].Alignment;
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    this[167].Alignment = 0LL;
  }
  v13 = (void *)this[163].Alignment;
  if ( v13 )
    ObfDereferenceObject(v13);
  v14 = (void *)this[30].Alignment;
  if ( v14 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
  v15 = (void *)this[7].Alignment;
  if ( v15 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
  v16 = (void *)this[3].Region;
  if ( v16 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
  DirectComposition::CChannel::~CChannel((DirectComposition::CChannel *)this);
}
