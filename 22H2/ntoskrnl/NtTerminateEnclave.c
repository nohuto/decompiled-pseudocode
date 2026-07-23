/*
 * XREFs of NtTerminateEnclave @ 0x1408D4B20
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiTerminateEnclave @ 0x1408D3BA8 (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  volatile signed __int32 *v5; // rax
  char *v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v5 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v8);
  v6 = (char *)v5;
  if ( !v5 )
    return v8;
  if ( (v5[12] & 0x3100000) == 0x2100000
    && (PVOID)((*((unsigned int *)v5 + 6) | ((unsigned __int64)*((unsigned __int8 *)v5 + 32) << 32)) << 12) == BaseAddress )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v5, Flags);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v6);
  return v7;
}
