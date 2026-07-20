/*
 * XREFs of SmpAdoptJob @ 0x140018040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpAdoptJob(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  void *TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  result = NtDuplicateObject(
             *(HANDLE *)(a2 + 32),
             *(HANDLE *)(a1 + 48),
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x1F003Fu,
             0,
             0);
  if ( result >= 0 )
  {
    v3 = NtAssignProcessToJobObject(TargetHandle, (HANDLE)0xFFFFFFFFFFFFFFF9LL);
    NtClose(TargetHandle);
    return v3;
  }
  return result;
}
