/*
 * XREFs of ?ndisVerifierNdisFPauseComplete@@YAXPEAX@Z @ 0x1C00AC830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisFPauseComplete(_QWORD *a1)
{
  (*((void (__fastcall **)(_QWORD *, _QWORD, void (__stdcall *)(NDIS_HANDLE)))ndisVerifierNdisDispatch + 19))(
    a1,
    a1[98],
    NdisFPauseComplete);
}
