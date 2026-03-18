/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x140748E10
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1402F5478 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
