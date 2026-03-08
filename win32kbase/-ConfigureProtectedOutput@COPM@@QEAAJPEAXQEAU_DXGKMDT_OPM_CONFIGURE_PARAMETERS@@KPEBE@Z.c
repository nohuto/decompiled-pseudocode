/*
 * XREFs of ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C01880F8
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C0188F50 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C0187FD4 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0188928 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::ConfigureProtectedOutput(
        void **this,
        void *a2,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  PRKMUTEX *v5; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (PRKMUTEX *)(this + 6);
  OPM::CMutex::Lock(this + 6);
  v12 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(this + 3, a2, &v12);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::Configure(v12, a3, a4, a5);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v5 )
    KeReleaseMutex(*v5, 0);
  return (unsigned int)HandleObject;
}
