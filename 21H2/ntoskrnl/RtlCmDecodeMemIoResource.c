/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x140388BD0
 * Callers:
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140514F70 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     PnpCmResourcesToIoResources @ 0x140821D18 (PnpCmResourcesToIoResources.c)
 *     PnpIsRangeWithin @ 0x1408314C4 (PnpIsRangeWithin.c)
 *     PnpFilterResourceRequirementsList @ 0x14083C0F4 (PnpFilterResourceRequirementsList.c)
 *     IopGenericUnpackResource @ 0x140948130 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x140951944 (PnprAddMemoryResources.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlCmDecodeMemIoResource(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, PULONGLONG Start)
{
  ULONGLONG Length; // r8
  USHORT Flags; // ax

  Length = 0LL;
  if ( ((Descriptor->Type - 1) & 0xFD) != 0 )
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 32;
    }
  }
  else
  {
    Length = Descriptor->u.Generic.Length;
  }
  if ( Start )
    *Start = Descriptor->u.Generic.Start.QuadPart;
  return Length;
}
