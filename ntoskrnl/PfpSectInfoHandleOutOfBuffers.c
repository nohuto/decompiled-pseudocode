/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x14079C670
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14035B4C8 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
