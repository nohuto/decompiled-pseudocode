/*
 * XREFs of ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0188B5C
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C0189880 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0188928 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0188BEC (-GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 */

__int64 __fastcall COPM::GetRandomNumber(void **this, unsigned __int64 a2, struct _DXGKMDT_OPM_RANDOM_NUMBER *a3)
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
    HandleObject = COPMProtectedOutput::GetRandomNumber(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v3 )
    KeReleaseMutex(*v3, 0);
  return (unsigned int)HandleObject;
}
