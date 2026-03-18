/*
 * XREFs of FindShellFrameThreadFromAssociation @ 0x1C01B31E4
 * Callers:
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5C70 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01B6D5C (TryDetachShellFrame.c)
 *     _SetThreadQueueMergeSetting @ 0x1C01E3890 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00213CC (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall FindShellFrameThreadFromAssociation(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *ShellFrameAppThreadsAssociation; // rax
  __int64 v2; // rcx

  ShellFrameAppThreadsAssociation = FindShellFrameAppThreadsAssociation(a1);
  if ( ShellFrameAppThreadsAssociation && *((_QWORD *)ShellFrameAppThreadsAssociation + 3) == v2 )
    return *((_QWORD *)ShellFrameAppThreadsAssociation + 2);
  else
    return 0LL;
}
