/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00B0B08
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C000A980 (NtDCompositionCreateDwmChannel.c)
 *     NtDCompositionCreateChannel @ 0x1C000CBA0 (NtDCompositionCreateChannel.c)
 *     NtDCompositionDestroyChannel @ 0x1C00B0AF0 (NtDCompositionDestroyChannel.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00B0BA8 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?RemoveObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAPEAVCChannel@2@I@Z @ 0x1C00B0BD8 (-RemoveObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  DirectComposition::CChannel *v7; // rsi
  unsigned int v8; // ebx

  v4 = DirectComposition::CProcessData::Current(a1, a2, a3, a4);
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)v4 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    v7 = (DirectComposition::CChannel *)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(*(PRTL_GENERIC_TABLE *)v5);
    v8 = 0;
    if ( !v7 )
      v8 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 1));
    KeLeaveCriticalRegion();
    if ( v7 )
      DirectComposition::CChannel::Release(v7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
