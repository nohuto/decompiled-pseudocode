/*
 * XREFs of EtwTraceEndDelegateInputCallback @ 0x1C0162180
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C0164F7C (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndDelegateInputCallback(__int64 a1)
{
  char v1; // r15
  int v2; // edi
  int v3; // r9d

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 100);
    LOBYTE(v3) = GetCallbackCount();
    McTemplateK0cpttttttpppqq_EtwWriteTransfer(
      -__CFSHR__(v2, 7),
      (unsigned int)&EndDelegateInputCallback,
      -__CFSHR__(v2, 8),
      v3,
      v1);
  }
}
