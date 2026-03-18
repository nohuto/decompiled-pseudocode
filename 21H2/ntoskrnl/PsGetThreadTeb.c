/*
 * XREFs of PsGetThreadTeb @ 0x14029A290
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407049DC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspWow64SetContextThread @ 0x140705578 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
