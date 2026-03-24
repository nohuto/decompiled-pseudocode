/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02B1494
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B1990 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C0142B0C (MonitorAreSpecializedDisplaysSupported.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C0285E8C (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  int v5; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rcx
  bool v16; // zf
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  v5 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v9 = Current;
  if ( Current && *((_BYTE *)Current + 346) )
    return 0LL;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 102);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18492) )
    return 0LL;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v9 + 11) + 208LL))() )
    return 3221225506LL;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v15) )
  {
    if ( !DXGPROCESS::IsCurrentThreadAppContainer() )
      return 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
    v19 = 0;
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v19) >= 0 )
    {
      v16 = v19 == 0;
      goto LABEL_18;
    }
    return 3221225506LL;
  }
  if ( DXGPROCESS::IsCurrentThreadAppContainer() || v4 && !g_OSTestSigningEnabled )
    return 3221225506LL;
  if ( v5 != 2 )
  {
    if ( v5 != 1 )
      return 3221225506LL;
    return 0LL;
  }
  v16 = !MonitorAreSpecializedDisplaysSupported();
LABEL_18:
  if ( v16 )
    return 3221225506LL;
  return 0LL;
}
