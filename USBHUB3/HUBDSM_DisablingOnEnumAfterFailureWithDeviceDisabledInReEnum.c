/*
 * XREFs of HUBDSM_DisablingOnEnumAfterFailureWithDeviceDisabledInReEnum @ 0x1C00239A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_DisablingOnEnumAfterFailureWithDeviceDisabledInReEnum(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  **(_BYTE **)(v1 + 16) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3015LL);
  return 1000LL;
}
