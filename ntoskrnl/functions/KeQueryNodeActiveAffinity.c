void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 NodePrimarySubNode; // rax
  __int64 v4; // rdx
  _WORD *v5; // r8

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[NodeNumber], Affinity, Count, 0LL);
    if ( NodePrimarySubNode )
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode, v4, v5);
  }
}
