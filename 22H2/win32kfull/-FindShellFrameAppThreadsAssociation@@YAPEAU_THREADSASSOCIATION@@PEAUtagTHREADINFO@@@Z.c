/*
 * XREFs of ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00213CC
 * Callers:
 *     PatchThreadWindows @ 0x1C00211F0 (PatchThreadWindows.c)
 *     DisassociateShellFrameAppThreads @ 0x1C01B30C8 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B31E4 (FindShellFrameThreadFromAssociation.c)
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
