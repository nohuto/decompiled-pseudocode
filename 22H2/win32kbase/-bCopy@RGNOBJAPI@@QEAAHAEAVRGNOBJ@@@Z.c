/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00367E0
 * Callers:
 *     GreCombineRgn @ 0x1C003ACD0 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C00BBBB0 (GreCopyVisRgn.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C002C700 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002CBC0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002CCE4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0034E60 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C0034EDC (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(struct OBJECT **this, struct RGNOBJ *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  REGION *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v9 = 0;
  if ( (unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion((RGNOBJ *)this, a2, &v9) )
  {
    v7 = 0LL;
    v8 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v7, v9, v5);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v7);
    if ( v7 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v7, a2);
      v2 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v7);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v7);
    return v2;
  }
  else
  {
    RGNOBJ::vCopy((RGNOBJ *)this, a2);
    return 1LL;
  }
}
