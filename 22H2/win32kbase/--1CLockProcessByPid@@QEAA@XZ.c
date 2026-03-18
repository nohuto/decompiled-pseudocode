/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x1C00D1434
 * Callers:
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1C0009C90 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    ObfDereferenceObject(v1);
}
