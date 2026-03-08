/*
 * XREFs of EtwTraceInputQueueUnLocked @ 0x1C0163A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpq_EtwWriteTransfer @ 0x1C0164EF8 (McTemplateK0cpq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceInputQueueUnLocked(__int64 a1)
{
  char v1; // di
  PETHREAD *v2; // rcx
  char ThreadId; // bl
  int v4; // r9d
  int v5; // ecx
  int v6; // r8d

  v1 = a1;
  v2 = *(PETHREAD **)(a1 + 72);
  if ( v2 )
    ThreadId = (unsigned __int8)PsGetThreadId(*v2);
  else
    ThreadId = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v4) = GetCallbackCount();
    McTemplateK0cpq_EtwWriteTransfer(v5, (unsigned int)&InputQueueUnLocked, v6, v4, v1, ThreadId);
  }
}
