/*
 * XREFs of MiDoesControlAreaHaveUserWritableReferences @ 0x1402DFDB4
 * Callers:
 *     MmDoesFileHaveUserWritableReferences @ 0x140330F30 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeFlushRange @ 0x140331078 (MiComputeFlushRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDoesControlAreaHaveUserWritableReferences(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v2; // r9

  v1 = *(_DWORD *)(a1 + 92);
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 112);
    if ( v2 > 1
      && (*(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1752LL) != a1 || v2 - 1 > 1) )
    {
      return 1;
    }
  }
  return v1;
}
