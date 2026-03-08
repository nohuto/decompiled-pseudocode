/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0042720
 * Callers:
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0043670 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0045420 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v10, *(_DWORD *)(*(_QWORD *)this + 48LL));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
  if ( !v10
    || (RGNOBJ::vCopy((RGNOBJ *)&v10, this), (v8 = RGNOBJ::iCombine((RGNOBJ *)&v10, a2, a3, a4)) == 0)
    || !(unsigned int)RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v10) )
  {
    v8 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  return v8;
}
