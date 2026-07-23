/*
 * XREFs of sub_1403DCD30 @ 0x1403DCD30
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x140408740 (_guard_check_icall.c)
 */

__int64 __fastcall sub_1403DCD30(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rbx

  v3 = a1[2];
  v4 = v3 ^ a1[1];
  v5 = (__int64 (__fastcall *)(__int64))(v3 ^ a1[3]);
  if ( (*(_DWORD *)(v4 + 0x994) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2, a3);
  else
    _mm_lfence();
  return v5(v4);
}
