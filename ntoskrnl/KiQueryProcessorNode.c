/*
 * XREFs of KiQueryProcessorNode @ 0x140372500
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     KiFindFirstAvailableNode @ 0x1403725D0 (KiFindFirstAvailableNode.c)
 *     KiIsNodeFull @ 0x1403742D8 (KiIsNodeFull.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvlGetApicIdFromLpIndex @ 0x14053DB70 (HvlGetApicIdFromLpIndex.c)
 *     HvlpGetLpcbByApicId @ 0x14053EB98 (HvlpGetLpcbByApicId.c)
 */

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
