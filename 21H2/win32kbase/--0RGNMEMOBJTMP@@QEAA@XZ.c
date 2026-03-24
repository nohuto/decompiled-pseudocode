/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0096970
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AB70 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C0141FB0 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C014BF40 (GreIntersectVisRect.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002B038 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002B750 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, __int64 a2, __int64 a3)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vInitialize(this, 112LL, a3);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
