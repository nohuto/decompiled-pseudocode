/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000C784
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0009F20 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C000C6D8 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C000C9E4 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0012B1C (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  bool v1; // zf
  unsigned int v3; // edx
  DirectComposition::CEvent *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  void *v7; // rdx
  void *v8; // rdx
  struct _ERESOURCE *v9; // rcx
  DirectComposition::CEvent *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  _QWORD **v15; // rbx
  _QWORD *v16; // rdx
  _QWORD **v17; // rsi
  _QWORD *v18; // rdx
  _QWORD **v19; // rsi
  _QWORD *v20; // rdx
  _QWORD **v21; // rbx
  _QWORD *v22; // rdx
  void *v23; // rdx
  void *v24; // rdx
  void *v25; // rdx
  _QWORD *v26; // rax
  NSInstrumentation::CLeakTrackingAllocator *v27; // rcx
  _QWORD *v28; // rax
  NSInstrumentation::CLeakTrackingAllocator *v29; // rcx
  _QWORD *v30; // rax
  NSInstrumentation::CLeakTrackingAllocator *v31; // rcx
  _QWORD *v32; // rax
  NSInstrumentation::CLeakTrackingAllocator *v33; // rcx

  v1 = *((_QWORD *)this + 27) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 27);
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4, v3);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v5);
      *((_QWORD *)this + 23) = v6;
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = (void *)*((_QWORD *)this + 22);
  if ( v7 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
    *((_QWORD *)this + 22) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 203);
  v9 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    v8 = (void *)*((_QWORD *)this + 46);
    if ( v8 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v8);
  }
  v10 = (DirectComposition::CEvent *)*((_QWORD *)this + 45);
  if ( v10 )
    DirectComposition::CEvent::`scalar deleting destructor'(v10, (unsigned int)v8);
  if ( *((_QWORD *)this + 219) )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 213));
    *((_QWORD *)this + 219) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 218);
  if ( v11 )
  {
    MmUnmapViewInSessionSpace(v11);
    *((_QWORD *)this + 218) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 216);
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    *((_QWORD *)this + 216) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 213);
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    *((_QWORD *)this + 213) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 205);
  if ( v14 )
    ObfDereferenceObject(v14);
  v15 = (_QWORD **)((char *)this + 1552);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == v15 )
      break;
    if ( (_QWORD **)v16[1] != v15 || (v26 = (_QWORD *)*v16, *(_QWORD **)(*v16 + 8LL) != v16) )
LABEL_50:
      __fastfail(3u);
    v27 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *v15 = v26;
    v26[1] = v15;
    NSInstrumentation::CLeakTrackingAllocator::Free(v27, v16);
  }
  v17 = (_QWORD **)((char *)this + 1568);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    if ( (_QWORD **)v18[1] != v17 )
      goto LABEL_50;
    v28 = (_QWORD *)*v18;
    if ( *(_QWORD **)(*v18 + 8LL) != v18 )
      goto LABEL_50;
    v29 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *v17 = v28;
    v28[1] = v17;
    NSInstrumentation::CLeakTrackingAllocator::Free(v29, v18);
  }
  v19 = (_QWORD **)((char *)this + 1584);
  while ( 1 )
  {
    v20 = *v19;
    if ( *v19 == v19 )
      break;
    if ( (_QWORD **)v20[1] != v19 )
      goto LABEL_50;
    v30 = (_QWORD *)*v20;
    if ( *(_QWORD **)(*v20 + 8LL) != v20 )
      goto LABEL_50;
    v31 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *v19 = v30;
    v30[1] = v19;
    NSInstrumentation::CLeakTrackingAllocator::Free(v31, v20);
  }
  v21 = (_QWORD **)((char *)this + 1600);
  while ( 1 )
  {
    v22 = *v21;
    if ( *v21 == v21 )
      break;
    if ( (_QWORD **)v22[1] != v21 )
      goto LABEL_50;
    v32 = (_QWORD *)*v22;
    if ( *(_QWORD **)(*v22 + 8LL) != v22 )
      goto LABEL_50;
    v33 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *v21 = v32;
    v32[1] = v21;
    NSInstrumentation::CLeakTrackingAllocator::Free(v33, v22);
  }
  v23 = (void *)*((_QWORD *)this + 59);
  if ( v23 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v23);
  v24 = (void *)*((_QWORD *)this + 14);
  if ( v24 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v24);
  v25 = (void *)*((_QWORD *)this + 7);
  if ( v25 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v25);
  DirectComposition::CChannel::~CChannel(this);
}
