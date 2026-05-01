/*
 * XREFs of ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x1802955B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x180295508 (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 */

PWSLayoutPolicyManager *__fastcall PWSLayoutPolicyManager::`vector deleting destructor'(
        PWSLayoutPolicyManager *this,
        char a2)
{
  PWSLayoutPolicyManager::~PWSLayoutPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
