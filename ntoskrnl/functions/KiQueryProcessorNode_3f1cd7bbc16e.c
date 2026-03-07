__int64 __fastcall KiQueryProcessorNode(unsigned int a1, _DWORD *a2, _WORD *a3)
{
  __int64 v6; // r14
  unsigned int ProcessorNode; // eax
  unsigned int FirstAvailableNode; // ebx
  __int64 LpcbByApicId; // rax

  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
  {
    v6 = (unsigned __int16)*a3;
    if ( KiNumaQueryProcessorNode )
    {
      ProcessorNode = KiNumaQueryProcessorNode(a1);
      FirstAvailableNode = ProcessorNode;
      if ( ProcessorNode )
      {
        if ( ProcessorNode == -1073741275 )
        {
          if ( (_WORD)v6 == 0xFFFF || (unsigned __int8)KiIsNodeFull(KeNodeBlock[v6]) )
            return FirstAvailableNode;
          FirstAvailableNode = 0;
          *a3 = v6;
        }
LABEL_6:
        if ( FirstAvailableNode )
          return FirstAvailableNode;
        goto LABEL_7;
      }
      if ( *a3 == 0xFFFF )
      {
        FirstAvailableNode = KiFindFirstAvailableNode(a3);
        goto LABEL_6;
      }
    }
    else
    {
      if ( a1 >= KiMaximumGroupSize )
        return (unsigned int)-1073741275;
      *a3 = 0;
      FirstAvailableNode = 0;
    }
LABEL_7:
    if ( (*(_BYTE *)(KeNodeBlock[(unsigned __int16)*a3] + 10) & 2) == 0 )
      FirstAvailableNode = -1073741275;
    if ( *a2 == -1 )
      HvlGetApicIdFromLpIndex(a1, a2);
    if ( (HvlpFlags & 2) == 0 )
      return FirstAvailableNode;
    LpcbByApicId = HvlpGetLpcbByApicId((unsigned int)*a2);
    if ( LpcbByApicId )
    {
      if ( *(_DWORD *)(LpcbByApicId + 48) )
        return FirstAvailableNode;
    }
    return (unsigned int)-1073741275;
  }
  _mm_lfence();
  *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
  return 0LL;
}
