/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02F8878
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F8E90 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C0015408 (MonitorAreSpecializedDisplaysSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C0340B60 (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, char a2)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v13; // rsi
  __int64 v14; // rcx
  bool v16; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v5 = Current;
  if ( Current && (*((_DWORD *)Current + 106) & 4) != 0 )
    return 0LL;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v9, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
    v13 = SessionDataForSpecifiedSession;
    if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18500) )
      return 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v5 + 11) + 208LL))() )
    return 3221225506LL;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v14) )
  {
    if ( DXGPROCESS::IsCurrentThreadAppContainer() )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
      v18 = 0;
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v18) < 0 || !v18 )
        return 3221225506LL;
    }
    return 0LL;
  }
  v16 = g_OSTestSigningEnabled != 0;
  if ( v13 && *((_BYTE *)v13 + 18501) )
    v16 = 0;
  if ( DXGPROCESS::IsCurrentThreadAppContainer() || a2 && !v16 )
    return 3221225506LL;
  if ( v3 == 2 )
  {
    if ( (unsigned int)MonitorAreSpecializedDisplaysSupported() )
      return 0LL;
    return 3221225506LL;
  }
  return v3 != 1 ? 0xC0000022 : 0;
}
