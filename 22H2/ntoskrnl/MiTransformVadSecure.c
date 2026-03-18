/*
 * XREFs of MiTransformVadSecure @ 0x140A31FC4
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x14061C780 (MiCheckLockUnlockByVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTransformVadSecure(__int64 a1, __int64 a2)
{
  return a2 ^ qword_140C65B40 ^ a1;
}
