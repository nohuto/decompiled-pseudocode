/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02E5880
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C005CFF0 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007DCC (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000B140 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005D09C (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005D120 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C0149F08 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C016D47C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(DMMVIDEOPRESENTTARGET *this, char **a2)
{
  struct HDXGMONITOR__ *v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  VIDPN_MGR *v6; // rdi
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  DMMVIDEOPRESENTTARGET *v10; // rcx
  DMMVIDEOPRESENTTARGET *v11; // rcx
  DXGADAPTER **v12; // rcx

  v2 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 5);
    if ( !v4 )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v5);
      v4 = *((_QWORD *)this + 5);
    }
    v6 = *(VIDPN_MGR **)(v4 + 88);
    if ( !v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v7);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v6, v2);
  }
  v8 = (char *)this + 512;
  v9 = *((_QWORD *)this + 64);
  if ( v9 )
  {
    if ( *(char **)(v9 + 8) != v8 || (a2 = (char **)*((_QWORD *)this + 65), *a2 != v8) )
      __fastfail(3u);
    *a2 = (char *)v9;
    *(_QWORD *)(v9 + 8) = a2;
  }
  v10 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  if ( v10 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v10, this);
  v11 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 66);
  if ( v11 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v11, this);
  if ( *((_QWORD *)this + 67) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), -1) != 5 )
    {
      v12 = (DXGADAPTER **)*((_QWORD *)this + 67);
      if ( *v12 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(*v12);
        v12 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      if ( v12[18] )
      {
        IoFreeWorkItem(v12[18]);
        v12 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      operator delete(v12);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64), (__int64)a2);
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
