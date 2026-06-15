/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002BD0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000F580 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140016140 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  CAudioDeviceGraph::RegisterSpatialPipe((CAudioDeviceGraph *)((char *)this - 16), a2, 0);
  CPipeInstance::DeactivateAPOsAndRemoveConnections((struct IAudioProcessor **)a2);
  v6 = (_QWORD *)*((_QWORD *)a2 + 31);
  v9 = v6;
  while ( v6 )
  {
    v5 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v5, &v9);
    v6 = v9;
    *(_QWORD *)(v5 + 8) = -1LL;
  }
  v7 = *((_QWORD *)a2 + 19);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)a2 + 19) = 0LL;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
