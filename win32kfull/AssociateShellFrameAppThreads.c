/*
 * XREFs of AssociateShellFrameAppThreads @ 0x1C01B41E8
 * Callers:
 *     TryDetachShellFrame @ 0x1C01B7EFC (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AssociateShellFrameAppThreads(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _LIST_ENTRY *v5; // r8
  struct _LIST_ENTRY *Flink; // rax

  result = Win32AllocPoolZInit(40LL, 2037609301LL);
  v5 = (struct _LIST_ENTRY *)result;
  if ( result )
  {
    *(_QWORD *)(result + 16) = a1;
    *(_QWORD *)(result + 24) = a2;
    *(_DWORD *)(result + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Flink = gShellFrameAppThreadsAssociationList.Flink;
    if ( gShellFrameAppThreadsAssociationList.Flink->Blink != &gShellFrameAppThreadsAssociationList )
      __fastfail(3u);
    v5->Flink = gShellFrameAppThreadsAssociationList.Flink;
    v5->Blink = &gShellFrameAppThreadsAssociationList;
    Flink->Blink = v5;
    result = 1LL;
    gShellFrameAppThreadsAssociationList.Flink = v5;
  }
  return result;
}
