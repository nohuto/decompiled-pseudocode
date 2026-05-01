/*
 * XREFs of ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x18020BB40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x18020BA14 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
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
