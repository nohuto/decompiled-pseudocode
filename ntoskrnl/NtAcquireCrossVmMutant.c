/*
 * XREFs of NtAcquireCrossVmMutant @ 0x140A02A50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExpAcquireCrossVmMutant @ 0x140A02D7C (ExpAcquireCrossVmMutant.c)
 */

__int64 __fastcall NtAcquireCrossVmMutant(void *a1, unsigned __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 *v4; // rbx
  __int64 v5; // rax
  NTSTATUS v6; // esi
  __int64 v7; // r8
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !ExCrossVmMutantObjectType )
    return 3221225508LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = (__int64 *)a2;
  if ( a2 && PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    v9 = *(_QWORD *)v5;
    v4 = &v9;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 0x100000u, ExCrossVmMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = PreviousMode;
    v6 = ExpAcquireCrossVmMutant(Object, v4, v7);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
