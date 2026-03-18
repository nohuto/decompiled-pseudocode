/*
 * XREFs of ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02E20F0
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C03615BC (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0048768 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C0366F90 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(struct _EPROCESS **this, struct DXGVMBUSCHANNEL *a2)
{
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  int v11; // eax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  if ( !SessionDataForSpecifiedSession )
  {
    v9 = -1073741790LL;
LABEL_6:
    WdLogSingleEntry1(3LL, v9);
    return (unsigned int)v9;
  }
  LODWORD(v9) = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, this + 3);
  if ( (int)v9 >= 0 )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v8);
    this[4] = CurrentProcess;
    ObfReferenceObject(CurrentProcess);
    v11 = DXGVMBUSCHANNEL::RegisterSubscriber(a2, 0x706D6F63u, (struct IDXGCHANNELSUBSCRIBER *)this, this + 1);
    v9 = v11;
    if ( v11 < 0 )
      goto LABEL_6;
  }
  return (unsigned int)v9;
}
