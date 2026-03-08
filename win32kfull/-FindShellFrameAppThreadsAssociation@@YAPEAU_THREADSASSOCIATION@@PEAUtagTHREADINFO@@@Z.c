/*
 * XREFs of ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00FA684
 * Callers:
 *     PatchThreadWindows @ 0x1C00FA530 (PatchThreadWindows.c)
 *     DisassociateShellFrameAppThreads @ 0x1C01B4288 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B43A4 (FindShellFrameThreadFromAssociation.c)
 * Callees:
 *     <none>
 */

struct _THREADSASSOCIATION *__fastcall FindShellFrameAppThreadsAssociation(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *result; // rax

  for ( result = (struct _THREADSASSOCIATION *)gShellFrameAppThreadsAssociationList.Flink;
        result != (struct _THREADSASSOCIATION *)&gShellFrameAppThreadsAssociationList;
        result = *(struct _THREADSASSOCIATION **)result )
  {
    if ( *((struct tagTHREADINFO **)result + 2) == a1 || *((struct tagTHREADINFO **)result + 3) == a1 )
      return result;
  }
  return 0LL;
}
