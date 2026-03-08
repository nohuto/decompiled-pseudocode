/*
 * XREFs of MiCheckLockUnlockByVa @ 0x14061A2D0
 * Callers:
 *     MmLockPhysicalPagesByVa @ 0x140A2AA04 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedSecureVad @ 0x14034C5AC (MiObtainReferencedSecureVad.c)
 *     MiTransformVadSecure @ 0x140A2F294 (MiTransformVadSecure.c)
 */

_BOOL8 __fastcall MiCheckLockUnlockByVa(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  ULONG_PTR v4; // rax
  __int64 **v5; // rax
  int v6; // ecx
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  v3 = 0;
  v8 = 0;
  v4 = MiTransformVadSecure(KeGetCurrentThread()->ApcState.Process, a3);
  v5 = MiObtainReferencedSecureVad(v4, &v8);
  v6 = (_DWORD)v5[6] & 0x70;
  if ( v6 != 16 )
    v3 = ((v6 - 48) & 0xFFFFFFEF) != 0;
  MiUnlockAndDereferenceVad(v5);
  return v3;
}
