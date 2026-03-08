/*
 * XREFs of ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x180015744
 * Callers:
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1800150E0 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18001560C (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802AC358 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTrimPathOperation::ShouldSplitCurrentSegment(CTrimPathOperation *this)
{
  return *((_DWORD *)this + 8) < 2u && *((float *)this + 11) > *((float *)this + *((unsigned int *)this + 8) + 6);
}
