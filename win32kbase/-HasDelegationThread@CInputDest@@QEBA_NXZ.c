/*
 * XREFs of ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C00F1E86
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C0210784 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C0210B80 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::HasDelegationThread(CInputDest *this)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 23) == 1 )
    return *(_QWORD *)(*((_QWORD *)this + 10) + 64LL) != 0LL;
  if ( *((_DWORD *)this + 23) == 2 )
  {
    v2 = *((_QWORD *)this + 10);
    if ( *(_QWORD *)(v2 + 264) || *(_QWORD *)(*(_QWORD *)(v2 + 16) + 1336LL) )
      return 1;
  }
  return v1;
}
