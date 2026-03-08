/*
 * XREFs of MiTransformVadSecure @ 0x140A2F294
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x14061A2D0 (MiCheckLockUnlockByVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTransformVadSecure(__int64 a1, __int64 a2)
{
  return a2 ^ qword_140C656C0 ^ a1;
}
