/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0188D94
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0189970 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0188928 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0188E24 (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 */

__int64 __fastcall COPM::SetSigningKeyAndSequenceNumbers(
        void **this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a3)
{
  PRKMUTEX *v3; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (PRKMUTEX *)(this + 6);
  OPM::CMutex::Lock(this + 6);
  v9 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)(this + 3), a2, &v9);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v3 )
    KeReleaseMutex(*v3, 0);
  return (unsigned int)HandleObject;
}
