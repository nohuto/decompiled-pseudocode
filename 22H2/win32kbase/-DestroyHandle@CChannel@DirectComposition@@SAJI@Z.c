/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00215A0
 * Callers:
 *     NtDCompositionDestroyChannel @ 0x1C0021370 (NtDCompositionDestroyChannel.c)
 *     NtDCompositionCreateChannel @ 0x1C0022ED0 (NtDCompositionCreateChannel.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00B9F60 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0021510 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?RemoveObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAPEAVCChannel@2@I@Z @ 0x1C0021540 (-RemoveObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0023138 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle(int a1)
{
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rdi
  struct _ERESOURCE *v4; // rbx
  DirectComposition::CChannel *v5; // rsi
  unsigned int v6; // ebx

  v2 = DirectComposition::CProcessData::Current();
  v3 = v2;
  if ( v2 )
  {
    v4 = (struct _ERESOURCE *)*((_QWORD *)v2 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v4, 1u);
    v5 = (DirectComposition::CChannel *)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(
                                          *(PRTL_GENERIC_TABLE *)v3,
                                          a1);
    v6 = 0;
    if ( !v5 )
      v6 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v3 + 1));
    KeLeaveCriticalRegion();
    if ( v5 )
      DirectComposition::CChannel::Release(v5);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
