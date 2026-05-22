/*
 * XREFs of ?RemoveOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1801391A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 */

void *__fastcall DWMInputRouter::RemoveOnDeviceAttachCallback(__int64 a1, __int64 a2)
{
  char *v2; // r8
  char *i; // rcx
  void *result; // rax

  v2 = *(char **)(a1 + 624);
  for ( i = *(char **)(a1 + 616); i != v2 && *(_QWORD *)i != a2; i += 8 )
    ;
  result = memmove_0(i, i + 8, v2 - (i + 8));
  *(_QWORD *)(a1 + 624) -= 8LL;
  return result;
}
