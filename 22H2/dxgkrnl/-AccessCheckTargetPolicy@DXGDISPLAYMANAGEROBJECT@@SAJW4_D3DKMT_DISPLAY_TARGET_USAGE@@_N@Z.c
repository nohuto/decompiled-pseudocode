/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02FD6A8
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02FDCC0 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C00155A8 (MonitorAreSpecializedDisplaysSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C03455A0 (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, char a2)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rdi
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v10; // rsi
  __int64 v11; // rcx
  bool v13; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v5 = Current;
  if ( Current && (*((_DWORD *)Current + 106) & 4) != 0 )
    return 0LL;
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
    v10 = SessionDataForSpecifiedSession;
    if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18500) )
      return 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v5 + 11) + 208LL))() )
    return 3221225506LL;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v11) )
  {
    if ( DXGPROCESS::IsCurrentThreadAppContainer() )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
      v15 = 0;
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v15) < 0 || !v15 )
        return 3221225506LL;
    }
    return 0LL;
  }
  v13 = g_OSTestSigningEnabled != 0;
  if ( v10 && *((_BYTE *)v10 + 18501) )
    v13 = 0;
  if ( DXGPROCESS::IsCurrentThreadAppContainer() || a2 && !v13 )
    return 3221225506LL;
  if ( v3 == 2 )
  {
    if ( (unsigned int)MonitorAreSpecializedDisplaysSupported() )
      return 0LL;
    return 3221225506LL;
  }
  return v3 != 1 ? 0xC0000022 : 0;
}
