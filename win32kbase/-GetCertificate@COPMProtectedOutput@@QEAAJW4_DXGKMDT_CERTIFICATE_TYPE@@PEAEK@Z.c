/*
 * XREFs of ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C018869C
 * Callers:
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0188604 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     CallMonitor @ 0x1C017EE60 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCertificate(
        COPMProtectedOutput *this,
        enum _DXGKMDT_CERTIFICATE_TYPE a2,
        unsigned __int8 *a3,
        ULONG a4)
{
  void **v4; // rbx
  unsigned int v8; // edi
  enum _DXGKMDT_CERTIFICATE_TYPE InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v4 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
    v8 = -1071774438;
  else
    v8 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232487u, &InputBuffer, 4u, a3, a4);
  if ( *v4 )
    KeReleaseMutex((PRKMUTEX)*v4, 0);
  return v8;
}
