/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x180156040
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001DA58 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x180027028 (-ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x180027068 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  __int64 i; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 50); i = (unsigned int)(i + 1) )
  {
    v3 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 22) + 8 * i);
    if ( v3 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v3);
  }
  *((_DWORD *)this + 50) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 176, 8u);
  CFrameInfo::ReleaseResponses(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 208);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
  CScheduleFrameInfoVolatileData::ResetTokens(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
}
