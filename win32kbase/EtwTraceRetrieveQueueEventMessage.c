/*
 * XREFs of EtwTraceRetrieveQueueEventMessage @ 0x1C00B14B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1C00EE320 (McTemplateK0cppqp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceRetrieveQueueEventMessage(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // rsi
  int v5; // r9d
  int v6; // ecx
  int v7; // r8d

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 96);
    v4 = *(_QWORD *)(a1 + 104);
    LOBYTE(v5) = GetCallbackCount();
    McTemplateK0cppqp_EtwWriteTransfer(v6, (unsigned int)&RetrieveQueueEventMessage, v7, v5, v1, v4, v3, v2);
  }
}
