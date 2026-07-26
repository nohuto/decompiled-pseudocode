/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C0123340
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0031CE4 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0145F24 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
