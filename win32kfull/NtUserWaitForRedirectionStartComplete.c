/*
 * XREFs of NtUserWaitForRedirectionStartComplete @ 0x1C01E12D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C00F4978 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserWaitForRedirectionStartComplete()
{
  NTSTATUS v0; // ebx
  PVOID v1; // rdi
  Gre::Base *v2; // rcx
  void *RedirectionEvent; // rcx
  NTSTATUS v4; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0LL;
  GreLockDwmState();
  RedirectionEvent = (void *)GreGetRedirectionEvent(v2);
  if ( RedirectionEvent )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(RedirectionEvent, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v1 = Object;
    v0 = v4;
  }
  GreUnlockDwmState(RedirectionEvent);
  if ( v0 >= 0 && v1 )
  {
    v0 = KeWaitForSingleObject(v1, Executive, 0, 1u, 0LL);
    ObfDereferenceObject(v1);
  }
  return (unsigned __int64)(unsigned int)~v0 >> 31;
}
