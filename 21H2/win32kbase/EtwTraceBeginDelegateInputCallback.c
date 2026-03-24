/*
 * XREFs of EtwTraceBeginDelegateInputCallback @ 0x1C01216A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C0124DA0 (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceBeginDelegateInputCallback(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // r9d
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v3) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    else
      LOBYTE(v3) = -1;
    return (_UNKNOWN **)McTemplateK0cpttttttpppqq_EtwWriteTransfer(
                          -__CFSHR__(*(_DWORD *)(a1 + 100), 7),
                          (unsigned int)&BeginDelegateInputCallback,
                          -__CFSHR__(*(_DWORD *)(a1 + 100), 8),
                          v3,
                          a1);
  }
  return result;
}
