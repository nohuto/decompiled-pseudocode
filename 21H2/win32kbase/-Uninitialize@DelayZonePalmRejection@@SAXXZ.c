/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00748E0
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00730D0 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0074984 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00749C0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 */

void DelayZonePalmRejection::Uninitialize(void)
{
  DelayZonePalmRejection *v0; // rax
  DelayZoneTelemetry *v1; // rcx
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  if ( DelayZonePalmRejection::s_instance )
  {
    if ( *((_QWORD *)DelayZonePalmRejection::s_instance + 3) )
      HMAssignmentUnlock((__int64 *)DelayZonePalmRejection::s_instance + 3);
    CInpLockGuard::Uninitialize((DelayZonePalmRejection *)((char *)DelayZonePalmRejection::s_instance + 112));
    v0 = DelayZonePalmRejection::s_instance;
    v1 = (DelayZoneTelemetry *)*((_QWORD *)DelayZonePalmRejection::s_instance + 16);
    if ( v1 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v1);
      Win32FreePool(*((_QWORD *)DelayZonePalmRejection::s_instance + 16));
      v0 = DelayZonePalmRejection::s_instance;
      *((_QWORD *)DelayZonePalmRejection::s_instance + 16) = 0LL;
    }
    v2 = (_QWORD *)((char *)v0 + 72);
    v3 = (_QWORD *)*((_QWORD *)v0 + 9);
    while ( v3 != v2 )
    {
      v4 = (_QWORD *)*v3;
      v5 = (__int64)v3;
      v3 = v4;
      if ( v4[1] != v5 || (v6 = *(_QWORD **)(v5 + 8), *v6 != v5) )
        __fastfail(3u);
      *v6 = v4;
      v4[1] = v6;
      Win32FreePool(v5);
    }
    Win32FreePool((__int64)DelayZonePalmRejection::s_instance);
    DelayZonePalmRejection::s_instance = 0LL;
  }
}
