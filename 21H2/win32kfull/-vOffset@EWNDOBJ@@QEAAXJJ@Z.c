/*
 * XREFs of ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1C0287038
 * Callers:
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027DF64 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027E0B4 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 * Callees:
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0156F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

void __fastcall EWNDOBJ::vOffset(EWNDOBJ *this, LONG a2, LONG a3)
{
  struct _POINTL v4; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 || a3 )
  {
    v4.x = a2;
    v4.y = a3;
    RGNOBJ::bOffset((EWNDOBJ *)((char *)this + 56), &v4);
    ERECTL::bOffsetAdd((EWNDOBJ *)((char *)this + 4), &v4, 0);
    ERECTL::bOffsetAdd((EWNDOBJ *)((char *)this + 32), &v4, 0);
  }
}
