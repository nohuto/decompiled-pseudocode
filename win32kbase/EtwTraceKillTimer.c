/*
 * XREFs of EtwTraceKillTimer @ 0x1C00BAB40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00EE6B4 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceKillTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &TimerKillTimer, a3, *(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 96));
  return result;
}
