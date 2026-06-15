/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x14000FF0C
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000192C (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400049F0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14003DC3C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140001A10 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000DE80 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000FFC0 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPipeInstance::~CPipeInstance(LPVOID *this)
{
  LPVOID v2; // rcx
  LPVOID v3; // rcx
  LPVOID v4; // rcx
  LPVOID v5; // rcx

  CPipeInstance::Cleanup((CPipeInstance *)this);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(this + 31);
  v2 = this[30];
  if ( v2 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v2 + 16LL))(v2);
  CoTaskMemFree(this[24]);
  this[24] = 0LL;
  v3 = this[23];
  if ( v3 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = this[22];
  if ( v4 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = this[19];
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)(this + 8));
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)(this + 2));
}
