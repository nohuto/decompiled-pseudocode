/*
 * XREFs of ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z @ 0x18020875C
 * Callers:
 *     ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x180209334 (-ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETMANI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CManipulation>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
