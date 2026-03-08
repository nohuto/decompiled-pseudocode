/*
 * XREFs of ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C023A1B8
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0235884 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0238700 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendShellOutput(__int64 a1, int a2)
{
  _DWORD *v2; // rbx
  void (__fastcall ***v3)(_QWORD, _DWORD *); // rcx

  v2 = (_DWORD *)(a1 + 572);
  *(_DWORD *)(a1 + 576) = a2;
  v3 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v2 = 4;
  (**v3)(v3, v2);
  return memset(v2, 0, 0x254uLL);
}
