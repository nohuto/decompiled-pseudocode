/*
 * XREFs of ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00A2A4C
 * Callers:
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00E6A88 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00A2E6C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

struct tagWND *__fastcall DCETopLevelSpeedHitTest(
        struct tagDESKTOP *a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3)
{
  struct tagWND *v4; // rdi
  struct tagWND *i; // rbx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
  for ( i = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL);
        i;
        i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( (unsigned int)DCEIsWindowHit(i, a2, a3) )
    {
      v4 = i;
      if ( *(char *)(*((_QWORD *)i + 5) + 19LL) < 0 )
        v4 = 0LL;
      break;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9);
  return v4;
}
