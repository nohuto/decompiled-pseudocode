/*
 * XREFs of PfTGetFreeBuffer @ 0x1407E68E0
 * Callers:
 *     PfTReplaceCurrentBuffer @ 0x1407E6840 (PfTReplaceCurrentBuffer.c)
 *     PfTAllocateBuffers @ 0x140844D98 (PfTAllocateBuffers.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PfTGetFreeBuffer(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  result = 0LL;
  if ( v1 )
  {
    *(_QWORD *)(a1 + 16) = *v1;
    result = v1;
    --*(_WORD *)(a1 + 10);
  }
  return result;
}
