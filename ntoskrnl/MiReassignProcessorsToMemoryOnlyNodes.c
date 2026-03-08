/*
 * XREFs of MiReassignProcessorsToMemoryOnlyNodes @ 0x140B971D4
 * Callers:
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140B96EFC (MiFindProcessorsForMemoryOnlyNode.c)
 */

void MiReassignProcessorsToMemoryOnlyNodes()
{
  unsigned int i; // ebx
  int v1; // eax
  _WORD *v2; // rdx
  __int64 j; // rcx

  byte_140C6570C = 1;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v1 = 0;
    v2 = (_WORD *)(*(_QWORD *)(376LL * i + qword_140C65720 + 368) + 10LL);
    for ( j = 0LL; j < 3; ++j )
    {
      if ( *v2 )
        break;
      ++v1;
      ++v2;
    }
    if ( v1 == 3 && !(unsigned int)MiFindProcessorsForMemoryOnlyNode(i, 0) )
    {
      if ( (unsigned int)MiFindProcessorsForMemoryOnlyNode(i, 1u) )
      {
        if ( (unsigned __int8)byte_140C6570C < 2u )
          byte_140C6570C = 2;
      }
      else
      {
        MiFindProcessorsForMemoryOnlyNode(i, 2u);
        byte_140C6570C = 3;
      }
    }
  }
}
