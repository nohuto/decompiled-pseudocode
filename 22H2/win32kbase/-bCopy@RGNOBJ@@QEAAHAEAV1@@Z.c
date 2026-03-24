/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0034DB0
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0033EC0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003BFE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0140CD8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0142300 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002CBC0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002CCE4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002D230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0034E60 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C0034EDC (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v4; // r8
  REGION *v6; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+28h] [rbp-8h]
  unsigned int v8; // [rsp+50h] [rbp+20h] BYREF

  v8 = 0;
  if ( !(unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(this, a2, &v8) )
  {
    RGNOBJ::vCopy(this, a2);
    return 1LL;
  }
  v6 = 0LL;
  v7 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v6, v8, v4);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v6);
  if ( v6 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v6, a2);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v6);
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v6);
    return 1LL;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v6);
  return 0LL;
}
