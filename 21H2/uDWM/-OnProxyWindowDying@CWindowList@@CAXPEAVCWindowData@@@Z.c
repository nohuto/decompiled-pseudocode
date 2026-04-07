/*
 * XREFs of ?OnProxyWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x18005788C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180014FCC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnProxyWindowDying(struct CWindowData *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 75) + 592LL) = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65)
                                                         + 112LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
    *(_QWORD *)(*((_QWORD *)a1 + 75) + 40LL),
    0LL,
    *((_QWORD *)a1 + 5));
}
