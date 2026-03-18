/*
 * XREFs of PsGetThreadTeb @ 0x140329E50
 * Callers:
 *     PspWow64SetContextThread @ 0x1407A0968 (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407A0D54 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
