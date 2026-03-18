/*
 * XREFs of ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0081EE0
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0013470 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0014510 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0080AA4 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081570 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::ReleaseShellResourceAccess(
        DirectComposition::CConnection *this,
        int a2)
{
  struct _ERESOURCE *v2; // rbx
  bool v5; // zf

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 31);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v2, 1u);
  v5 = *((_DWORD *)this + 58) == a2;
  *((_DWORD *)this + 58) -= a2;
  if ( v5 )
    *((_QWORD *)this + 30) = 0LL;
  ExReleaseResourceLite(*((PERESOURCE *)this + 31));
  KeLeaveCriticalRegion();
}
