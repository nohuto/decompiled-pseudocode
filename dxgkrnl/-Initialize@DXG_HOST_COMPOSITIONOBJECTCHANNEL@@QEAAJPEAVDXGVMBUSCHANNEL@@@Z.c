/*
 * XREFs of ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02DD360
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C035CB2C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0047708 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C03624E0 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(struct _EPROCESS **this, struct DXGVMBUSCHANNEL *a2)
{
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  int v14; // eax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  if ( !SessionDataForSpecifiedSession )
  {
    v12 = -1073741790LL;
LABEL_6:
    WdLogSingleEntry1(3LL, v12);
    return (unsigned int)v12;
  }
  LODWORD(v12) = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, this + 3);
  if ( (int)v12 >= 0 )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v11);
    this[4] = CurrentProcess;
    ObfReferenceObject(CurrentProcess);
    v14 = DXGVMBUSCHANNEL::RegisterSubscriber(a2, 0x706D6F63u, (struct IDXGCHANNELSUBSCRIBER *)this, this + 1);
    v12 = v14;
    if ( v14 < 0 )
      goto LABEL_6;
  }
  return (unsigned int)v12;
}
