/*
 * XREFs of ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00CE524
 * Callers:
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00CE3D0 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 * Callees:
 *     <none>
 */

struct PTI_LIST *__fastcall InAffectedThreadList(const struct tagTHREADINFO *a1)
{
  struct PTI_LIST *v2; // rdx
  struct PTI_LIST *result; // rax

  v2 = (struct PTI_LIST *)(SGDGetUserSessionState(a1) + 16880);
  for ( result = *(struct PTI_LIST **)v2; result != v2; result = *(struct PTI_LIST **)result )
  {
    if ( a1 == *((const struct tagTHREADINFO **)result + 2) )
      return result;
  }
  return 0LL;
}
