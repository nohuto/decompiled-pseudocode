/*
 * XREFs of ImpInitializeLock @ 0x1C008BE24
 * Callers:
 *     ImpInitializeWork @ 0x1C0089C08 (ImpInitializeWork.c)
 * Callees:
 *     ImpAllocate @ 0x1C0089EE4 (ImpAllocate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ImpInitializeLock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rdi
  NTSTATUS v5; // ebx

  if ( ImpRequestLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v3 = (struct _ERESOURCE *)ImpAllocate(104LL, 0, 1);
  v4 = v3;
  if ( v3 )
  {
    v5 = ExInitializeResourceLite(v3);
    if ( v5 < 0 )
    {
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      qword_1C02D0988 = 0LL;
      ImpRequestLock = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
