/*
 * XREFs of UserGetLastStatus @ 0x1C012CD44
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00205DC (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetLastStatus(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[200].Self);
  else
    return LODWORD(Self[83].ArbitraryUserPointer);
}
