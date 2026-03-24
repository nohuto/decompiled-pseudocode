/*
 * XREFs of PsGetThreadTeb @ 0x1402B17F0
 * Callers:
 *     PspWow64SetContextThread @ 0x140695D20 (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140696868 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
