/*
 * XREFs of ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C016CA24
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C016CF30 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00CEDBC (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C016C918 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall COPM::ConfigureProtectedOutput(
        COPM *this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  OPM *v5; // rdi
  PRKMUTEX *v9; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  v5 = qword_1C0296A08;
  v9 = (PRKMUTEX *)((char *)qword_1C0296A08 + 48);
  OPM::CMutex::Lock((void **)qword_1C0296A08 + 6);
  v12 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v5 + 24, a2, &v12);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::Configure(v12, a3, a4, a5);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v9 )
    KeReleaseMutex(*v9, 0);
  return (unsigned int)HandleObject;
}
