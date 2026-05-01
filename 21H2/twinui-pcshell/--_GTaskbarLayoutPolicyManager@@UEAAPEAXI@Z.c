/*
 * XREFs of ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x18020BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x18020BBC4 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 */

TaskbarLayoutPolicyManager *__fastcall TaskbarLayoutPolicyManager::`scalar deleting destructor'(
        TaskbarLayoutPolicyManager *this,
        char a2)
{
  TaskbarLayoutPolicyManager::~TaskbarLayoutPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
