/*
 * XREFs of ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C035D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0350AEC (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x1C035F7D8 (-VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z.c)
 */

char __fastcall DXGVAILOBJECT::NotifyVailSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v16; // [rsp+58h] [rbp-20h]

  if ( a2 )
    return 1;
  Object = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)Global + 118),
              a3,
              (struct _KPROCESS **)&Object) >= 0 )
  {
    v16 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
    v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
    DXGSESSIONDATA::VailSendWnfToDwm(SessionDataForSpecifiedSession, a1 != 0);
    if ( v16 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(Object);
  }
  return 0;
}
