/*
 * XREFs of FsRtlIsDaxVolume @ 0x14053A5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlIsDaxVolume(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 16);
  return v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 && (*(_DWORD *)(v2 + 48) & 0x10000000) != 0;
}
