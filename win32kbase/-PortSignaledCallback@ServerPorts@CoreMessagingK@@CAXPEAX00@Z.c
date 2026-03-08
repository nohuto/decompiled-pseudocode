/*
 * XREFs of ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00D26F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0081820 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0083898 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 */

void __fastcall CoreMessagingK::ServerPorts::PortSignaledCallback(
        PVOID CallbackContext,
        PVOID Argument1,
        PVOID Argument2)
{
  struct CoreMessagingK::ServerPortInfo *i; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  CoreMessagingK::EntryLock::Acquire(&v5, 0x603u);
  for ( i = CoreMessagingK::ServerPorts::s_PortInfos; i; i = (struct CoreMessagingK::ServerPortInfo *)*((_QWORD *)i + 6) )
  {
    if ( Argument1 == *((PVOID *)i + 1) )
    {
      CoreMessagingK::ServerPorts::DrainPort(i);
      break;
    }
  }
  if ( v5 )
    KeReleaseMutex(Mutex, 0);
}
