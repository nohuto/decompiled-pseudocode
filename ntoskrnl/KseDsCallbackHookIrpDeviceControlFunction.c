/*
 * XREFs of KseDsCallbackHookIrpDeviceControlFunction @ 0x14057EAA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KsepDsEventDataIrp @ 0x14057F1E4 (KsepDsEventDataIrp.c)
 */

__int64 __fastcall KseDsCallbackHookIrpDeviceControlFunction(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebx

  v4 = **(unsigned __int8 **)(a2 + 184);
  v5 = (*(__int64 (__fastcall **)(_QWORD))qword_140C047C8)(*(_QWORD *)(a1 + 8));
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 8 * v4 + 32))(a1, a2);
  KsepDsEventDataIrp(*(_QWORD *)(a1 + 8), a1, a2, v4, v6);
  return v6;
}
