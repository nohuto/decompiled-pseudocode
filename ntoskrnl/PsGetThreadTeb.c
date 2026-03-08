/*
 * XREFs of PsGetThreadTeb @ 0x1402ECAE0
 * Callers:
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14077C5B8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
