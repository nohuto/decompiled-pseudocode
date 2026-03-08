/*
 * XREFs of ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C027C488
 * Callers:
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0283F18 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NEEDDDILOCK::~NEEDDDILOCK(NEEDDDILOCK *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    GreUnlockDisplayDevice(*(_QWORD *)(v2 + 48));
    *(_QWORD *)this = 0LL;
  }
}
