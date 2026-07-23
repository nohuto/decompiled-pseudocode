/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140272C9C
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x14038F384 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(PRTL_BALANCED_NODE Node, _RTL_RB_TREE *a2)
{
  char result; // al
  _RTL_RB_TREE *v4; // rbx
  BOOLEAN v5; // cl
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v7; // rax

  result = ((_BYTE *)&Node[8].Left - 16 * LOBYTE(Node[1].Children[0]))[3];
  if ( result > 15 )
    result = 15;
  if ( LOBYTE(Node[2].Children[0]) != result )
  {
    v4 = a2 + 4;
    LOBYTE(Node[2].Children[0]) = result;
    RtlRbRemoveNode(a2 + 4, Node);
    v5 = 0;
    Root = v4->Root;
    if ( (*(_BYTE *)&v4->0 & 1) != 0 )
    {
      if ( Root )
        Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)Root);
      else
        Root = 0LL;
    }
    if ( Root )
    {
      while ( 1 )
      {
        if ( SLOBYTE(Root[2].Children[0]) < SLOBYTE(Node[2].Children[0]) )
        {
          v7 = Root->Children[0];
          if ( (*(_BYTE *)&v4->0 & 1) != 0 )
          {
            if ( !v7 )
              return RtlRbInsertNodeEx(v4, Root, v5, Node);
            v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
            return RtlRbInsertNodeEx(v4, Root, v5, Node);
        }
        else
        {
          v7 = Root->Children[1];
          if ( (*(_BYTE *)&v4->0 & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_11;
            v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
          {
LABEL_11:
            v5 = 1;
            return RtlRbInsertNodeEx(v4, Root, v5, Node);
          }
        }
        Root = v7;
      }
    }
    return RtlRbInsertNodeEx(v4, Root, v5, Node);
  }
  return result;
}
