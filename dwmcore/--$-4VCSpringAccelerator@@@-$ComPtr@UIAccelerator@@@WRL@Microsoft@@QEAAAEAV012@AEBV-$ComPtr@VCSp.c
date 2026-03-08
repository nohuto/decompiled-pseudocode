/*
 * XREFs of ??$?4VCSpringAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCSpringAccelerator@@@12@@Z @ 0x180238294
 * Callers:
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x18023A2D4 (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringAccelerator>(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD))
{
  __int64 (__fastcall ***v2)(_QWORD); // rbx
  __int64 v4; // rcx
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v6 = *a2;
  v2 = v6;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v6);
  v4 = *a1;
  *a1 = (__int64)v2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
