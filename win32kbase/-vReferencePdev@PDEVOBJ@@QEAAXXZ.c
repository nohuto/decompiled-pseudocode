void __fastcall PDEVOBJ::vReferencePdev(PDEVOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8LL);
  if ( v4 )
  {
    PsEnterPriorityRegion(v3, v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  v5 = *(_QWORD *)this;
  ++*(_DWORD *)(v5 + 8);
  v6 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 3520);
  v7 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v3) + 24);
  if ( v6 )
  {
    v7 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v7 + 1007);
    if ( v7 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v7, v6, 1);
  }
  if ( v4 )
  {
    v8 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    if ( *(_DWORD *)(v8 + 180) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v8, (unsigned int)&LockRelease, v9, (_DWORD)v4, (__int64)L"hsem");
    }
    ExReleaseResourceAndLeaveCriticalRegion(v4);
    PsLeavePriorityRegion(v11, v10);
  }
}
