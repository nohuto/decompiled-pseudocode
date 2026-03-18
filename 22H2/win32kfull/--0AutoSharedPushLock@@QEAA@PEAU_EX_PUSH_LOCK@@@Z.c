/*
 * XREFs of ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0074224
 * Callers:
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C00741EC (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

AutoSharedPushLock *__fastcall AutoSharedPushLock::AutoSharedPushLock(
        AutoSharedPushLock *this,
        struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(a2);
  return this;
}
