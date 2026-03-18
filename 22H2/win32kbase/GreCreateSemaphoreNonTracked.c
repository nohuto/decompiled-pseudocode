/*
 * XREFs of GreCreateSemaphoreNonTracked @ 0x1C00BF354
 * Callers:
 *     GreEngLoadModuleTrackInit @ 0x1C02DDF80 (GreEngLoadModuleTrackInit.c)
 *     MultiUserGreCleanupInit @ 0x1C02DDFC8 (MultiUserGreCleanupInit.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *GreCreateSemaphoreNonTracked()
{
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v1; // rbx

  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1835365191LL);
  v1 = Pool2;
  if ( Pool2 && ExInitializeResourceLite(Pool2) < 0 )
  {
    ExFreePoolWithTag(v1, 0);
    return 0LL;
  }
  return v1;
}
