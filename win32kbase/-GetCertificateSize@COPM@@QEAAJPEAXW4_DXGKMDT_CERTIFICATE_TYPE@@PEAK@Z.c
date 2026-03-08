/*
 * XREFs of ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C01887D8
 * Callers:
 *     NtGdiGetCertificateByHandle @ 0x1C0189520 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C01896F0 (NtGdiGetCertificateSizeByHandle.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetCertificateSize@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C018886C (-GetCertificateSize@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0188928 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::GetCertificateSize(void **this, void *a2, enum _DXGKMDT_CERTIFICATE_TYPE a3, unsigned int *a4)
{
  PRKMUTEX *v4; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (PRKMUTEX *)(this + 6);
  OPM::CMutex::Lock(this + 6);
  v11 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(this + 3, a2, &v11);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetCertificateSize(v11, a3, a4);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v4 )
    KeReleaseMutex(*v4, 0);
  return (unsigned int)HandleObject;
}
