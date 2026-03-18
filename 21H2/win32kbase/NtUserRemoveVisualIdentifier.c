/*
 * XREFs of NtUserRemoveVisualIdentifier @ 0x1C0160490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4934 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C023D5F0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 */

__int64 __fastcall NtUserRemoveVisualIdentifier(struct _LUID *a1)
{
  int v1; // ebx
  NTSTATUS v3; // eax
  ULONG v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _LUID v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v8 = *a1;
  if ( CDesktopInputSink::IsEqualByLuid(&v8) )
    return -1073741790LL;
  v3 = InputObjectMap::RemoveMapping(&v8, 0LL);
  if ( v3 >= 0 )
  {
    return 1;
  }
  else
  {
    v4 = RtlNtStatusToDosError(v3);
    UserSetLastError(v4, v5, v6, v7);
  }
  return v1;
}
