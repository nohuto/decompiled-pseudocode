/*
 * XREFs of NtTerminateEnclave @ 0x140A3CC30
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiTerminateEnclave @ 0x140A3BC78 (MiTerminateEnclave.c)
 */

__int64 __fastcall NtTerminateEnclave(unsigned __int64 a1, int a2)
{
  __int64 v5; // rax
  void *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (a2 & 0xFFFFFFFA) != 0 )
    return 3221225712LL;
  v5 = MiObtainReferencedVadEx(a1, 0, (int *)&v8);
  v6 = (void *)v5;
  if ( !v5 )
    return v8;
  if ( (*(_DWORD *)(v5 + 48) & 0x6200000) == 0x4200000
    && (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 == a1 )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v5, a2);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v6);
  return v7;
}
