/*
 * XREFs of MiPteIsSessionDynamicBuffer @ 0x14038BDB8
 * Callers:
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPteIsSessionDynamicBuffer(unsigned __int64 a1)
{
  return a1 >= (((unsigned __int64)qword_140C4CD90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 < (((unsigned __int64)(qword_140C4CD90 + 0x2000) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
