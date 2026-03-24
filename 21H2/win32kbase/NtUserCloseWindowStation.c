/*
 * XREFs of NtUserCloseWindowStation @ 0x1C00A14B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ApiSetEditionCloseWindowStationEntryPoint @ 0x1C00A1528 (ApiSetEditionCloseWindowStationEntryPoint.c)
 *     ValidateHwinsta @ 0x1C00A15F0 (ValidateHwinsta.c)
 */

__int64 __fastcall NtUserCloseWindowStation(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // edi
  ULONG v6; // eax
  __int64 v7; // rdx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  Object = 0LL;
  LOBYTE(a2) = 1;
  if ( (int)ValidateHwinsta(a1, a2, 0LL, &Object) >= 0 )
  {
    v4 = ApiSetEditionCloseWindowStationEntryPoint(a1);
    ObfDereferenceObject(Object);
    if ( v4 < 0 )
    {
      v6 = RtlNtStatusToDosError(v4);
      UserSetLastError(v6, v7);
    }
    else
    {
      return 1LL;
    }
  }
  return v2;
}
