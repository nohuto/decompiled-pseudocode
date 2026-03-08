/*
 * XREFs of EtwTraceBeginDelegatedInputWorker @ 0x1C00EDBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpttttttpppqqq_EtwWriteTransfer @ 0x1C01650D4 (McTemplateK0cpttttttpppqqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceBeginDelegatedInputWorker(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v2; // bp
  int v3; // esi
  int v4; // r9d
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 100);
    LOBYTE(v4) = GetCallbackCount();
    return (_UNKNOWN **)McTemplateK0cpttttttpppqqq_EtwWriteTransfer(
                          -__CFSHR__(v3, 7),
                          (unsigned int)&BeginDelegatedInputWorker,
                          -__CFSHR__(v3, 8),
                          v4,
                          v2);
  }
  return result;
}
