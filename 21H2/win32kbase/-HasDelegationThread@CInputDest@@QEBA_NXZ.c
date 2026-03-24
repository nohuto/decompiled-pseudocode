/*
 * XREFs of ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C0182DA4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CB20 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A8D64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A9010 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::HasDelegationThread(CInputDest *this)
{
  char v1; // dl
  bool v2; // zf

  v1 = 0;
  if ( *((_DWORD *)this + 23) == 1 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 10) + 64LL) == 0LL;
    return !v2;
  }
  if ( *((_DWORD *)this + 23) == 2 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 10) + 264LL) == 0LL;
    return !v2;
  }
  return v1;
}
