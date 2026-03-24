/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00594F8
 * Callers:
 *     NtDCompositionDestroyChannel @ 0x1C00594E0 (NtDCompositionDestroyChannel.c)
 *     NtDCompositionCreateChannel @ 0x1C005AB10 (NtDCompositionCreateChannel.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00AFC60 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C005959C (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?RemoveObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAPEAVCChannel@2@I@Z @ 0x1C00595CC (-RemoveObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C005AD7C (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle()
{
  DirectComposition::CChannel *v0; // rbx
  struct DirectComposition::CProcessData *v1; // rax
  struct DirectComposition::CProcessData *v2; // rsi
  struct _ERESOURCE *v3; // rbx
  unsigned int v4; // edi

  v0 = 0LL;
  v1 = DirectComposition::CProcessData::Current();
  v2 = v1;
  if ( v1 )
  {
    v3 = (struct _ERESOURCE *)*((_QWORD *)v1 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v3, 1u);
    v0 = (DirectComposition::CChannel *)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(*(PRTL_GENERIC_TABLE *)v2);
    v4 = 0;
    if ( !v0 )
      v4 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v2 + 1));
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741823;
  }
  if ( v0 )
    DirectComposition::CChannel::Release(v0);
  return v4;
}
