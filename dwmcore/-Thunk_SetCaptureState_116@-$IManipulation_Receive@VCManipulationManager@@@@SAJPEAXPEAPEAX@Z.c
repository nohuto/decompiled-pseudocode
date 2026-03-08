/*
 * XREFs of ?Thunk_SetCaptureState_116@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18019EE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x18019A7A0 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetCaptureState_116(__int64 a1, __int64 a2)
{
  int *v2; // rax
  __int64 *v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = *(int **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v7 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CManipulation>::Attach(&v7, *v3);
  v5 = v7;
  *(_DWORD *)(v7 + 452) = v4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
