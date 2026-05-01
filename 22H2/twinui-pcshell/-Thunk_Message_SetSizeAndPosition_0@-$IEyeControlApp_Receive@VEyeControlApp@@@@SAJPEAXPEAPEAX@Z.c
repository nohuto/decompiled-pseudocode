/*
 * XREFs of ?Thunk_Message_SetSizeAndPosition_0@?$IEyeControlApp_Receive@VEyeControlApp@@@@SAJPEAXPEAPEAX@Z @ 0x1804E97F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IEyeControlApp_Receive<EyeControlApp>::Thunk_Message_SetSizeAndPosition_0(
        __int64 a1,
        unsigned int **a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(a1 + 56) + 24LL))(
    *(_QWORD *)(a1 + 56),
    **a2,
    *a2[1],
    *a2[2],
    *a2[3]);
  return 0LL;
}
