/*
 * XREFs of PopDispatchNotifications @ 0x14073CE20
 * Callers:
 *     <none>
 * Callees:
 *     PopDispatchNotificationsToList @ 0x14073CE68 (PopDispatchNotificationsToList.c)
 */

__int64 PopDispatchNotifications()
{
  char *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  PopDispatchNotificationsToList(&PopPowerSettings);
  v0 = (char *)&PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    result = PopDispatchNotificationsToList(v0);
    v0 += 16;
    --v1;
  }
  while ( v1 );
  return result;
}
