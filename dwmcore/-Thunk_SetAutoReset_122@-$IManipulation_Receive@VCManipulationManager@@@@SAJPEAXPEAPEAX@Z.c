/*
 * XREFs of ?Thunk_SetAutoReset_122@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18019EE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x18019A7A0 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetAutoReset_122(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 *v3; // rdx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = *(char **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v7 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CManipulation>::Attach(&v7, *v3);
  v5 = v7;
  *(_BYTE *)(v7 + 448) ^= (*(_BYTE *)(v7 + 448) ^ (4 * v4)) & 4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
