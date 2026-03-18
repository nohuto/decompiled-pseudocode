/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0059BAC
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C005CF6C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00B0BA8 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1C00C559C (--1CChannelGroup@DirectComposition@@QEAA@XZ.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00C569C (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ??1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ @ 0x1C00C5E98 (--1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(char **this)
{
  char *v2; // rcx
  DirectComposition::CChannel *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  char *v6; // rcx

  DirectComposition::CConnection::DiscardAllCompositionFrames((DirectComposition::CConnection *)this);
  v2 = this[23];
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (DirectComposition::CChannel *)this[19];
  if ( v3 )
    DirectComposition::CChannel::Release(v3);
  v4 = (struct _ERESOURCE *)this[1];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(this[1]);
  }
  v5 = (struct _ERESOURCE *)this[31];
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    Win32FreePool(this[31]);
  }
  v6 = this[32];
  if ( v6 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
  `vector destructor iterator'(
    this + 47,
    0x1D0uLL,
    0x12CuLL,
    (void (*)(void *))DirectComposition::CConnection::CFrameStats::~CFrameStats);
  DirectComposition::CBatchSharedMemoryPoolSet::~CBatchSharedMemoryPoolSet((DirectComposition::CBatchSharedMemoryPoolSet *)(this + 24));
  DirectComposition::CChannelGroup::~CChannelGroup((DirectComposition::CChannelGroup *)(this + 2));
}
