/*
 * XREFs of ?SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z @ 0x1C00B264C
 * Callers:
 *     UnloadWin32kCall @ 0x1C00B1C18 (UnloadWin32kCall.c)
 *     InitializeWin32kCall @ 0x1C00B2080 (InitializeWin32kCall.c)
 * Callees:
 *     <none>
 */

struct _EJOB *__fastcall SetWin32kSilo(void **a1)
{
  __int64 v2; // rbx
  __int64 HostSilo; // rax
  __int128 JobInformation; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v2 = 0LL;
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    JobInformation = 0LL;
    v6 = 0LL;
    if ( ZwQueryInformationJobObject(0LL, JobObjectEndOfJobTimeInformation|0x20, &JobInformation, 0x20u, 0LL) >= 0 )
    {
      if ( BYTE12(JobInformation) )
      {
        HostSilo = PsGetHostSilo();
        v2 = PsAttachSiloToCurrentThread(HostSilo);
        *a1 = (void *)*((_QWORD *)&v6 + 1);
      }
    }
  }
  return (struct _EJOB *)v2;
}
