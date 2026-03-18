/*
 * XREFs of ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00CE6C8
 * Callers:
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00CE630 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x1C00CFF40 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::GetRandomNumber(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_RANDOM_NUMBER *a2)
{
  void **v2; // rbx
  unsigned int v5; // edi

  v2 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
    v5 = -1071774438;
  else
    v5 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23248Fu, (char *)this + 72, 8u, a2, 0x10u);
  if ( *v2 )
    KeReleaseMutex((PRKMUTEX)*v2, 0);
  return v5;
}
