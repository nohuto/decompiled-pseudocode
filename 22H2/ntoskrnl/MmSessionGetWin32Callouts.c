/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14025A170
 * Callers:
 *     NtFindAtom @ 0x14061B130 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x140660AC8 (ExCallSessionCallBack.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  _RTL_RUN_ONCE *result; // rax

  result = &PsWin32CallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 680) < 2uLL )
    return &PsWin32NullCallBack;
  return result;
}
