/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x14035B4A0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14035B4C8 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a1);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_140C650D0);
  return result;
}
