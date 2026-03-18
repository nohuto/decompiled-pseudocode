/*
 * XREFs of ?INIT_CRIT_RESOURCE@@YAPEAU_ERESOURCE@@XZ @ 0x1C00D13D4
 * Callers:
 *     InitCreateUserCrit @ 0x1C02DD5E0 (InitCreateUserCrit.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *INIT_CRIT_RESOURCE(void)
{
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v1; // rbx

  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  v1 = Pool2;
  if ( Pool2 && ExInitializeResourceLite(Pool2) < 0 )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}
