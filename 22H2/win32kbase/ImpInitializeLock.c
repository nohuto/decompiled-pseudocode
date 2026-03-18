/*
 * XREFs of ImpInitializeLock @ 0x1C00C37F4
 * Callers:
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 * Callees:
 *     ImpAllocate @ 0x1C007B048 (ImpAllocate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ImpInitializeLock()
{
  struct _ERESOURCE *v0; // rax
  struct _ERESOURCE *v1; // rdi
  NTSTATUS v2; // ebx

  if ( ImpRequestLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v0 = (struct _ERESOURCE *)ImpAllocate(104LL, 0, 1);
  v1 = v0;
  if ( v0 )
  {
    v2 = ExInitializeResourceLite(v0);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(v1, 0);
    }
    else
    {
      qword_1C028F9C8 = 0LL;
      ImpRequestLock = v1;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v2;
}
