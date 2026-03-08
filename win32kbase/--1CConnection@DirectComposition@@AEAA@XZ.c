/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C009846C
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0099D20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0096938 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0098628 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1C0098658 (--1CChannelGroup@DirectComposition@@QEAA@XZ.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00988FC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(DirectComposition::CConnection *this)
{
  __int64 v2; // rcx
  DirectComposition::CChannel *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rdx

  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
  if ( v3 )
    DirectComposition::CChannel::Release(v3);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    v7 = (void *)*((_QWORD *)this + 1);
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  }
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  `vector destructor iterator'(
    (char *)this + 392,
    464LL,
    300LL,
    (void (__fastcall *)(char *))DirectComposition::CConnection::CFrameStats::~CFrameStats);
  v6 = (void *)*((_QWORD *)this + 26);
  if ( v6 )
    ObfDereferenceObject(v6);
  DirectComposition::CChannelGroup::~CChannelGroup((DirectComposition::CConnection *)((char *)this + 16));
}
