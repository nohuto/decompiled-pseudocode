/*
 * XREFs of ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C02E15D0
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C02E1370 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1C02E1298 (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1C02FEFE0 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C030246C (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::FinalizeCSAccountingAndSendETW(DXGGLOBAL *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v3[4]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-14h]
  void *v5; // [rsp+38h] [rbp-10h]

  PDOBaseEnum::PDOBaseEnum((PDOBaseEnum *)v3);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGGLOBAL *)((char *)this + 2128), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  DripsBlockerTrackingHelper::FinalizeTracking((DXGGLOBAL *)((char *)this + 2296));
  DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
    (DXGGLOBAL *)((char *)this + 2296),
    *((_QWORD *)this + 272),
    v4,
    (unsigned __int64 *)v5);
  *((_DWORD *)this + 530) = 0;
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
  if ( v5 )
    operator delete(v5);
}
