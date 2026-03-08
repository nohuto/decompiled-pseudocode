/*
 * XREFs of MmSessionGetWin32Callouts @ 0x14034C010
 * Callers:
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     NtFindAtom @ 0x1407DABC0 (NtFindAtom.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  union _RTL_RUN_ONCE *result; // rax

  result = &PsWin32NullCallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608) >= 2uLL )
    return &PsWin32CallBack;
  return result;
}
