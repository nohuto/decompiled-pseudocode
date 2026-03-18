/*
 * XREFs of EtwTraceBeginDelegateInputCallback @ 0x1C014C560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C014C390 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C014F6F8 (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceBeginDelegateInputCallback(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v2; // r15
  int v3; // edi
  int v4; // r9d
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 100);
    LOBYTE(v4) = GetCallbackCount();
    return (_UNKNOWN **)McTemplateK0cpttttttpppqq_EtwWriteTransfer(
                          -__CFSHR__(v3, 7),
                          (unsigned int)&BeginDelegateInputCallback,
                          -__CFSHR__(v3, 8),
                          v4,
                          v2);
  }
  return result;
}
