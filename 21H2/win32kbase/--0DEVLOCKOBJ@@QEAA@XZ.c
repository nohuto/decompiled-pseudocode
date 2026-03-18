/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0062ED0
 * Callers:
 *     GreGetNearestColor @ 0x1C0062D20 (GreGetNearestColor.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0062EFC (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vInit(this);
  return this;
}
