/*
 * XREFs of UserGetLastStatus @ 0x1C00156FC
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C006CD10 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastStatus()
{
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[200].Self);
  else
    return LODWORD(Self[83].ArbitraryUserPointer);
}
