/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00AB1C4
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0056920 (NtDCompositionConfirmFrame.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00AB19C (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C005959C (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00AB2A0 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(DirectComposition::CConnection *this)
{
  __int64 v2; // rcx
  DirectComposition::CChannel *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rcx

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
    Win32FreePool(*((_QWORD *)this + 1));
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 30);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    Win32FreePool(*((_QWORD *)this + 30));
  }
  v6 = *((_QWORD *)this + 31);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (void *)*((_QWORD *)this + 26);
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 9);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    Win32FreePool(*((_QWORD *)this + 9));
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
    Win32FreePool(v9);
}
